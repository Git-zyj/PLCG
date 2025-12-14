/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = ((var_17 != ((max(-40, var_8)))));
                            var_19 = (i_2 % 2 == 0) ? (((((((0 / (arr_2 [i_1] [i_2 - 1]))) << (((arr_6 [i_0] [i_2] [i_0] [i_3]) - 188)))) >= (255 - 64)))) : (((((((0 / (arr_2 [i_1] [i_2 - 1]))) << (((((arr_6 [i_0] [i_2] [i_0] [i_3]) - 188)) + 106)))) >= (255 - 64))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [10] [20] [i_0] [i_0] [i_0] &= (var_8 ? 0 : (((((85 ? 8213 : 255)) + var_5))));
                            var_20 = (((~var_1) ? (min(var_2, var_11)) : ((max((arr_7 [i_5 + 1] [i_5 + 1] [i_1 - 1] [i_0]), (arr_7 [i_5 + 1] [i_5 + 1] [i_1 + 1] [i_0]))))));
                            var_21 = (min(var_21, ((max((var_7 + 18), (((arr_9 [i_0] [i_1 - 1]) ? 0 : var_17)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_22 = 5291695419736655943;
                                var_23 = (max(var_23, (arr_6 [i_8] [i_0] [i_0] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_38 [i_10] [i_10] [i_10] [i_12 + 1] [i_13] = (min(((var_14 | (~var_13))), (max(((var_14 ? var_13 : (arr_29 [i_9] [i_9] [i_11]))), (((var_6 ? (arr_16 [i_9 - 2] [i_11] [i_12 + 2]) : (arr_21 [i_9] [i_9] [i_9] [2] [i_9 - 3] [14] [i_9 + 1]))))))));
                                arr_39 [i_10] = (!var_14);
                                var_24 *= ((!(((((max((arr_27 [i_9] [i_9]), (arr_2 [18] [i_12])))) ? (!18) : 1690731758)))));
                                arr_40 [i_9] [i_10] [i_13] = ((((max(-var_17, var_17))) * ((~(((arr_4 [i_10]) ^ 8129619424541484201))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_25 = var_14;
                                var_26 = 8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 3; i_17 < 19;i_17 += 1)
                        {
                            {
                                arr_53 [i_10] = var_4;
                                var_27 = ((!-7696692864023419817) ? (((((max(var_4, var_4)))) - (max(17910842412785919757, 27)))) : (arr_4 [i_10]));
                                arr_54 [i_10] = (arr_29 [i_11] [i_11] [i_11]);
                                var_28 = (max(var_28, 46));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 19;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                arr_60 [i_10] [i_10] = (arr_22 [i_9 - 4] [i_18 + 3] [i_18 - 3] [i_18 - 2]);
                                var_29 = (max(var_0, ((~(min(var_1, (arr_5 [18] [18] [10] [i_19])))))));
                                var_30 = ((-(arr_0 [i_9] [i_10])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
