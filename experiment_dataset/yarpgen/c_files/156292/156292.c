/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_10 = (1123530543 - var_4);
                            arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3 + 1] = ((((((arr_4 [13] [i_2] [i_3]) & (arr_2 [i_0 + 2])))) ? ((~(arr_1 [i_0 - 2]))) : (arr_5 [i_0 + 1] [i_1] [i_2 + 1] [i_3 - 2])));
                            var_11 = (arr_5 [i_1 + 1] [i_0] [i_0 + 2] [i_0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_4] = var_2;
                                arr_16 [i_0 + 1] [i_4] [i_6] = (max((max((arr_2 [i_0 + 1]), var_0)), (arr_1 [i_5])));
                                var_12 = ((((min((arr_0 [i_0 + 2] [i_1 + 1]), (arr_0 [i_0 - 2] [i_1 + 1])))) ? (arr_3 [i_1] [i_1]) : var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_13 = (~-481241372212975045);
                                var_14 = (min(var_14, ((min((((arr_17 [i_9 - 1]) ? var_9 : (arr_17 [i_9 + 2]))), ((min((arr_17 [i_9 + 2]), (arr_17 [i_9 + 1])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_38 [i_9] = (((((max(var_8, var_7))) % (12103776154685432499 - var_6))) ^ ((max((arr_27 [i_9] [i_9] [i_9]), (arr_21 [i_7])))));
                                arr_39 [i_7] [i_7] [i_7] [i_9] [i_7] [i_9] [i_8] = (-((0 / (8160 * 60))));
                                var_15 = ((-((28863 * (min(2688851858, (arr_18 [i_8])))))));
                                arr_40 [i_7] [i_9] [i_7] [i_7] [i_7] = (+((+(((arr_25 [i_13] [i_7] [i_7]) ? (arr_22 [i_8] [i_12]) : var_9)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                arr_47 [i_15] [i_9] [i_9] [i_9] [i_7] = (arr_18 [i_7]);
                                arr_48 [i_7] [i_9] = 1756243828;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            {
                                arr_54 [i_9] [i_8] [i_9] [i_16] [i_9] = ((((((min(var_1, -1124992240))) ? (arr_32 [i_9] [i_8] [i_9] [i_8] [11] [i_9]) : (((min((arr_42 [i_7] [i_7] [i_7] [i_9] [i_7] [i_7]), var_6)))))) >> (((((arr_30 [i_7] [i_8] [i_9] [i_16] [i_7]) ? var_3 : ((var_6 / (arr_34 [4] [i_16] [i_9] [i_9] [i_8] [i_7]))))) + 443849546))));
                                var_16 = (i_9 % 2 == 0) ? (min((max(((((arr_29 [i_7] [1] [i_9]) < (arr_20 [1] [i_8])))), var_1)), (((arr_20 [i_7] [i_8]) ? (((arr_42 [i_7] [i_7] [i_7] [i_9] [4] [i_7]) >> (((arr_53 [i_17] [i_9] [i_8] [i_8] [i_17]) - 9567260199776409291)))) : -var_2)))) : (min((max(((((arr_29 [i_7] [1] [i_9]) < (arr_20 [1] [i_8])))), var_1)), (((arr_20 [i_7] [i_8]) ? (((arr_42 [i_7] [i_7] [i_7] [i_9] [4] [i_7]) >> (((((arr_53 [i_17] [i_9] [i_8] [i_8] [i_17]) - 9567260199776409291)) - 15811113740073404068)))) : -var_2))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
