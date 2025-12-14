/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (0 != var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((var_6 ? var_13 : ((var_13 ? (arr_0 [i_0] [i_0]) : var_6))));
        arr_3 [i_0] = (((((arr_0 [i_0] [i_0]) << (42457 - 42447))) | (((var_7 < (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = (arr_2 [i_1]);
        arr_8 [i_1] = (~(((arr_4 [i_1]) ? (arr_6 [i_1] [i_1]) : var_18)));
        arr_9 [i_1] = ((((((arr_2 [1]) == (arr_2 [i_1])))) % (arr_4 [i_1])));
        arr_10 [i_1] = ((-(arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_14 [i_2] = 0;
            var_22 = ((var_8 || (((arr_1 [8]) || var_18))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_19 [i_3] = ((~(((arr_2 [i_1]) - var_18))));
            arr_20 [i_3] = (((arr_18 [i_3] [i_3] [i_1]) & (arr_7 [i_1] [i_3])));
            var_23 = (arr_2 [i_3]);
            arr_21 [i_1] [i_3] [i_3] = (((~var_0) * var_3));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_24 &= (((arr_2 [i_1]) != (arr_12 [i_4] [i_1])));
            arr_24 [i_1] &= arr_22 [i_1];
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_28 [i_5] = ((((((arr_2 [i_5]) ? (arr_27 [i_5] [i_5]) : (arr_0 [15] [15])))) ? (46347 + 0) : (arr_25 [i_5] [i_5])));
        var_25 = (((((-(arr_25 [i_5] [i_5])))) ? (max(var_17, (arr_25 [i_5] [i_5]))) : (min((arr_25 [i_5] [i_5]), 19308))));
        arr_29 [i_5] [i_5] = (((arr_26 [i_5] [i_5]) | var_4));
        var_26 = (~var_13);
    }
    #pragma endscop
}
