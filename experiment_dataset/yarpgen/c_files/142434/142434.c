/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 |= ((-((max(1, var_15)))));
                                var_17 = (max(37247, ((((max((arr_9 [i_4 - 1] [i_4] [i_4 - 2] [i_4]), var_8))) ^ var_4))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, 0));
                                arr_21 [4] [i_1 + 1] [i_1 + 1] [i_1] [8] [i_1 - 1] [7] = ((220 ? 1 : 51113));
                                var_19 = ((((((var_4 ^ var_8) ? (arr_8 [i_1] [1] [i_5]) : ((var_8 ? (arr_16 [6] [2] [3] [i_1]) : (-9223372036854775807 - 1)))))) ? (((((arr_4 [i_0] [i_0] [i_2]) > 1)))) : ((var_0 ? (arr_17 [i_1] [i_5] [7] [i_1] [i_1]) : 206))));
                                var_20 = 24032;
                                var_21 = ((((max(0, (arr_17 [i_1] [i_1] [10] [9] [i_1])))) ? (((3887606306 && ((max(-124, -2619735173614707053)))))) : ((-32760 ? var_13 : (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = -34;
                                var_23 = min(var_3, ((((0 ? 58 : 1)))));
                                var_24 = (arr_14 [i_0] [i_1] [i_2] [i_7]);
                                var_25 = (min(var_25, 24));
                                var_26 = (max(var_26, (((max(((max(1, 46))), -9173))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_27 = (min(var_27, var_4));
                                var_28 = (min(var_28, (((var_13 ? (arr_25 [i_10 - 2] [1] [i_11] [i_12]) : ((((max(var_11, (arr_12 [i_9] [i_10] [i_11] [i_11])))) ? -339017265 : ((var_15 ? 1 : 640415073)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_29 = (max(var_29, (-2147483647 - 1)));
                                arr_48 [1] [2] [i_11] [i_14] [i_10] = ((1 && ((-2619735173614707031 < ((9 ? var_4 : var_13))))));
                                var_30 = (max(var_30, (41 | -1)));
                                var_31 = var_9;
                                var_32 = ((((((max((arr_3 [i_9] [i_11] [4]), -1))))) - (max(var_13, (35508 >= 3935676197)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_33 -= (max(3072, 88));
                                var_34 = (min(var_34, ((max(((var_12 ? -37 : (((-16384 || (arr_7 [i_9] [i_9] [i_9] [i_9])))))), (((arr_22 [i_17] [i_17] [2] [i_16 - 1] [i_10 - 1]) ? var_4 : var_9)))))));
                                var_35 = (max(var_35, ((((((9628 ? 17640 : (-127 - 1)))) ? (((((var_3 ? 1 : var_9))) ? (arr_23 [i_9] [i_10 - 3] [i_9]) : ((var_2 ? -57 : var_15)))) : ((0 / (((arr_36 [i_9] [i_9] [i_11] [i_16 + 2]) ? 26751 : 95)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            {
                                var_36 = (max(((-119 ? (arr_10 [i_9] [i_9] [i_9] [i_9] [i_10]) : 137)), (-127 - 1)));
                                arr_60 [i_9] [i_11] [i_10] [i_18] = ((-6 ? (var_3 | 1) : ((max((max(1, 96)), (arr_33 [i_10 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
