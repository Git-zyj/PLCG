/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = var_10;
                            var_18 += ((51 ? (arr_8 [i_2] [i_1] [i_2] [i_0 + 3]) : ((min(9223372036854775807, var_9)))));
                            var_19 = (arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_20 = ((-((var_17 ? 3828 : (arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 1])))));
                            var_21 = ((((((3828 * 0) ? 3828 : -5549))) ? (arr_6 [i_1] [i_0] [i_5]) : (((arr_16 [i_0] [i_4]) ? (arr_0 [4]) : var_14))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = (((arr_16 [i_0] [i_0]) && (((arr_4 [i_0 - 2] [i_0 + 2] [i_0 - 1]) <= -463148488))));
                            var_22 = var_0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_23 = (arr_23 [i_7] [i_6] [i_1] [i_0]);
                            arr_25 [i_0] = ((((var_8 * 1613373207330068973) << (((arr_21 [i_7] [i_6 + 1] [i_0 - 1] [i_0]) + 15351)))));
                        }
                    }
                }
                arr_26 [i_0] [i_0] = (arr_4 [i_0] [3] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_24 = (((arr_28 [i_8]) || (((var_13 + (max((arr_39 [i_12] [15] [i_8] [i_8] [i_9] [i_8]), var_6)))))));
                                arr_41 [i_8] [i_8] [i_8] [i_12] [i_8] &= ((((((min((arr_39 [i_10 - 2] [i_10 + 3] [i_12] [i_10 + 3] [i_10] [i_10 - 2]), (arr_39 [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [i_10 - 2])))) + 2147483647)) >> (var_8 - 1647016668)));
                                arr_42 [i_8] [i_8] [i_10] [i_11] [i_11] = var_11;
                                var_25 &= (((arr_30 [i_8]) && (arr_39 [i_8] [i_9] [i_12] [i_10] [i_11] [i_12])));
                                var_26 = ((+(((arr_35 [i_8] [i_9] [i_10 - 1]) | -3828))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_27 = (((var_0 >> (arr_45 [i_14 + 2] [i_13 + 1] [i_13 - 1] [i_13 - 4]))) * ((((!(arr_45 [i_14 - 1] [i_13 - 2] [i_13 - 3] [i_13 - 4]))))));
                            arr_48 [i_9] [i_8] = ((((((arr_40 [i_8]) >> (((arr_46 [i_13 - 3] [i_13 - 3] [i_13 - 1] [i_14 + 1]) + 1677035479))))) ? var_4 : var_9));
                            var_28 = (max((1 & 2320508066), (((-70 ? (arr_38 [i_14] [i_13] [11] [i_8]) : var_5)))));
                            arr_49 [i_8] [i_13] [i_8] [i_8] = (((arr_39 [i_13 - 2] [i_13 - 2] [i_8] [i_13] [i_13] [i_13 - 4]) ? (arr_39 [i_13] [i_13] [i_8] [i_13] [i_13] [i_13 - 3]) : var_9));
                            var_29 = ((((3438574503 ? var_14 : -26909)) & -70));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
