/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_18 = ((-(arr_0 [i_1 - 1] [21])));
            var_19 = (((-74 > var_6) / var_4));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] &= ((!(arr_7 [20] [i_0] [i_0] [i_0 + 2])));

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            arr_14 [i_3] [i_1] [i_2] [i_4] = (((135582219 * 1) || (arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
                            var_20 = (((arr_1 [i_0]) ? (arr_12 [i_0] [i_4 + 1] [i_2] [i_3] [i_4] [i_1] [i_3]) : 2484557470));
                            var_21 ^= var_1;
                            arr_15 [i_0] [i_3] [i_1 + 3] [i_1 + 3] [i_3] [i_3] [i_4 - 1] = var_7;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_22 = (min(var_22, (((!(arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 1]))))));
                            arr_18 [i_0] [i_3] [i_2] [i_3] [i_5] = (2346248303 ? -577564732 : -42883393);
                        }
                    }
                }
            }
            var_23 = (min(var_23, ((((arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 3]) ? 2479607158 : var_2)))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_30 [1] [1] [i_7] [i_8] [i_9] [1] = ((arr_6 [i_0 + 2] [i_0 - 3] [i_0 + 2]) ? (arr_12 [i_8] [i_8] [i_8] [i_8] [i_7] [i_6] [i_8]) : -2479607157);
                            var_24 &= var_15;
                        }
                    }
                }
                arr_31 [i_0] [i_6] [i_7] = var_8;
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_6] [i_0] [i_0] = var_1;
                    arr_37 [i_10] [i_6] [i_0 + 1] = (!-9918363807905419133);
                    var_25 = 56285;
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [10] [i_10] [i_12] [1] = (((arr_16 [i_6] [i_6] [i_0 - 1] [i_6] [i_0 + 1]) == (arr_0 [i_0 + 3] [i_0 - 2])));
                        var_26 = (min(var_26, ((((arr_22 [i_6] [i_10] [i_12] [i_10]) ? 5417828558349700290 : var_0)))));
                        var_27 = 4549;
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0] &= (((arr_22 [i_0 - 4] [i_0 - 1] [i_0 - 1] [i_0 + 3]) ? (~224) : var_15));
                        arr_47 [i_14] [i_6] [i_6] [i_0] = ((!((!(arr_20 [i_6] [i_10])))));
                        var_28 = ((~(var_16 / 64577)));
                    }
                    arr_48 [i_0 - 1] [1] [1] [1] [i_12] [i_12] = 16274713922359738442;
                    var_29 += ((var_8 && (var_6 < var_0)));
                    var_30 = (~var_15);
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                {
                    var_31 = (var_4 != var_6);
                    arr_51 [i_6] = ((var_8 ? (arr_16 [i_10] [i_0 - 1] [i_10] [i_10] [i_10]) : (arr_16 [0] [i_0 + 1] [i_10] [i_15] [i_0])));
                    var_32 = (((arr_49 [i_0 + 3]) << (var_11 - 15174658401663776896)));
                }
                var_33 = (arr_23 [i_0] [i_0 - 4] [i_0] [14]);
            }
            /* LoopNest 3 */
            for (int i_16 = 1; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            var_34 -= (max(((((arr_39 [i_18] [i_17 - 3] [i_16 + 1] [i_6] [i_0]) / 33))), var_5));
                            arr_60 [i_16] = (max(var_11, ((max((max(-29, var_16)), -231)))));
                            var_35 = (arr_52 [i_18] [i_16] [i_16] [i_0 + 3]);
                        }
                    }
                }
            }
            var_36 += ((!((max((!var_16), ((var_9 ^ (arr_27 [i_0] [22] [i_0] [i_0 + 3] [i_0]))))))));
        }
        var_37 |= ((!(!var_3)));
        arr_61 [i_0] [i_0] = ((~(((arr_22 [i_0] [i_0] [i_0 - 3] [i_0]) ? (~16274713922359738456) : (arr_0 [i_0] [i_0 + 1])))));
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 13;i_19 += 1)
    {
        for (int i_20 = 1; i_20 < 9;i_20 += 1)
        {
            {
                var_38 ^= (((arr_55 [i_20] [4] [i_19] [i_19]) | (((!-6073895161139232084) ^ (32360 ^ var_15)))));
                arr_67 [i_19] = ((!(((min(var_8, 32362))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        for (int i_22 = 1; i_22 < 13;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 14;i_23 += 1)
            {
                {
                    var_39 = (~-8351057109221699286);
                    var_40 = ((-((var_13 ? var_1 : ((((arr_77 [11] [i_23] [i_22] [i_21]) > (arr_74 [i_23]))))))));
                }
            }
        }
    }
    #pragma endscop
}
