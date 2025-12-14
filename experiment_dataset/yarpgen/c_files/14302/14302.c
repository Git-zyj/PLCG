/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((+(((min((arr_4 [16] [i_2] [19]), -307141546)) / (arr_12 [i_4 + 3] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4])))));
                                arr_13 [i_4] = ((-18687 * (((arr_9 [i_0] [i_0] [0] [0] [i_4 + 2]) >> (((arr_9 [5] [i_0] [5] [5] [i_4 + 3]) - 3207))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [2] [i_5] [i_6] [i_2] = (((((((45 ? 4632 : var_11))) ? (((arr_4 [11] [i_5] [i_5]) | var_3)) : var_8)) % ((~((((arr_9 [i_0] [i_1] [i_2] [13] [13]) || (arr_4 [i_0] [i_0] [i_0]))))))));
                                arr_19 [i_0] [11] [i_5] [1] [i_0] = ((+((((((arr_10 [i_6] [i_5] [i_0]) > (arr_2 [18])))) * (arr_12 [i_0] [i_1] [i_2] [i_6 - 2] [i_5])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 6;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_34 [i_8] [i_8] [i_9 - 1] [i_10 - 3] [i_11] = (min((arr_5 [i_10] [i_10] [i_10 - 3]), (((65531 ? ((~(arr_9 [i_8] [12] [i_9 + 3] [i_8] [12]))) : 4632)))));
                                arr_35 [4] [i_8] [4] [i_8] [3] = (max((min((min((arr_20 [i_7] [i_8 + 1]), (arr_29 [i_7] [i_7] [i_7] [7]))), ((var_10 ? var_11 : 235541135)))), var_11));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_16 = ((((((arr_36 [i_8] [i_7] [i_8 + 1] [i_13 - 1] [i_13 + 1]) >= (arr_30 [i_8] [i_9 + 3] [8] [i_9] [i_9 + 4] [i_9 + 4])))) >> (((arr_25 [i_8] [i_8] [i_8]) - 19124))));
                                var_17 = (((-(arr_22 [i_8 + 1] [i_9 + 3] [i_8]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_48 [i_8] = (arr_3 [i_15] [i_15]);
                                arr_49 [i_7] [i_7] [i_7] [i_8] = 4649;
                                arr_50 [i_7] [i_8] [4] = (min((var_1 & 17), (arr_9 [1] [22] [i_9] [i_14] [i_8])));
                                var_18 = (min(var_18, (arr_29 [i_7] [i_7] [i_9 - 1] [i_14])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 7;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 7;i_17 += 1)
                        {
                            {
                                arr_56 [i_8] [i_8] = (var_14 / var_11);
                                arr_57 [i_7] [i_7] [i_8] [1] [7] [i_7] = (min((((arr_54 [8] [9] [i_9 - 1] [i_8 + 1]) & (arr_54 [i_7] [1] [i_9] [i_8 - 1]))), ((((~(arr_24 [i_8] [i_8])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 11;i_18 += 1)
    {
        for (int i_19 = 2; i_19 < 10;i_19 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 4; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        {
                            var_19 = (~60887);
                            arr_68 [i_18] [i_18] [i_18] [9] [6] [10] = (~var_7);
                            arr_69 [i_18] [i_18] [i_18] [1] = (arr_2 [i_18]);
                            arr_70 [i_19] [4] [i_19] = var_3;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 9;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        {
                            var_20 = (((14 ^ (arr_6 [i_19] [i_19] [i_19 + 1]))));
                            var_21 = (((min((arr_72 [i_22 - 3] [i_19 - 1]), (arr_72 [i_22 + 2] [i_19 - 1]))) == ((((arr_72 [i_22 - 2] [i_19 + 1]) > (arr_72 [i_22 - 1] [i_19 + 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 11;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 11;i_25 += 1)
                    {
                        {
                            arr_83 [1] [1] = (max((-961300827 || var_8), (min(var_7, (arr_74 [10] [i_19 + 1] [i_19 + 1] [i_19 + 1])))));
                            arr_84 [i_18] [i_18] [i_18] [0] = max((((arr_72 [i_18] [i_19 - 1]) ? (arr_72 [i_18] [i_19 - 1]) : (arr_72 [i_18] [i_19 + 1]))), (((arr_72 [i_19] [i_19 - 2]) / (arr_72 [9] [i_19 - 1]))));
                            arr_85 [i_18] [i_18] [5] = (arr_14 [i_19 + 1] [i_19 + 1] [8] [i_19 + 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
