/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 ? (!1) : (((!(((var_5 ? 1 : 1))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (max(var_15, (((((min((arr_1 [i_0]), 402653184))) ? 2137497091778502465 : -1)))));
        var_16 = (max((((!((min(var_6, var_3)))))), (((((0 ? 1 : 2940029021540871130))) ? var_13 : var_2))));
        var_17 -= var_3;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 -= ((!(((min(30756, -26)) >= (!16296)))));
        var_19 = ((((14 ? 1 : 65535))) / ((max(var_5, 1))));
    }
    var_20 = (max(((~((var_2 ? -14 : var_2)))), var_8));
    var_21 = var_11;
    #pragma endscop
}
