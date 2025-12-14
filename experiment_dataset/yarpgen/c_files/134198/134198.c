/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = ((var_12 ? ((((var_8 == (arr_5 [i_1 + 1] [i_1 + 2]))))) : (min(var_5, var_9))));
                            var_14 *= ((var_5 & ((1994824267 ? (arr_2 [i_1 + 2]) : var_4))));
                            var_15 = var_4;
                            var_16 += (((arr_3 [i_1 + 1]) - (min(((333615428 ? (arr_3 [i_2]) : -212932296)), (arr_4 [i_1 - 1] [i_1 + 1] [i_1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_17 *= 212932327;
                            var_18 = (arr_7 [19] [i_1 + 1] [i_4] [i_4]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_19 *= ((!((((arr_21 [1] [1] [i_9 + 3] [i_9 + 3]) & (arr_21 [i_6 - 1] [9] [i_9 + 3] [i_8]))))));
                                var_20 -= 124;
                                arr_31 [13] [i_8] [11] [i_6] [i_10] = (min(-7, 2147483643));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_42 [i_11] [i_11] [20] [20] [i_13] [i_13] = 4226485576;
                                var_21 = (((((32758 < -23273) || (arr_28 [i_6] [i_6] [17]))) ? (((((max(23648, 1))) ? -1 : (~24727)))) : (max((arr_15 [i_6] [i_6]), (1 - 2205305942)))));
                                arr_43 [8] [i_11] = (min((((!(arr_17 [i_6 + 2])))), (max(var_10, 212932296))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_22 = var_0;
                            var_23 = ((!((min(101, var_1)))));
                            var_24 = ((-(max(56535, var_12))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 0;i_17 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            {
                                arr_62 [1] [i_17] = ((-(arr_17 [i_17])));
                                var_25 = (((arr_41 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [18]) ? (arr_41 [i_17 + 1] [i_17] [i_17 + 1] [i_17 + 1] [i_16]) : -84));
                                var_26 = var_0;
                                var_27 *= max(((var_9 ? 160391870817293551 : -23273)), ((((var_2 + var_3) >= -98))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 19;i_22 += 1)
                    {
                        {
                            arr_68 [7] [0] [i_17] = (((!((((arr_45 [i_16]) / (arr_60 [i_16] [i_17 + 1] [19] [i_17 + 1] [2])))))));
                            arr_69 [i_17] [i_17] = 33;
                            var_28 = (-1184512336 & 253508107);
                            arr_70 [i_17] = (max(9001, 2092744782));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
