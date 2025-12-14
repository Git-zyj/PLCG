/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [6] = (arr_1 [i_1]);
                arr_5 [9] [16] [i_0] = ((((var_17 ? (arr_1 [i_1 + 2]) : 0)) & (arr_1 [i_1 - 2])));

                for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_19 = (max(var_19, (arr_3 [i_1 - 2] [i_1 - 2])));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((((((((arr_0 [i_1 + 2] [i_1 - 2]) + 9223372036854775807)) << (var_14 - 110)))) ? ((1 ? (arr_0 [i_1 + 3] [i_1 - 1]) : 1)) : -var_4));
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [13] [14] [i_5] [i_5] [15] [7] [6] = var_4;
                                arr_18 [i_0] [17] [17] [17] [17] [i_5] [17] = (arr_3 [2] [i_1 - 2]);
                                var_20 = (max(var_20, 1));
                                var_21 = (7493985074164286077 + ((~(arr_6 [i_5] [i_3 + 4] [i_3 + 4] [i_5 - 1]))));
                            }
                        }
                    }
                    var_22 = (max(var_22, (((((((arr_15 [4] [i_3 - 1] [i_0] [6] [i_3 - 1]) & 0))) ? (((arr_2 [i_3 + 2]) ? (2878140310156244984 | var_13) : -8104)) : ((((arr_9 [13] [17] [i_1 + 3]) & var_5))))))));
                }
                for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_23 = (((26912 | 26912) ? (~27) : ((0 ? (arr_0 [i_1 + 3] [i_1 + 1]) : (arr_0 [i_1 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_24 = -18;
                                arr_25 [8] [10] [10] [5] [8] = (((arr_24 [i_0] [i_1 + 2] [6] [6]) | (arr_0 [i_0] [i_0])));
                            }
                        }
                    }
                    var_25 = var_5;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_26 = ((15568603763553306626 ? 15568603763553306626 : 56));
                                var_27 = 6635;
                            }
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_28 = var_0;
                    arr_34 [i_11] [i_11] [15] = (arr_26 [i_1] [i_1 - 1] [7] [i_1 + 3]);
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    arr_37 [0] [3] [i_12] = ((((max(var_15, var_13))) ? (arr_2 [i_1]) : (~var_18)));
                    arr_38 [i_0] [0] [i_12] [i_0] = (~8544799797096993322);
                    var_29 *= ((var_18 ? ((var_18 ? (arr_19 [i_12] [i_12]) : (arr_26 [1] [1] [1] [i_1 - 1]))) : (arr_26 [16] [1] [16] [i_1 - 1])));
                }
                arr_39 [3] [3] = var_4;
            }
        }
    }
    var_30 = var_2;
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                {
                    arr_48 [i_13] [4] [4] [1] = var_3;
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            {
                                arr_53 [i_13] [16] [i_13] [14] [14] [18] |= (arr_50 [i_16 + 1] [9] [3] [9] [15]);
                                arr_54 [i_16] [0] [i_16] [i_16] [4] = (((((-(((arr_40 [7]) ? var_3 : -1497456507))))) ? -0 : var_16));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            {
                                var_31 = (arr_57 [i_15] [19] [i_15] [i_15]);
                                arr_62 [16] [i_18] |= ((var_15 ? (arr_58 [1] [1] [1] [4] [4] [1]) : var_2));
                                var_32 |= ((+((((arr_45 [i_13]) != var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = ((var_15 ? var_5 : var_12));
    var_34 = var_2;
    #pragma endscop
}
