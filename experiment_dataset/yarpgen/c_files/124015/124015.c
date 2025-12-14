/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = ((~(((~0) & var_9))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [i_1] [i_0 + 1] [i_2] [i_3] [i_3] [i_2] [i_2] = ((0 ? 0 : ((1 ? 1108307720798208 : -16964))));
                                var_15 *= 14635;
                                var_16 |= (!4);
                                var_17 = (((arr_2 [i_0 - 2]) ? 1 : var_10));
                                arr_14 [i_2] [i_2] = (((arr_3 [i_0 - 2]) ? (arr_3 [i_0 - 2]) : (arr_1 [i_0 - 2])));
                            }
                            arr_15 [i_0] [i_1] [i_1 + 1] |= ((max(-16970, 677229268724239871)));
                            arr_16 [i_2] [i_2 + 1] [i_2] [i_2] = 255;
                        }
                    }
                }
                arr_17 [i_0] = (((arr_4 [i_0 + 1]) ? 1 : (((arr_3 [i_0]) ? (arr_6 [i_0] [12]) : 3))));
            }
        }
    }
    var_18 |= var_1;
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_24 [i_5] [i_5] [i_5] = var_3;
                var_20 = -32762;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_21 = (min(((((min(0, 2734))) != 0)), 1));
                            arr_30 [i_5] [i_7] [i_7] [i_8] [i_7] [i_6] = (((~2736) ? ((((arr_22 [i_8 - 1] [i_7 + 1] [i_7 + 1]) && 9223372036854775807))) : (arr_22 [i_8 + 1] [i_7 + 1] [i_7 + 1])));

                            for (int i_9 = 2; i_9 < 13;i_9 += 1)
                            {
                                var_22 = 1;
                                var_23 = ((-4294967295 != (((max(var_10, (arr_19 [6] [i_5])))))));
                                arr_33 [i_5] [i_7] [i_7] = (((((var_12 ? (arr_6 [i_7] [i_8 + 1]) : (arr_6 [i_7] [i_6])))) ? -var_0 : (((arr_6 [i_7] [i_6]) ? var_0 : (arr_6 [i_7] [i_7])))));
                                var_24 = (max(var_24, (((((((arr_23 [i_6] [i_8 + 1]) == (arr_23 [i_6] [i_7]))) ? var_10 : -12)) < (((2632076802 ? var_1 : (((arr_22 [10] [i_8] [i_9]) ? -1108307720798181 : var_12)))))))));
                                var_25 ^= ((-((((((arr_4 [i_5]) & var_11))) ^ -3484))));
                            }
                            for (int i_10 = 3; i_10 < 11;i_10 += 1)
                            {
                                var_26 = (((arr_29 [i_5] [i_6] [i_7] [i_8] [i_10 - 2] [i_8 - 1]) ? (((arr_29 [i_5] [i_6] [i_5] [i_8] [i_10 - 2] [i_8 - 1]) + (arr_29 [i_5] [13] [13] [i_8] [i_10 - 2] [i_8 - 1]))) : ((var_12 ? (arr_29 [i_5] [12] [i_7] [i_8 - 1] [i_10 - 2] [i_8 - 1]) : (arr_29 [i_5] [i_6] [i_7 + 1] [i_8] [i_10 - 2] [i_8 - 1])))));
                                var_27 = (arr_1 [i_10 - 1]);
                            }
                            for (int i_11 = 2; i_11 < 13;i_11 += 1)
                            {
                                var_28 -= (((-1 ? 16 : (((arr_1 [i_6]) ? var_0 : (arr_21 [i_5] [i_6]))))));
                                var_29 = var_11;
                                var_30 = arr_23 [i_5] [i_6];
                                arr_41 [i_5] [i_7] [i_5] [i_5] [i_11 - 1] = (1 != 1);
                            }
                            for (int i_12 = 3; i_12 < 10;i_12 += 1)
                            {
                                var_31 = (((((-(((arr_36 [i_5]) % (arr_28 [i_7] [i_8] [i_12 + 3])))))) ? ((-(arr_5 [i_8]))) : (((var_13 ? (arr_34 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_7]) : (arr_28 [i_7] [i_7] [i_7 + 1]))))));
                                var_32 = (((arr_21 [i_5] [i_12]) ? (min((arr_32 [i_5] [i_5] [4] [i_8] [i_12 - 2]), (max(1240265279, (arr_7 [i_5] [i_12] [i_7 + 1] [i_8]))))) : 2));
                            }
                            arr_44 [i_7] [i_6] = (44 / var_10);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
