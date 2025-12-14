/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0] = (max(((var_18 ? ((~(arr_1 [i_0]))) : 1)), (((arr_0 [i_0 + 4]) * (arr_1 [i_0 + 1])))));
        arr_3 [i_0 + 3] [i_0 + 3] = ((-(((arr_1 [i_0 + 2]) ? var_13 : (min(var_8, 1))))));
        var_20 = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-((1 ? ((-(arr_6 [i_1] [i_1]))) : (((arr_6 [i_1] [i_1]) / (arr_6 [i_1] [i_1])))))));
        var_21 = (((max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1])))) - (arr_6 [i_1] [i_1]));
        var_22 = (arr_6 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] = max((1 & 7), (((((var_16 ? var_10 : var_11))) ? (arr_4 [i_2]) : (arr_8 [i_2]))));
        var_23 = var_11;
        var_24 = ((!((((arr_4 [4]) ? (((var_5 == (arr_8 [i_2])))) : ((var_5 * (arr_10 [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_25 = ((((min((max(var_6, (arr_13 [i_3] [0]))), var_2))) ? ((-((var_12 / (arr_13 [i_3] [i_3]))))) : (((max(1, (arr_4 [i_3]))) ? ((max(1, (arr_12 [i_3])))) : (arr_4 [i_3])))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_4] [i_4] [i_3] = (((arr_5 [i_3] [i_4]) | (~1625361025)));
            var_26 = (((((arr_14 [i_3] [i_4] [i_3]) / (arr_14 [i_3] [i_4] [1])))) ? (!var_11) : 1625361025);
            arr_19 [i_4] [i_4] = 1625361026;
            arr_20 [i_4] [i_4] [i_3] = (32749 ? (((arr_12 [i_3]) ? (arr_16 [i_3] [i_4] [1]) : 1625361028)) : ((-(arr_15 [7]))));
        }
        var_27 ^= (max((!var_11), (((arr_15 [i_3]) ? (arr_17 [i_3] [i_3]) : (arr_5 [i_3] [i_3])))));
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_25 [i_5] = var_16;
        var_28 = (min(var_28, ((((arr_24 [i_5]) >= ((((((arr_21 [1]) ? (arr_23 [10]) : (arr_5 [i_5] [i_5])))) ? (arr_6 [i_5] [i_5]) : (max(var_16, var_12)))))))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_29 ^= var_18;
        arr_28 [i_6] = (arr_21 [i_6]);
    }
    var_30 = (((((min(var_5, var_6))))) ? var_5 : var_3);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_31 = (min(var_31, ((((!(arr_21 [0])))))));
                arr_37 [i_7] [i_8] [i_7] = (var_2 ? ((16384 ? (max((arr_36 [i_7] [i_8]), (arr_27 [i_7]))) : ((var_1 ? var_12 : (arr_22 [i_8]))))) : (((arr_21 [18]) ? ((((arr_31 [i_8]) >= (arr_4 [i_7])))) : (arr_24 [2]))));
                arr_38 [i_7] = arr_34 [i_7] [i_7] [i_8];
                var_32 = ((((+(max((arr_22 [i_7]), var_8))))) ? (arr_26 [i_8] [i_7]) : (max((arr_22 [i_7]), (min((arr_22 [i_8]), 1)))));
            }
        }
    }
    var_33 = (~var_9);
    #pragma endscop
}
