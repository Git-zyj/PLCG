/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = 1;
                                var_12 = (arr_7 [1] [i_2] [i_3] [i_4]);
                                var_13 -= ((~(arr_4 [i_1] [9] [i_4])));
                                arr_11 [i_0] [i_2] [i_2] [i_3] [i_4] = (arr_3 [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_5 - 3] [i_5] [i_5] [i_2] [i_5] = 65531;
                                var_14 = (min(var_14, ((((~(arr_9 [i_0] [i_6] [i_0] [i_5] [i_6] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_15 += ((!(!4294967295)));
                                arr_30 [19] [i_7] = (arr_24 [4]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_36 [i_7] [1] [i_7] [1] [i_12] [14] = (arr_27 [i_7] [12] [0] [12] [i_7]);
                            var_16 += 1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 20;i_16 += 1)
                        {
                            {
                                var_17 = (arr_33 [i_7] [i_7]);
                                var_18 = (min(var_18, (arr_32 [i_16 + 1])));
                                arr_44 [i_7] [i_8] [i_7] [i_15] [4] [i_16] = arr_35 [i_7] [i_7] [i_7];
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            {
                                arr_60 [7] [i_20] [i_19] [i_18] [i_17] = (((-(arr_49 [i_17]))));
                                var_19 &= (arr_52 [i_17] [19] [19] [1]);
                                var_20 = (arr_32 [i_17]);
                                var_21 = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 19;i_22 += 1)
                    {
                        for (int i_23 = 2; i_23 < 18;i_23 += 1)
                        {
                            {
                                arr_67 [i_19] [i_18] [i_18] [1] [1] = 5;
                                var_22 = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 1;i_25 += 1)
                        {
                            {
                                var_23 = (max(var_23, (arr_64 [i_17] [i_18] [i_18] [i_18])));
                                arr_74 [i_19] [1] [i_17] [i_19] = 1;
                                arr_75 [i_19] [i_24] [19] [i_19] [1] [i_19] = arr_40 [i_25] [5] [i_19] [i_18] [i_17];
                                var_24 -= 6;
                                var_25 += ((!(arr_39 [i_17] [i_18] [i_19] [17])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 21;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 21;i_27 += 1)
                        {
                            {
                                var_26 = arr_71 [2] [2];
                                arr_80 [i_19] [i_19] [i_19] [i_19] [i_27] = 16829;
                                var_27 = (arr_25 [i_17] [i_19] [i_26] [i_27]);
                                var_28 = (min(var_28, (arr_79 [i_17] [1] [0] [0] [10] [i_18] [i_26])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 23;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 1;i_29 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 23;i_31 += 1)
                    {
                        {
                            arr_91 [i_28] [i_29] [i_29] [i_30] [i_28] = 113;
                            var_29 += (arr_86 [i_28] [i_28] [i_30] [i_28]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 23;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 23;i_33 += 1)
                    {
                        {
                            var_30 = (arr_82 [i_28]);
                            arr_98 [6] [4] [i_29] = (arr_94 [i_28] [i_29] [i_28] [1]);
                            var_31 |= ((-(arr_90 [i_33])));
                            var_32 *= (arr_95 [i_32]);
                            var_33 -= -16829;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_34 = 0; i_34 < 1;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 23;i_35 += 1)
                    {
                        for (int i_36 = 0; i_36 < 23;i_36 += 1)
                        {
                            {
                                var_34 |= (~113);
                                arr_107 [i_28] [i_28] [i_29] [i_34] [i_35] [22] [i_36] = ((-(arr_105 [i_29] [i_36])));
                                var_35 = (arr_82 [i_28]);
                                var_36 = (min(var_36, (arr_100 [1])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 23;i_37 += 1)
                {
                    for (int i_38 = 1; i_38 < 1;i_38 += 1)
                    {
                        {
                            arr_114 [i_28] [i_29] [i_37] [i_29] = (arr_101 [i_38 - 1] [i_29] [1]);
                            var_37 += ((-(arr_106 [i_28] [i_29] [i_29] [i_29] [i_38])));
                            arr_115 [i_29] [i_29] = 0;
                            var_38 = (min(var_38, 40582));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 23;i_39 += 1)
                {
                    for (int i_40 = 0; i_40 < 23;i_40 += 1)
                    {
                        {
                            var_39 -= (arr_117 [i_28]);
                            var_40 *= ((-(arr_82 [i_29])));
                            var_41 = (arr_97 [i_28] [i_29] [1] [i_40]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
