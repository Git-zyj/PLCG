/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = var_10;
                    arr_7 [i_1] [i_1] [i_1] [i_1] = (((arr_4 [3] [i_2]) > -var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_19 = (((((4146838140988132954 ? 95 : 95))) * (var_13 / var_3)));
                                var_20 = (min(var_20, var_11));
                            }
                        }
                    }
                    var_21 ^= ((var_0 ? (arr_11 [i_0] [i_0 + 1] [i_1] [i_2] [i_2]) : var_11));
                }
            }
        }
        var_22 = (max(var_22, ((((!-96) ? (((var_10 >= (arr_3 [i_0])))) : var_4)))));
        var_23 &= ((~(arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
        var_24 ^= ((var_8 ? (arr_9 [i_0 - 1] [7] [i_0 + 2]) : (((arr_2 [i_0] [i_0]) ? (arr_5 [i_0] [1] [i_0 + 2] [i_0]) : (arr_3 [i_0 + 2])))));
        arr_14 [i_0] |= (((487631552 + 12637238571934530230) ? (arr_5 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]) : (((var_7 ? -95 : -95)))));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    arr_27 [0] [i_6] [i_7] |= 252363363;
                    arr_28 [i_6] [i_5] [i_7 - 1] = ((60250 / (~var_6)));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_25 -= ((((((((var_3 ? 94 : 14239628421373231399))) ? ((max(2055438444, var_5))) : (arr_16 [10])))) ? ((60233 ? var_6 : (max(var_9, (arr_22 [i_5 - 2] [0]))))) : (((arr_16 [10]) ? var_0 : ((((arr_21 [i_8]) ? -104 : (arr_18 [0]))))))));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_33 [i_5] [i_9] [i_8] = 1057969261;
                        arr_34 [i_5] = ((((arr_26 [i_5] [i_5 - 1]) < (arr_26 [i_5] [i_5 - 1]))) ? ((max(-99, -111))) : (((arr_26 [i_5] [i_5 - 1]) ? (arr_26 [i_5] [i_5 - 1]) : (arr_26 [i_5] [i_5 - 1]))));
                        var_26 = ((arr_17 [i_5 + 2]) ? var_13 : 107);
                    }

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_27 = ((!(((min(var_8, var_2))))));
                        var_28 = (max(var_28, (arr_19 [i_5] [i_5] [i_5 + 2])));
                        arr_39 [i_5 + 2] [i_5] [i_6] = ((-94 > (((arr_24 [i_6] [i_6] [i_5 + 1]) ? -var_9 : (arr_20 [i_10])))));
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        var_29 ^= (((((262224873 / (arr_21 [i_6])))) ? (min(5316, var_14)) : (arr_24 [i_8] [i_11] [i_8])));
                        arr_43 [i_5] [5] = var_7;
                        var_30 ^= (((~var_2) ^ (((~1964533456) ^ ((2050886108 ? -104 : var_8))))));
                        var_31 = var_8;
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_5] [i_6] [1] [i_12] |= (((~(arr_38 [i_5 - 2] [i_6] [i_8]))));
                        var_32 = (min(var_32, var_6));
                    }
                    var_33 = (arr_21 [i_8]);
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_34 -= ((+(((~var_4) & ((min((arr_29 [i_13] [i_6] [i_5 + 1]), (arr_18 [i_13]))))))));
                    arr_49 [i_5 - 2] [i_5] [i_13] = (!94);
                    arr_50 [i_5] [i_6] [4] [i_6] = ((94 << ((((9223372036854775807 & (arr_18 [i_5])))))));
                }
                var_35 = (max(var_35, ((((((((arr_32 [i_5 - 1] [i_5] [i_5] [i_5 - 1]) ? (arr_32 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 2]) : (arr_32 [9] [i_5] [i_5] [i_5 - 1]))) + 2147483647)) << (arr_42 [i_5] [4] [i_5] [i_5] [4] [i_5]))))));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            {
                                arr_57 [i_5] = (((((min(var_7, var_0)))) ? var_1 : var_13));
                                var_36 += var_15;
                                arr_58 [i_5 + 2] [i_6] [i_5] [i_14] [i_15] [1] [i_16 + 3] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 22;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            {
                var_37 += (((arr_61 [i_17] [i_17 - 1] [i_17 + 1]) ? 102 : (arr_60 [i_17])));
                arr_63 [i_17] [i_18] [i_17] = 95;
                var_38 = (arr_61 [i_17] [i_18] [1]);
            }
        }
    }
    #pragma endscop
}
