/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_14 = ((55595 ? (var_8 >= 65531) : var_0));
        var_15 = 11426;
        arr_3 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 += ((var_12 ? 9940 : ((55595 ? var_10 : (max(var_3, var_1))))));
        arr_8 [i_1] = (max((((arr_4 [i_1]) ? ((-86 ? 11840 : 33868)) : (!-95))), 65535));
    }
    var_17 -= ((var_11 ? var_13 : var_5));
    var_18 = var_2;
    #pragma endscop
}
