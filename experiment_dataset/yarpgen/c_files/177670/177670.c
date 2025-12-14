/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((17 ? ((-6206297042738273856 ^ (((1 ? 2518790796 : (arr_2 [i_0] [i_1])))))) : (2518790796 / 65535)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = 2518790796;
                                var_20 = 1776176477;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_21 = ((var_9 ? ((var_1 ? var_9 : var_12)) : (arr_12 [i_0] [i_0 - 2] [i_0] [19] [i_0] [i_0] [i_0])));
                                var_22 = (((arr_17 [i_7] [i_0] [i_5] [1] [i_0]) + ((0 ? var_1 : (arr_9 [i_0] [i_1] [i_1] [i_1] [i_7])))));
                                var_23 = (arr_19 [1] [i_6] [i_5] [i_0] [i_0]);
                            }
                            var_24 &= (((arr_4 [i_0] [i_5] [i_6]) && (var_10 / 1776176497)));

                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                arr_25 [i_0] [i_0] [i_6] [14] &= ((216 ? ((var_3 / (arr_9 [i_6] [i_6] [i_5] [i_1] [i_6]))) : var_5));
                                var_25 = (min(var_25, (((((var_2 && (arr_20 [i_0] [i_0] [i_6] [i_0 - 3] [i_0] [i_0]))) ? (((((arr_9 [i_6] [i_5] [i_0 - 2] [i_0] [i_6]) && (arr_5 [i_6] [i_0 - 1] [i_6]))))) : (max(var_10, var_14)))))));
                                var_26 = (((((1 / var_16) & ((2869976047011840919 ? var_3 : -3912)))) | ((3924567525440983945 ? 0 : -69))));
                            }
                        }
                    }
                }

                for (int i_9 = 3; i_9 < 22;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_34 [i_0] [i_11] [i_10] [i_11] &= (max(var_10, (arr_21 [i_9 - 3] [1] [i_0 + 1] [i_10] [i_11])));
                                arr_35 [i_11] [i_1] [i_10] [i_1] [i_11] [i_0] &= (((min(var_8, 4964398280773377558)) <= (arr_27 [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_27 = var_13;
                                var_28 = (((max((arr_13 [1] [i_12] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_0 [i_1] [i_0]))) <= ((((arr_14 [i_0]) - -69)))));
                                var_29 = ((-5621 ? -4964398280773377562 : (arr_4 [i_1] [i_1] [i_9 - 2])));
                            }
                        }
                    }
                    var_30 = var_2;
                    arr_41 [i_0] = ((((((((arr_18 [i_0] [i_0] [i_1] [i_9]) * var_11)) * var_10))) ? 1776176497 : (arr_0 [i_0] [i_0])));
                    arr_42 [i_0] [i_0] [i_9] [10] |= ((((min(255, 1))) ? ((~(arr_22 [i_9] [i_9] [i_9 - 2]))) : (((4734427881993312526 ? 32476 : (var_5 && 12))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 2; i_14 < 13;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                var_31 = var_7;
                                arr_56 [i_14] [i_14] [i_14] = ((((224 ? 157 : -23459)) ^ (2179474228 == 874327462)));
                            }
                        }
                    }
                    arr_57 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14] = ((0 + (-1 & 1)));
                    var_32 = ((max(-13, 14890)));
                }
            }
        }
    }
    #pragma endscop
}
