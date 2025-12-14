/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_4 [i_0] = ((((max(var_10, (arr_2 [i_0])))) ? var_5 : var_15));
        var_17 = (max(var_17, ((max(((~(arr_1 [2]))), (((arr_0 [i_0 - 2]) ? var_2 : (arr_0 [i_0 - 1]))))))));
        arr_5 [i_0] = var_14;
        var_18 = (65535 && 20457);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = (((arr_6 [i_1]) ? var_11 : var_5));
        var_20 ^= (min((min((((arr_7 [i_1]) ? var_5 : var_4)), (((arr_7 [i_1]) ? var_11 : var_4)))), (min(var_14, (62847 / 46678)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_21 = ((((var_8 != (arr_8 [i_2 - 2]))) ? var_14 : ((var_4 >> (var_6 - 34180)))));
        var_22 = var_0;
        var_23 = ((var_14 ? (arr_10 [i_2]) : (arr_10 [i_2 + 2])));
        var_24 = (((((10 ? 65535 : 16618))) ? 63948 : 65535));
        var_25 = (((var_0 | var_3) < var_12));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = max(63996, (arr_10 [21]));
        var_26 *= (((min(((var_15 ? (arr_8 [i_3]) : (arr_13 [i_3] [i_3]))), (var_12 != var_11))) > ((7320 ? 65535 : 7320))));
        var_27 = (!var_1);
    }
    #pragma endscop
}
