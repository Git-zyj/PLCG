/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_9 [i_3] [i_1] [i_3] [i_1] = var_14;
                        arr_10 [i_3] [i_0] [i_0] [i_0] = var_14;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [i_1] [i_2] = var_6;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_19 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = var_3;
                            arr_20 [i_0] [14] [i_2] [i_1] [i_0] = var_7;
                        }
                        arr_21 [3] [i_1] [i_1] [i_0] = var_5;
                    }
                    arr_22 [i_0] = var_8;
                    arr_23 [i_1] [i_0] = var_7;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] = var_3;
                                arr_30 [i_0] [i_1] [4] [1] [i_1] = var_13;
                                arr_31 [18] [i_0] [10] [i_0] [i_2] [i_0] = var_12;
                                arr_32 [i_7] [i_0] [i_0] [i_6] [i_7] = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_38 [i_9] [i_0] [i_0] [i_2] [24] = var_0;
                                arr_39 [i_0] [i_0] [i_1] [i_2] [i_8] [5] [i_0] = var_8;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    arr_42 [i_0] [i_1] [i_0] = var_13;
                    arr_43 [i_0] [i_0] [i_1] [i_0] = (max(((min(var_9, var_13))), var_6));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_49 [i_0] [3] [i_11] [i_11] = var_13;
                        arr_50 [i_1] = (max(((min(var_3, var_0))), (max(var_11, var_13))));

                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            arr_53 [i_0] [i_0] [6] [i_11] [i_0] [6] = var_7;
                            arr_54 [i_0] [i_1] [i_1] [i_0] [i_11] = (min((min(var_4, var_4)), (max(((min(var_6, var_5))), var_4))));
                            arr_55 [i_11] [i_11] [i_11] [i_11] [i_1] [i_1] = var_14;
                            arr_56 [i_0] [i_0] [21] [i_11] [i_12] [i_13] = (min(var_9, (min(var_7, var_1))));
                            arr_57 [i_0] [i_0] [22] [i_12] [i_13] [i_0] = (min(var_4, (min(var_4, var_8))));
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            arr_60 [i_0] [i_0] [17] [i_0] [i_0] [i_0] = var_5;
                            arr_61 [i_0] [i_14] [i_11] [i_12] [i_14] = var_9;
                        }
                        for (int i_15 = 3; i_15 < 22;i_15 += 1)
                        {
                            arr_64 [i_1] = var_4;
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(var_11, (min(var_4, var_1))));
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            arr_68 [i_0] [i_0] [i_0] [i_11] = min(var_7, (min(var_11, var_3)));
                            arr_69 [i_0] [i_0] [i_0] [i_16] [i_0] [i_0] = (max(var_0, var_14));
                            arr_70 [i_0] [i_11] [i_11] [i_1] [2] [i_1] [i_0] = (max(var_11, (min(18446744073709551615, 12))));
                            arr_71 [i_0] = var_11;
                        }

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            arr_74 [i_0] [i_0] [14] [i_12] [i_17] = var_3;
                            arr_75 [i_0] [i_0] [i_11] [i_0] [i_0] [i_0] = var_8;
                        }
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            arr_80 [i_0] [i_1] [i_11] [i_11] [i_11] [i_0] [i_18] = var_9;
                            arr_81 [i_0] = var_10;
                        }
                        arr_82 [i_0] [i_0] [i_12] [i_0] = var_11;
                    }
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        arr_86 [i_0] = (min(var_11, var_14));
                        arr_87 [i_0] = (min(var_1, (min(var_9, var_4))));
                    }
                    /* vectorizable */
                    for (int i_20 = 1; i_20 < 23;i_20 += 1)
                    {
                        arr_92 [24] [i_11] [i_11] [i_20] = var_11;
                        arr_93 [i_11] [14] [i_11] [i_20] = var_7;
                    }
                    arr_94 [i_1] = (max((max(var_2, var_6)), ((max(var_0, var_5)))));
                    arr_95 [i_11] [i_0] [i_0] [6] = var_9;
                }
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 22;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        {

                            for (int i_23 = 1; i_23 < 24;i_23 += 1)
                            {
                                arr_105 [7] [i_1] [i_0] [i_22] [i_23 - 1] = (max(((min(var_5, (max(var_12, var_5))))), (min((-9223372036854775807 - 1), 115))));
                                arr_106 [i_0] [i_0] = var_6;
                                arr_107 [i_0] [i_1] [i_21] [i_22] [i_0] = var_6;
                            }
                            for (int i_24 = 0; i_24 < 25;i_24 += 1)
                            {
                                arr_110 [i_0] [i_0] = max(var_8, var_8);
                                arr_111 [i_0] [i_0] [i_0] [i_22] [i_1] = var_12;
                            }
                            for (int i_25 = 0; i_25 < 25;i_25 += 1)
                            {
                                arr_115 [i_0] [i_0] [i_1] [i_21 + 3] [3] [7] [i_25] = (min(((min(var_5, var_5))), (min(var_12, var_7))));
                                arr_116 [15] [14] [14] [10] [i_0] = (min((min(var_5, var_0)), var_3));
                                arr_117 [17] [24] [i_1] [i_0] [i_22] [i_25] = (min(136, 18446744073709551607));
                                arr_118 [i_0] [i_1] [i_1] [i_0] [16] [i_1] = var_13;
                                arr_119 [i_0] = var_6;
                            }
                            arr_120 [i_1] [i_1] [i_21] [i_22] = var_10;
                        }
                    }
                }
                arr_121 [i_0] [i_1] [i_1] = max((min(var_11, var_3)), (max(var_11, var_1)));
                arr_122 [i_0] = (min((max(var_0, var_14)), ((min(var_5, (max(var_9, var_12)))))));
                arr_123 [i_1] = (min(((max(var_0, var_3))), (min(var_14, var_5))));
            }
        }
    }
    var_17 = (max(var_2, var_0));
    #pragma endscop
}
