/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = ((var_7 ^ (((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4 - 1]) & (arr_9 [i_0] [i_1] [i_1] [i_3] [i_4 - 1])))));
                                var_17 = max((arr_7 [i_1] [i_1]), (max((((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (arr_7 [i_1] [i_4]) : var_13)), (arr_6 [i_0] [i_0] [i_4] [i_3]))));
                                var_18 &= (min(((max((((arr_4 [i_3] [i_4] [i_2]) + (arr_2 [i_4] [i_2] [i_1]))), (arr_10 [i_1] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4])))), (max((arr_10 [i_4 - 2] [i_1] [i_2] [i_3] [i_4] [i_3] [i_4]), (arr_5 [i_4] [i_0] [i_4 - 2] [i_4 - 1])))));
                                var_19 = (min(var_19, ((((min((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4]))) > (((((arr_8 [i_1] [i_4]) & (arr_6 [i_0] [i_2] [i_3] [i_4]))) ^ (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                                var_20 = (((arr_2 [i_0] [i_1] [i_2]) / (max((max(-1933623989, 21)), var_6))));
                            }
                        }
                    }
                }
                var_21 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 = (arr_9 [i_0] [i_1] [i_5] [i_6] [i_7]);
                                var_23 = (arr_9 [i_0] [i_1] [i_5] [i_6] [i_7]);
                                arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_1] = (arr_17 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            {
                var_24 = (max(var_24, (arr_15 [i_8] [i_8 + 1])));
                var_25 *= ((((((((arr_13 [i_8] [i_8] [i_9] [i_8]) <= var_7))) < (arr_7 [i_8] [i_8]))) ? ((((((arr_20 [i_8]) & (arr_23 [i_8] [i_9])))) ? (arr_17 [i_8] [i_8] [i_8] [i_8] [i_9] [i_9] [i_8]) : (max((arr_8 [i_8] [i_8]), var_6)))) : ((((arr_17 [i_8 + 1] [i_9] [i_8] [i_9 + 2] [i_9] [i_8] [i_8]) ^ (arr_17 [i_8 + 1] [i_8] [i_8] [i_9 + 1] [i_8] [i_9] [i_8]))))));

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_26 = (arr_26 [i_8] [i_8] [i_9]);
                                var_27 = ((((max(1048575, 1))) - ((+(min((arr_1 [i_11]), var_14))))));
                                arr_31 [i_12] [i_11] [i_9] [i_9] [i_8] = arr_14 [i_12] [i_9] [i_8];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_28 = (arr_25 [i_8] [i_9] [i_10]);
                                var_29 = (((max((max((arr_3 [i_10] [i_10]), (arr_25 [i_8] [i_9] [i_10]))), (arr_17 [i_8] [i_8] [i_9] [i_10] [i_10] [i_13] [i_9]))) * (((((arr_14 [i_9] [i_9 + 2] [i_13 - 2]) >= (arr_21 [i_9] [i_9 + 1])))))));
                                arr_37 [i_9] = (min(((((max((arr_30 [i_9] [i_9] [i_10] [i_13] [i_8]), var_4)) > (1048575 | 1)))), (max((arr_6 [i_13 - 1] [i_13 + 1] [i_13] [i_13]), (arr_6 [i_13 - 1] [i_13 + 1] [i_13] [i_13])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 9;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                arr_42 [i_8] [i_9] [i_10] [i_9] [i_16] = (max((((arr_1 [i_8]) ? (arr_25 [i_9 + 2] [i_9] [i_10]) : (arr_34 [i_8] [i_9] [i_9] [i_15]))), (((((-1 ? 1 : 4)) | (arr_28 [i_16] [i_9] [i_15] [i_8]))))));
                                var_30 = (var_0 && (((((var_7 || (arr_21 [i_8] [i_10]))) ? var_5 : (arr_9 [i_8] [i_8 - 2] [i_8 + 1] [i_9 + 1] [i_15 + 2])))));
                                var_31 ^= ((((!(arr_25 [i_8 - 1] [i_10] [i_9 - 1]))) ? ((var_11 + (arr_27 [i_8 - 1] [i_8] [i_15 + 4]))) : (4294967295 / 1048575)));
                            }
                        }
                    }
                    var_32 *= (max((arr_36 [i_8] [i_9]), (max(((var_8 | (arr_36 [i_8] [i_9]))), (arr_7 [i_8] [i_10])))));
                }
            }
        }
    }
    #pragma endscop
}
