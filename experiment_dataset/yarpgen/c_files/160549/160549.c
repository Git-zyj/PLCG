/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_21 = var_7;
        arr_3 [i_0] [i_0] = ((!(arr_2 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_22 = (max((max(18446744073709551608, -10257)), (!-108)));
                                arr_16 [i_1] [i_1] = (-2147483647 - 1);
                                var_23 = ((((!(arr_10 [12] [i_4 - 1] [i_2 + 1] [i_5])))) + (arr_2 [i_3]));
                                var_24 = (arr_6 [0] [i_2] [i_1]);
                            }
                        }
                    }
                    var_25 = ((arr_12 [1] [i_2 + 1] [i_2] [i_1]) ? (arr_10 [i_1] [i_1] [i_2 + 2] [12]) : (arr_5 [i_1]));
                }
            }
        }
        arr_17 [i_1] [i_1] = max(-127, (((min(var_1, var_10)) & (arr_9 [i_1]))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    var_26 = (!((((min((arr_6 [13] [i_6] [i_1]), (arr_14 [i_7] [i_7] [i_1] [i_7] [i_1] [4] [i_1])))) || ((((arr_2 [i_7]) ? var_8 : var_1))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((((1617469404 - (arr_19 [i_6 - 3] [i_6 - 3])))))));
                                var_28 -= -18446744073709551608;
                            }
                        }
                    }
                    var_29 *= (arr_6 [8] [i_6 - 3] [8]);
                    var_30 ^= (arr_15 [6]);
                }
            }
        }
    }
    for (int i_10 = 3; i_10 < 12;i_10 += 1)
    {
        var_31 = var_3;
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_32 = (i_11 % 2 == zero) ? (((~((((arr_22 [i_10] [i_11 - 1] [i_11] [i_10]) >> (((arr_5 [i_11]) + 1844155737529984808)))))))) : (((~((((arr_22 [i_10] [i_11 - 1] [i_11] [i_10]) >> (((((arr_5 [i_11]) + 1844155737529984808)) + 4204545854651207115))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_42 [i_11] = (max((((1617469404 ? (arr_15 [i_11]) : (arr_29 [i_10])))), (((arr_30 [i_11 + 1]) ? (arr_30 [i_10 - 1]) : (arr_30 [i_11 + 1])))));
                                arr_43 [i_10] [i_11] [i_11] = ((((min(((var_5 ? var_11 : (arr_2 [i_12]))), (((arr_40 [i_14] [i_11] [i_12] [i_11] [i_10]) ? (arr_7 [i_11] [i_12] [i_11]) : var_9))))) ? (arr_4 [i_11]) : (((min((arr_15 [i_11]), 57072))))));
                                arr_44 [i_14] [i_11] [i_10 - 3] [i_11] [i_10 - 3] = (arr_31 [i_10]);
                                var_33 += 10257;
                            }
                        }
                    }
                    arr_45 [i_11] = max((((arr_18 [i_10] [i_11]) | (arr_37 [i_10] [i_10] [i_11] [i_11] [i_12] [i_11]))), (arr_1 [i_10 - 2]));
                }
            }
        }
        arr_46 [1] = ((-(max((arr_11 [i_10] [i_10] [i_10]), (arr_40 [i_10 - 3] [12] [i_10] [12] [i_10])))));
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 13;i_16 += 1)
        {
            {
                var_34 = ((-3769941936 ? (arr_0 [i_15] [i_16 - 1]) : ((235 ? (arr_1 [i_16]) : 178))));
                var_35 = (1111026318713573915 || 26914);
                arr_52 [i_15] [i_15] [i_15] = (arr_51 [i_15]);
                arr_53 [14] [i_15 + 1] [i_15] = (~21126);
            }
        }
    }
    #pragma endscop
}
