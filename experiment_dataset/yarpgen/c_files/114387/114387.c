/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = -94;
    var_20 = (((((18446744073709551593 ? var_6 : (-2147483647 - 1)))) ? (((var_5 ? var_0 : ((var_11 ? var_12 : var_12))))) : (min(((var_16 ? var_11 : var_2)), (var_14 < var_13)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 18446744073709551593;
        var_21 = (arr_0 [i_0] [i_0]);
        var_22 *= (((((var_8 ? var_9 : var_12))) ? (arr_2 [0]) : (((((arr_0 [i_0 - 2] [2]) + 2147483647)) << (var_6 - 76)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 += var_4;
        var_24 = (max(var_24, (((~(((arr_7 [i_1]) | var_7)))))));
    }
    #pragma endscop
}
