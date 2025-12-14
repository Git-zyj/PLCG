/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 |= (((((((min((arr_2 [10] [10]), var_1)) + 9223372036854775807)) >> ((((var_17 << (((arr_2 [2] [i_0]) - 3613)))) - 767557592)))) != ((((min(var_12, (arr_0 [6]))))))));
        var_21 = (min(var_21, ((1488628559792481012 - (arr_0 [6])))));
        arr_3 [i_0] = (-(arr_1 [i_0] [i_0]));
        arr_4 [i_0] = var_19;
        arr_5 [i_0] = (max(((~(arr_1 [8] [i_0]))), (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = (!-160943297);

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_13 [i_1] = (((arr_9 [i_2 + 3] [i_2 + 2]) ? (arr_9 [i_2 + 2] [i_2 + 2]) : (arr_9 [i_2 + 4] [i_2 + 4])));
            var_23 = (max(var_23, (((var_14 ? (((arr_10 [i_1]) & (arr_12 [i_1] [i_1]))) : -var_4)))));
            var_24 = (((arr_9 [i_2] [i_2 + 3]) >= (arr_12 [i_1] [i_2 + 4])));
            var_25 = (min(var_25, ((-(((arr_8 [i_1]) + var_12))))));
            var_26 = (min(var_26, (((((~(arr_6 [i_1]))) | var_4)))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_27 = (min(var_27, var_10));
            var_28 = (min(var_28, (((160943296 ? 186 : 22664)))));
            var_29 -= (((~var_11) | (arr_8 [i_3])));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_30 = (((-(arr_17 [i_4]))));
        var_31 = (arr_18 [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_32 = (arr_21 [i_5]);
        arr_22 [i_5] [i_5] = var_16;
    }
    var_33 = (((((((var_6 ? var_8 : 16128)) && 70)))));
    var_34 = ((var_16 ? (5910407002137183053 & -15127) : var_5));
    var_35 = (~var_7);
    #pragma endscop
}
