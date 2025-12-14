/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [9] [i_1] [9] [i_0] [i_1] [19] = ((-28 ? (arr_0 [i_1]) : (-5931566774653308030 / 32)));
                            arr_11 [i_0 + 1] [i_0] [11] [i_3] = (((((arr_7 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0]) + (arr_7 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3]))) >= 2047));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 = (((arr_4 [i_0] [i_0]) ? (((var_0 < ((0 % (arr_6 [i_0])))))) : ((((~var_1) == (15478 < 2187917912465047300))))));
                            var_18 = (((arr_13 [i_0] [i_0] [i_4]) ? (arr_0 [i_5]) : 2));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_24 [i_7] [i_7] [i_7] [i_7] [i_0] = (arr_19 [i_0] [18] [i_1 + 3] [i_7]);
                            arr_25 [i_0] [17] [i_6] [i_7] = (((arr_7 [i_1] [i_1 + 3] [i_6] [i_1] [i_7] [i_0 + 1]) << (((min(var_9, (arr_13 [i_0] [i_1 + 3] [i_1 + 3]))) - 48995))));
                            arr_26 [i_0] [i_6] [14] [i_7] &= 2187917912465047300;
                            arr_27 [i_0] [i_0] [i_0] = ((!(((arr_3 [i_0] [i_0]) && var_8))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_19 = ((!(((~(arr_33 [i_9] [4] [i_12]))))));
                                var_20 = arr_33 [i_12] [9] [i_8];
                                arr_39 [i_8] [i_12] [1] [i_11] [i_12] = ((!((((arr_29 [i_8]) + (arr_29 [i_8]))))));
                                var_21 = var_16;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((((((arr_35 [i_13 + 1] [i_13 + 2] [i_14]) == (((min(65530, var_11))))))) - (((arr_36 [21] [i_9] [i_9] [i_9] [i_9] [i_9]) ? ((min((arr_41 [i_8]), (arr_38 [i_8] [i_9] [i_13] [i_13] [i_13 + 1] [i_8] [i_8])))) : (arr_41 [i_8]))))))));
                            var_23 = ((((!(!var_14))) || (arr_36 [i_8] [i_9] [i_9] [i_13] [i_13 + 2] [i_14])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 19;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            {
                                arr_56 [i_15] [i_15] [i_17] [i_17] &= (((((arr_15 [i_15 - 1] [i_17] [i_15] [i_17]) >> 1)) | (((arr_36 [i_15 - 1] [i_16] [i_15] [i_15] [i_19] [i_16]) << (var_16 - 1961692552)))));
                                var_24 = (((arr_34 [i_15] [i_15] [i_15]) && (65534 >= 21003)));
                                arr_57 [i_15] [i_18] [i_16] [i_16] [i_15] &= -var_0;
                                var_25 &= (((arr_42 [i_15] [i_15] [i_18]) ? (min(-var_13, (((1 == (arr_42 [12] [10] [i_15])))))) : (((-var_10 >= (var_2 >= 8863792902741632182))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        {
                            arr_63 [i_15] [i_16] [1] = (((arr_44 [i_21] [16] [16] [i_21]) >= -125));
                            var_26 &= ((-(((arr_19 [i_20] [i_15 + 1] [i_20] [4]) ? var_5 : (arr_59 [i_15] [i_15 + 1] [i_15] [i_15])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 16;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 19;i_23 += 1)
                    {
                        {
                            arr_69 [i_15] [i_15] = var_11;
                            var_27 &= 37343;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_24 = 4; i_24 < 19;i_24 += 1)
                {
                    for (int i_25 = 3; i_25 < 18;i_25 += 1)
                    {
                        for (int i_26 = 1; i_26 < 19;i_26 += 1)
                        {
                            {
                                var_28 = 7217;
                                arr_77 [0] [0] [0] [i_25] [i_26] = (arr_34 [i_16] [i_24 + 1] [i_25 - 3]);
                                var_29 = (((arr_5 [i_16] [i_24]) == ((((((arr_72 [i_15 - 2] [i_15] [i_15]) == (arr_33 [i_16] [i_25 + 2] [i_16])))) - (min((arr_42 [i_24 - 4] [i_24 - 4] [i_16]), var_14))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
