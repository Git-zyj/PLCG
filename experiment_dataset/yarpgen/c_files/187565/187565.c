/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_11;
                var_12 = (max(var_12, (((~(min(((var_9 ? (arr_5 [13] [13]) : (arr_5 [i_0] [i_1]))), (var_8 + var_6))))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_13 = (max((max((arr_8 [i_1] [i_1 - 1]), (arr_8 [i_0] [i_1 - 1]))), var_1));
                    arr_10 [i_2] = ((((((-563 + 2147483647) << (2044 - 2044)))) ? (max((arr_8 [i_1 - 2] [i_1 - 2]), (arr_8 [i_1 - 1] [i_1 + 1]))) : (~var_9)));
                }

                for (int i_3 = 4; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_14 = (((var_4 ? (arr_3 [i_1 + 2] [i_1 + 2]) : (((!(arr_5 [i_1] [i_1])))))));
                    var_15 = (min(var_15, (((!((min(203, 276828471))))))));
                    var_16 -= (arr_11 [i_3] [i_3] [i_3 - 4] [i_3]);
                    var_17 -= (arr_8 [i_0] [i_1]);
                    arr_13 [i_0] [i_0] [4] [1] = (min(((-(arr_5 [i_1 + 1] [i_3 + 1]))), (~-2044)));
                }
                for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 = (((((~(max((arr_19 [17] [i_1] [6] [i_1] [i_1]), var_6))))) && (~1)));
                                var_19 = ((var_3 ? (arr_16 [i_0] [i_1 - 1] [i_6] [i_6] [i_6]) : ((((arr_8 [i_1] [i_5]) && (((~(arr_3 [i_0] [i_5])))))))));
                                var_20 = (max(var_20, ((min((min((arr_17 [i_6 - 2] [i_1 - 2] [i_4] [i_1 - 2] [i_0]), var_5)), (max((arr_17 [i_0] [i_1 + 2] [i_1 + 2] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                                var_21 = (min((arr_2 [i_5] [i_6]), (((!(1 - -22202))))));
                                arr_22 [i_6] [i_6] [i_4] [i_1 + 1] [i_1] [i_6] [i_0] = ((268435455 ? 5307571892333982958 : 22201));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_22 = (((!var_5) ? (~57) : ((-((~(arr_2 [i_4] [i_4])))))));
                                var_23 = (arr_5 [i_1 + 1] [i_4 - 3]);
                                var_24 = min(((min(var_3, (((!(arr_19 [i_0] [2] [18] [i_7] [i_8]))))))), ((((min((arr_4 [i_0] [i_0] [12]), var_7))) ? (min((arr_21 [i_0] [i_1] [i_8] [i_7] [i_8]), (arr_2 [i_0] [i_1]))) : ((min(22201, -97297871))))));
                            }
                        }
                    }
                    var_25 = (~276828471);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1] [i_0] [i_9] [i_1] = (arr_9 [i_0] [i_0]);
                                arr_37 [i_10 - 1] [i_4] [i_4] [i_0] = ((-(1 - 5596137173733817162)));
                                arr_38 [i_0] [i_0] [i_1] [i_0] [i_1] [i_9] [i_10] &= var_7;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    arr_41 [i_0] [i_1] [i_11 + 2] [i_11] = var_9;
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_26 += (1 < 255);
                                arr_46 [i_0] = ((~(arr_27 [i_0] [i_0] [12] [i_12] [i_11 + 1] [i_13] [12])));
                                var_27 = (max(var_27, (arr_1 [i_0] [i_11])));
                                arr_47 [i_0] [i_1] [i_11] [16] [16] [7] [i_13] = ((~var_7) || (arr_21 [i_12] [i_12] [1] [i_12 - 1] [i_12 - 1]));
                                var_28 = (max(var_28, (arr_12 [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                arr_53 [i_0] [9] = ((~(arr_51 [i_1 - 1] [i_1 + 2] [i_11 + 2] [i_11 + 1] [i_1 + 2])));
                                arr_54 [i_0] [i_0] [0] [i_11] [i_14] [i_15] = (!74);
                                var_29 = (min(var_29, (6 >= var_9)));
                            }
                        }
                    }
                    var_30 = (arr_51 [i_11 + 1] [i_11] [i_11] [i_11] [i_1]);
                }
            }
        }
    }
    var_31 = var_11;
    #pragma endscop
}
