/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 -= (((!-64) ? (!var_8) : var_4));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_17 = ((-(arr_4 [i_1 + 1])));
        var_18 = (max(var_18, (((((((arr_1 [i_1]) < (arr_0 [i_1]))))) <= ((15964613978356261080 ? var_5 : var_2))))));
        arr_6 [11] = (((arr_5 [i_1] [i_1 + 1]) ? (~var_11) : ((var_13 ? var_6 : var_9))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_19 = (arr_8 [i_2] [i_2]);
        var_20 *= ((var_5 ? var_12 : -123));
    }
    var_21 = (max(var_21, ((min(((((max(var_2, var_11))) ? ((min(var_3, -113))) : 1)), ((1 ? (-2147483647 - 1) : (-2147483647 - 1))))))));

    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] = (((((-((1 ? 1 : 255))))) ? (((((arr_8 [i_3] [i_3 - 1]) < (arr_11 [i_3]))) ? (max(var_11, (arr_8 [i_3 - 2] [i_3 - 1]))) : ((max(134209536, 83))))) : (121 / 36987)));
        arr_14 [i_3] [i_3] = 1;
    }
    var_22 = ((((68 <= ((var_2 ? 2147483623 : -125))))));
    var_23 = var_10;
    #pragma endscop
}
