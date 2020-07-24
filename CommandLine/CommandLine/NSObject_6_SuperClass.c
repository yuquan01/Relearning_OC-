#pragma mark  ------------------------初识
//在objc_class结构体中,第一个成员就是class类型的superclass成员,从其数据类型可以看出,他指向的是一个objc_class类型的数据,也就是指向了一个对象

#pragma mark  ------------------------superclass
//关于如何配置一个objc_class结构的superclass的具体方法并没有找到,因此只能说明一下其机制
//实例对象的superclass指向类对象的父类,类对象的superclass指向其父类类对象,元类对象的superclass指向起父元类对象
//跟类对象的父类指向nil,跟元类对象的父类指向根类对象

#pragma mark  ------------------------总结
/*
 实例对象的父类指向类对象的父类
 类对象的父类指向其父类的类对象,根类对象的父类指向nil
 元类对象的父类指向父类的元类对象,根元类对象的父类指向根类对象
 */