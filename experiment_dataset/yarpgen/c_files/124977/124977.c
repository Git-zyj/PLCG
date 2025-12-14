/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (-(max(38, (var_5 + var_8))));
    var_20 |= (var_12 & (((((var_7 ? var_11 : var_1))) ? var_6 : var_3)));
    var_21 = (((-var_18 || ((max(17925802147877074308, var_8))))) ? (var_2 || var_8) : (var_13 != var_16));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_22 += ((var_14 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_23 = var_6;

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_24 = (max((min((min(-2559024878922915283, 17925802147877074296)), (var_5 * var_5))), (arr_13 [i_2] [i_1])));
                            arr_14 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] [i_2] |= ((((((var_10 == (arr_5 [i_1] [4]))))) & (arr_8 [i_4] [i_0 + 3] [i_0 + 3] [i_4])));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] [i_3 - 1] = (max(-var_14, (max(-2559024878922915283, 0))));
                        }
                    }
                }
            }
            arr_16 [i_1] [i_1] = (((-((min(20530, (arr_4 [i_1])))))));
            var_25 = (arr_10 [i_0 + 2]);
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] = (((arr_2 [i_5] [i_0]) ? var_5 : (max(((var_18 ? 192 : var_9)), (min((arr_0 [i_0]), (arr_19 [i_0] [i_0] [i_0 + 1])))))));
            var_26 = (((10 ? 0 : (arr_18 [i_0 + 2] [i_0 - 1]))));
        }
        var_27 += ((-(arr_18 [i_0] [i_0])));
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        var_28 = (var_15 ? (((arr_22 [i_6 - 2]) ? (arr_21 [i_6 + 2]) : (arr_22 [i_6 - 2]))) : ((((((arr_22 [i_6]) * (arr_22 [i_6])))) ? (max(var_1, 8213876849887371618)) : (arr_22 [i_6 + 1]))));

        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            arr_27 [i_6 - 1] [i_7] = (((+(((arr_22 [i_7]) << var_5)))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_32 [i_9] [i_7] [i_7 + 2] [i_7] [i_6] = ((((((((128 ? 18444 : 202))) ? (((var_4 ? (arr_23 [i_6 + 2] [i_7] [i_9]) : (arr_22 [i_6 + 2])))) : ((3028507081396515808 ? 2559024878922915282 : 17925802147877074309))))) ? (((((arr_31 [i_7]) | (arr_22 [i_8]))) - var_1)) : -var_11));

                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            var_29 = max((((((var_16 ? var_13 : (arr_28 [i_10] [i_7] [i_7] [i_7])))) ? (((max(var_17, 1)))) : (arr_31 [i_7]))), (((((arr_29 [14]) / var_6)))));
                            var_30 = ((346612980 >> (((arr_25 [i_7 - 2] [i_6 + 1] [i_6 + 1]) - 182))));
                        }
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            var_31 *= (((min(var_12, (arr_31 [1]))) * (((var_5 ? (arr_23 [i_11 + 1] [i_7 + 3] [i_6 + 1]) : var_11)))));
                            arr_37 [i_11] [i_9] [i_7] [i_7 - 1] [i_7] [i_6] [i_6] = var_14;
                        }
                        arr_38 [i_9] [i_7] [i_7] [i_6] = (max(((max(var_11, ((~(arr_21 [i_8])))))), 520941925832477320));
                        var_32 = (max(var_32, (((-(((arr_21 [i_7]) ? -520941925832477307 : (arr_33 [i_9] [i_6] [i_7] [i_7 + 1] [i_6]))))))));
                        var_33 += ((max(var_7, var_15)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            var_34 = (((arr_40 [i_12]) > 16));
            arr_43 [i_12] = (arr_41 [i_6 + 2] [i_12 + 1]);
            arr_44 [i_12] = ((-((~(arr_39 [i_6 + 1] [i_6 + 3] [i_6])))));
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                {
                    arr_52 [i_6] [i_13] [i_6] [i_6] = (~var_8);

                    for (int i_15 = 3; i_15 < 18;i_15 += 1)
                    {
                        arr_56 [i_13] = (((var_14 * -110) ^ (((arr_35 [i_6 - 1] [i_6] [i_13 - 1]) ? (arr_35 [i_6 + 1] [i_6 + 1] [i_13 + 1]) : var_15))));
                        var_35 = (min(var_35, ((~(min((arr_49 [i_6 + 3]), (arr_41 [i_6] [i_13])))))));
                        arr_57 [i_6] [i_13] [i_14] [i_14] = (max((max(((-(arr_34 [i_6 + 1] [i_13] [i_13] [i_14] [i_15 - 3]))), ((min(var_9, (arr_40 [i_13])))))), var_11));
                        arr_58 [i_6] [1] [i_14] [i_13] = 55289599;
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_36 *= ((((((arr_53 [0] [0] [i_13 + 1] [0] [i_14] [i_16]) ? 3003530493 : var_6))) ? -var_10 : (((arr_45 [i_6] [i_6] [i_16]) | (arr_45 [i_6 - 1] [i_14] [i_16])))));
                        arr_61 [i_6 - 2] [i_13] [i_13] = (arr_41 [i_13 - 1] [i_13]);
                        var_37 = ((3595870641 / (arr_29 [i_6 - 2])));
                        var_38 = ((arr_50 [i_13] [i_13 + 1] [11] [i_13 + 1]) - var_18);
                    }
                    var_39 += (arr_59 [i_6 + 3] [i_6] [i_13 - 1] [i_13 + 1] [i_14] [i_14]);
                }
            }
        }
        arr_62 [i_6] [i_6] = var_18;
    }
    #pragma endscop
}
