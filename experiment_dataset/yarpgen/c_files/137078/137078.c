/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = 112;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_4] &= 167;
                                var_21 = (((arr_3 [i_0]) < (arr_3 [i_0])));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_0] = ((min((arr_13 [i_7 + 1] [i_0] [i_5] [i_1] [i_0] [i_0]), (min((arr_13 [i_0] [i_1] [i_5] [1] [i_0] [i_7]), 1)))));
                                var_22 = (max(var_22, (arr_18 [i_5])));
                            }
                        }
                    }
                    var_23 = (min(((((((!(arr_23 [i_0] [i_1] [i_0] [i_1] [i_1] [2] [i_0]))))) % ((var_17 ? 7 : var_11)))), ((min((arr_22 [i_0] [i_1] [i_1] [i_5] [i_5]), (var_2 & -1))))));

                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        var_24 = min(4294967295, (((((13144496148803063972 >> (var_6 - 994989253)))) ? ((-50 ? 0 : var_8)) : (arr_6 [i_0] [i_0] [i_0]))));
                        var_25 += (min((arr_5 [i_0] [i_1]), (((var_15 != ((min((arr_1 [i_1] [i_8]), (arr_24 [i_5] [i_5] [i_5])))))))));
                        arr_29 [i_0] [i_1] [3] [i_0] = ((((((6907 + var_19) ? ((((arr_9 [i_1]) ? var_2 : (arr_24 [i_0] [i_0] [i_0])))) : (arr_23 [i_0] [i_1] [i_5] [i_8] [i_8] [i_8] [i_8])))) & (((arr_8 [i_8 - 1] [i_8 - 1] [i_8 + 1]) & (arr_10 [i_0] [i_1] [i_5] [i_8] [i_8 - 1])))));
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_26 = (~var_13);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_27 = ((-8323477219213897539 > (arr_13 [i_0] [i_1] [i_1] [i_9] [i_0] [i_11 + 2])));
                                arr_36 [i_10] [i_10] [i_10] [i_10] [i_0] [i_10] = ((((-1 ? (arr_24 [i_0] [i_0] [i_10]) : 0)) != var_18));
                            }
                        }
                    }
                    var_28 += var_5;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 9;i_13 += 1)
                        {
                            {
                                arr_41 [i_0] [i_1] [i_9] [i_12] [i_0] = ((~(arr_13 [i_13] [i_13] [i_0] [i_12] [i_0] [i_13])));
                                arr_42 [i_0] [i_1] [i_9] [i_12] [i_0] = var_15;
                            }
                        }
                    }
                    var_29 = ((var_10 * (var_15 >= 15)));
                }
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    arr_45 [i_0] [i_14] [i_0] = ((5 ? ((9 ? (arr_6 [i_0] [i_0] [i_14]) : (var_15 * var_17))) : (arr_31 [i_0] [i_1] [i_14])));
                    var_30 -= var_15;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                arr_52 [i_0] [i_0] [i_14 + 1] [i_15] [i_16] = 8655550309118839072;
                                var_31 = var_7;
                            }
                        }
                    }
                }
                for (int i_17 = 3; i_17 < 11;i_17 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 3; i_19 < 11;i_19 += 1)
                        {
                            {
                                var_32 = ((-((-(((arr_38 [i_0] [i_1] [i_0]) ? 32767 : (arr_13 [i_0] [i_1] [i_17 + 2] [0] [i_0] [i_19 - 1])))))));
                                var_33 = (min((((arr_27 [i_0] [i_17 + 2] [i_18] [i_19 + 1]) / -var_16)), var_3));
                            }
                        }
                    }
                    var_34 = var_2;
                    arr_61 [i_0] [i_1] = -var_5;
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        {
                            var_35 = ((((((arr_32 [i_0] [i_20] [i_21]) ? var_5 : (arr_39 [i_0] [5] [i_20] [i_20] [i_21])))) ? (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((min((arr_39 [i_21] [12] [i_21] [i_21] [9]), (arr_39 [i_0] [1] [i_20] [i_21] [i_21]))))));
                            var_36 = (max(var_36, (((((~(3396312819 >= var_1)))) ? (((var_16 ? var_4 : var_1))) : -var_6))));
                            var_37 = 268435456;
                            arr_69 [i_0] [i_1] [i_20] [i_0] = ((((max((max(var_10, var_16)), (arr_47 [i_0] [i_20] [i_20] [i_20] [i_1] [i_0])))) & ((((0 ? 3303646975 : var_4)) >> (268435434 - 268435407)))));
                        }
                    }
                }
            }
        }
    }
    var_38 ^= var_19;
    var_39 = 52597;
    var_40 += (max((((((max(1, var_3)))) + 0)), 4194303));
    #pragma endscop
}
