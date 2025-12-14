/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [1] [i_2] = (max((max(178, 90)), ((min((arr_3 [i_0] [i_0 + 4] [i_1]), 1)))));
                    var_14 = min((max((arr_4 [i_0 + 2]), var_9)), (min((max(122, (arr_3 [i_0] [1] [i_1]))), var_5)));

                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_15 *= (min((max(var_3, var_10)), (max(73, 96))));
                            arr_14 [1] [i_2] [i_1] [i_4] = max((min((arr_13 [i_0 + 4] [i_3 + 2] [i_3 + 1] [i_4 + 1] [i_1]), 0)), (min(var_4, (min((arr_5 [i_0] [i_1] [5]), (arr_3 [i_1] [i_2] [i_1]))))));
                            arr_15 [i_1] = min(((min((arr_4 [i_0 - 1]), 1))), (max((arr_4 [i_0]), 183)));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_0] [0] [2] [i_1] = min((min(var_7, (arr_16 [i_0 + 3] [11] [i_0] [i_3 + 2] [i_1] [5]))), (min((arr_9 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5]), var_8)));
                            var_16 = (min((max(var_13, var_7)), ((min(1, 1)))));
                            var_17 += min((max(169, (arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2]))), (max(220, var_6)));
                            var_18 ^= min(44, 82);
                        }

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_19 = max((max((min(var_7, var_10)), (min((arr_5 [i_0 + 4] [i_1] [i_6]), var_13)))), (max(0, var_12)));
                            var_20 = min((max(1, (arr_10 [i_1] [i_0] [i_0 + 1] [i_1]))), (max((arr_10 [i_1] [i_3] [i_1] [i_1]), var_10)));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_0] [i_7] [i_1] = min((max(var_9, (arr_8 [i_0] [7] [i_2] [i_3] [i_7]))), (min(var_10, (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_0 + 1]))));
                            var_21 = max((min(var_7, 100)), (max(0, var_8)));
                            arr_25 [i_0] [i_1] [i_1] [2] [i_7] = max((max((arr_10 [i_0 - 1] [i_0] [i_0 + 2] [i_1]), var_6)), ((max(var_13, 1))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 = min((min((max((arr_13 [i_1] [i_3] [i_2] [i_1] [i_1]), 220)), (max(64, 1)))), (max(1, (arr_10 [i_0] [i_0 + 3] [i_0] [i_1]))));
                            var_23 = (max(var_23, (min((min(var_7, (arr_27 [i_0 - 1] [i_0] [10] [i_1] [i_2] [i_3 + 2] [i_8]))), (max((arr_27 [i_0 + 4] [i_0 + 4] [14] [i_0] [i_0 + 4] [i_0 + 1] [i_0]), (arr_27 [i_0 + 4] [i_1] [10] [i_8] [i_8] [i_8] [i_2])))))));
                        }

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_24 *= min((max((arr_27 [i_0] [i_0 + 4] [1] [i_3 - 3] [i_3] [i_3] [i_3]), var_6)), ((min(var_2, 1))));
                            var_25 = min((max((arr_26 [i_0 + 1] [i_1] [i_2] [i_3] [i_2] [i_3]), (arr_26 [i_0 + 1] [i_1] [i_2] [0] [i_0 + 2] [6]))), (min(245, (arr_26 [i_0 + 4] [i_1] [i_0] [i_3 - 3] [i_3 - 3] [i_3 - 3]))));
                            arr_30 [i_0 + 4] [i_1] [i_1] [i_3] [i_1] [i_1] = max((max(var_10, (arr_16 [i_3 - 2] [i_3] [i_3] [i_3] [i_1] [7]))), (max(1, var_9)));
                            var_26 = max((min(44, 198)), (max(var_6, 47)));
                        }

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_34 [i_1] [i_1] [i_1] = min((max((arr_3 [i_0 + 1] [i_1] [i_1]), var_5)), ((min(var_13, 1))));
                            var_27 = (max((min(0, 0)), (min((min((arr_17 [i_3]), var_5)), (max((arr_10 [i_0] [i_2] [i_3] [i_1]), var_12))))));
                            arr_35 [i_1] [14] = (max(((max(1, 1))), (min((arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 3] [i_3 - 3] [i_3 - 2]), var_13))));
                        }
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            var_28 -= (max((max(var_7, (arr_13 [i_0 + 1] [i_3 + 1] [i_3 - 2] [i_11 - 3] [2]))), (min(var_2, (arr_13 [i_0 + 3] [i_3 + 2] [i_3 - 2] [i_11 + 1] [1])))));
                            arr_38 [i_0] [i_1] [i_0] [6] = (min((min(0, var_0)), (max((min(0, (arr_9 [i_0] [15] [i_0] [i_0 + 3] [i_0] [1]))), (arr_13 [i_1] [11] [i_0 + 1] [4] [i_1])))));
                        }

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            arr_43 [1] [i_1] [1] [i_2] [1] [i_12] [i_1] = 139;
                            var_29 *= 15;
                            var_30 = 231;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            var_31 ^= 2;
                            var_32 = 124;
                            arr_47 [i_13] [i_13] |= 20;
                            arr_48 [i_1] [i_2] [i_3] [i_1] = 222;
                            arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 24;
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                        {
                            arr_52 [i_1] [i_1] [i_2] [i_2] [i_14] = max((min(29, ((max(1, 1))))), (min(var_10, 63)));
                            arr_53 [i_14] [i_1] [i_3] [1] |= max((max(176, 216)), (max(1, (arr_19 [i_14] [i_1]))));
                        }
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_33 = (min(var_33, (min((max(1, 100)), (min(36, 1))))));

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_34 = 166;
                            arr_60 [i_0] [i_1] [i_2] [i_1] [i_16] [1] = 1;
                        }
                        for (int i_17 = 2; i_17 < 14;i_17 += 1)
                        {
                            var_35 = (max((min(25, 230)), (max(var_7, 1))));
                            var_36 = (min((max(47, 1)), 161));
                            arr_63 [0] [i_1] [i_1] [1] [i_1] = max((min(var_8, 140)), (min(82, var_13)));
                        }

                        for (int i_18 = 4; i_18 < 14;i_18 += 1)
                        {
                            arr_67 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] [i_0] = min(((max(var_2, 1))), (min((max(24, (arr_22 [i_0] [i_0] [i_1] [i_18 - 2]))), (max(var_2, 143)))));
                            var_37 = (min(var_37, (max((min(1, (min(var_7, var_2)))), (max((min(255, 74)), (arr_64 [i_0] [i_0 + 1] [i_18])))))));
                        }
                    }
                }
            }
        }
    }
    var_38 = var_3;
    #pragma endscop
}
