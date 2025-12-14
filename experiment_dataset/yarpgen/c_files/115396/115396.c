/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_4] |= (((!var_15) ? 2902031757567316678 : (((((((arr_12 [i_0] [i_4]) / var_2))) ? ((min((arr_1 [1]), var_7))) : (arr_8 [0] [0] [i_2] [0]))))));
                                var_19 = (((~((98303311 ? (arr_12 [i_0] [i_0]) : var_5)))));
                                var_20 = arr_5 [i_1] [i_2];
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_0] |= 1;
                    var_21 ^= (15544712316142234938 || var_16);

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_22 = (max(var_22, (((var_2 ? (((arr_13 [i_0] [0] [i_2] [i_1] [i_5 - 3]) ? -3 : (~0))) : (((arr_14 [i_0] [i_1] [i_0] [1] [i_0]) ? (arr_9 [i_5] [i_2] [i_0]) : (arr_3 [19] [i_2]))))))));
                        var_23 = ((15544712316142234953 ? (((arr_3 [i_5 + 1] [i_5 - 2]) ? (arr_3 [i_5 + 2] [i_5 + 2]) : (arr_17 [i_5 - 3] [i_5 - 1] [i_5 - 3] [1] [i_5 + 2] [i_5 - 1]))) : (arr_17 [i_5 + 2] [i_5 - 3] [i_5 - 2] [i_5] [i_5 - 2] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_24 = arr_11 [7] [6] [1] [i_0] [i_0] [23];
                        var_25 = (max(var_25, (((((((arr_5 [i_1] [i_1]) ? 0 : (arr_5 [i_6] [i_2])))) ? (((arr_18 [i_0] [i_0] [i_0] [i_0]) ? (arr_18 [i_6] [i_2] [i_1] [1]) : (arr_18 [i_0] [8] [i_2] [i_6]))) : (arr_12 [i_0] [i_0]))))));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_26 = (((((2147483647 ? (arr_24 [1] [i_7]) : var_13))) ? (max((arr_3 [i_7] [i_0]), 15544712316142234940)) : 72));

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_27 = (min(var_27, (((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [2]) - ((((arr_6 [i_0] [i_0] [i_7] [i_8]) ? var_9 : var_7)))))) ? 1160749314 : (arr_13 [10] [i_0] [i_0] [i_7] [i_7]))))));
                var_28 = (max(var_28, var_5));
            }
            var_29 = var_2;
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_33 [i_9] [i_9] [i_9] = ((((((arr_9 [i_9] [5] [1]) - (((16342745524115902378 >= (arr_14 [i_0] [i_9] [10] [i_0] [0]))))))) ? ((((arr_9 [i_9] [i_9] [i_0]) || (arr_8 [i_0] [i_0] [i_9] [1])))) : (((!((var_4 || (arr_5 [i_9] [1]))))))));
            var_30 -= var_13;
        }
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 7;i_10 += 1)
    {
        arr_36 [i_10 + 1] [i_10] = ((var_15 ? (arr_4 [i_10 - 1]) : (arr_4 [i_10 - 1])));
        var_31 = (((arr_8 [i_10] [i_10 - 2] [1] [i_10]) ? var_13 : -117));
    }
    var_32 -= (min(((((var_14 ? var_4 : var_6)))), 18446744073709551610));

    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_33 = (max(var_33, (var_7 >= 1)));
        arr_39 [i_11] = (((((~(arr_24 [4] [i_11])))) ? (arr_23 [i_11]) : (((arr_24 [i_11] [i_11]) ? (arr_24 [6] [16]) : (arr_23 [i_11])))));
        arr_40 [i_11] &= (!(arr_26 [i_11] [6] [i_11] [6]));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 14;i_14 += 1)
            {
                {
                    arr_49 [i_12] [i_13] = (((+(((arr_3 [i_12] [i_13]) ? (arr_44 [i_12]) : 1001169870321130326)))));
                    var_34 ^= ((-((var_11 ? ((1 ? (arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [9]) : (arr_44 [i_14]))) : ((~(arr_13 [i_12] [i_12] [i_13] [i_13] [i_14])))))));
                }
            }
        }
        var_35 ^= ((59031 ? -117 : 1));
    }
    var_36 = (~var_14);
    var_37 = var_1;
    #pragma endscop
}
