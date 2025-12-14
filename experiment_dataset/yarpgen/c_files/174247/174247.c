/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (-9223372036854775807 - 1)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 -= (min((var_16 | 5768556859798878629), var_15));
        var_22 = min(var_16, var_17);
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_23 = -104;
        var_24 = (max(var_24, var_5));
        arr_4 [i_1] = ((var_15 + ((max(((var_3 ? 910969240 : var_0)), 32736)))));
    }

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_25 = var_15;
        var_26 = (max(var_26, var_0));
        arr_8 [i_2] = var_11;
        var_27 = ((3 ? var_10 : var_17));
        var_28 = (max(var_28, (((((max(var_1, var_9))) ? ((var_1 ? 9223372036854775793 : var_17)) : (((min(var_0, 110)))))))));
    }
    #pragma endscop
}
