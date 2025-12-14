/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (arr_5 [i_0] [i_2] [i_4]);
                                arr_15 [i_0] [i_1] [i_0] [i_0] = var_5;
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((!(arr_8 [i_4]))) ? ((min((arr_8 [i_1 + 1]), (arr_8 [i_4])))) : ((255 ? var_10 : 255))));
                                arr_17 [i_1] [i_3] [i_3] [i_2] [i_2] [i_0] [i_1] = (max((1712448084 && -6), 65535));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_20 [i_1] [i_1] [i_1] [5] = (((1 & 47) | (((((max((arr_0 [i_1 - 1] [i_1 - 1]), 3))) < 6)))));
                        arr_21 [i_1] [5] [8] [i_1] [i_1] = ((-(!var_12)));
                        arr_22 [5] [i_1] [5] [11] [i_5] = 173;
                    }
                }
            }
        }
    }
    var_18 = ((((var_5 == 48) ^ var_8)) <= (~var_2));
    var_19 |= -var_13;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_20 = ((-(arr_31 [i_6] [i_6] [i_7] [i_8] [i_8] [7])));
                                arr_38 [i_8] [i_8] = ((3 || ((max(18, 3588037048)))));
                                var_21 = (-5 - ((var_12 ? (max((arr_34 [6] [6] [i_8] [i_9] [i_9]), (arr_34 [i_7] [i_8] [i_8] [i_7] [i_6]))) : (var_10 == -19))));
                            }
                        }
                    }
                    var_22 = (((1279084537 ? (arr_33 [i_6] [i_8] [i_7] [1] [i_7] [i_8]) : (arr_33 [i_6] [i_8] [i_6] [11] [i_8] [i_8]))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_44 [i_6] [i_7] [11] [i_8] [i_6] [i_8] = (((arr_34 [i_12 + 2] [i_12] [i_8] [i_12] [i_12 - 3]) > (arr_35 [6] [3] [i_12 - 3] [i_12 + 1] [i_12 + 1] [i_12 + 4])));
                                var_23 = (~var_0);
                                arr_45 [i_12 - 1] [i_8] [11] [i_8] [6] [i_8] [1] = ((((max(1682903449, 7))) ? var_7 : (arr_35 [i_6] [i_6] [2] [2] [i_12 - 2] [i_7])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            {
                                arr_54 [i_6] [i_14] [i_8] [i_13] [i_14] = ((((-(arr_42 [i_13 + 1] [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13]))) * (arr_27 [4] [3] [i_6])));
                                var_24 = (var_2 / var_6);
                                arr_55 [i_6] [i_7] [i_8] [i_13] [i_13] [i_8] = (arr_26 [i_8] [i_6]);
                                arr_56 [i_8] [i_7] [i_7] [i_13] [1] = (arr_51 [i_14] [i_13 + 2] [i_8] [1] [i_6]);
                                arr_57 [i_7] [i_7] [i_8] [14] [i_6] [i_6] |= ((255 == (((arr_47 [i_6] [i_13 - 1] [i_8] [14] [i_6] [i_6]) % (arr_47 [i_6] [i_7] [i_8] [i_13 - 1] [i_14] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
