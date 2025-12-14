/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((((var_6 ? var_5 : var_8)) ^ ((25908 ? 10524630727115017693 : 15832714260039475818))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = var_10;
        var_15 += ((((15832714260039475818 > 2614029813670075790) == 15832714260039475818)) ? (((!((min(15832714260039475818, 2614029813670075795)))))) : (!2614029813670075798));
        var_16 = (min((((((max(-8856642873825957036, 13344019764669057933))) ? (((-40 == (arr_1 [i_0] [i_0])))) : (arr_1 [i_0 + 1] [i_0])))), (((min(2614029813670075797, 2387673965)) % ((((arr_0 [i_0]) ? 1 : 119)))))));
    }
    var_17 = (39 ? 65528 : ((1143914305352105984 ? 15832714260039475814 : ((min(65535, -1))))));
    #pragma endscop
}
