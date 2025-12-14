/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((((arr_3 [i_0] [i_0]) ? (((((max(10971762404710449132, -9223372036854775787)) < var_2)))) : ((-((6833963250059883063 ? var_1 : 10971762404710449132)))))))));
                                arr_10 [i_4 - 2] [i_3] [i_2] [i_1] [i_1] [i_0] = 799158647;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [12] [i_6] [i_1] = (max((arr_14 [i_5] [i_5] [i_5 - 1] [i_5]), var_10));
                                arr_19 [i_1 + 2] = var_10;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_29 [i_0] [i_10] [i_8] [i_9] = (((((((var_6 ? var_5 : var_1)) >= var_7))) & (((((max(var_7, var_0))) && (((-(arr_4 [i_0] [i_1 + 2])))))))));
                                var_12 = (max((arr_5 [i_8] [i_1] [i_1 - 2] [i_10]), ((max(var_8, (arr_27 [i_0] [i_1] [i_1 - 2] [i_9]))))));
                                arr_30 [i_0] [i_1] [i_8] [i_10] [i_10] [18] [i_0] = ((-58 - ((1 ? (arr_28 [10] [i_9] [i_8] [i_1] [i_1] [i_0]) : 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 17;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                arr_45 [10] [15] [i_13 + 2] [i_14] = (arr_38 [i_13 + 1] [i_13 + 1] [i_13]);
                                var_13 = (max((max(1, (arr_4 [i_13 + 3] [i_14]))), var_0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_14 *= (((((((var_3 ? 1 : var_5))) / (1 * 3)))) || (1 && 1));
                                arr_51 [i_17] [i_16] [i_12] [i_12] [i_11] = ((1 + (arr_5 [i_13 - 3] [i_12 - 1] [18] [8])));
                                var_15 *= -18446744073709551612;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            {
                                arr_59 [i_19] [i_18] [i_19] [i_12] [i_19] = min((!var_6), 1);
                                var_16 = (((((max(var_4, 0)) | 2094907025873465875)) << ((((var_7 > -492006661) >= (arr_57 [i_11] [i_11]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 18;i_20 += 1)
                    {
                        for (int i_21 = 3; i_21 < 18;i_21 += 1)
                        {
                            {
                                var_17 = ((var_6 ? (arr_33 [i_11]) : (((219170155 + 58714) - -219170155))));
                                var_18 = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 17;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            {
                                var_19 = var_6;
                                var_20 &= var_2;
                                var_21 = 25061;
                                arr_71 [i_11] [i_22] [i_13] [i_12 + 2] [1] [i_11] [i_11] = max(1, 1669041350);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
