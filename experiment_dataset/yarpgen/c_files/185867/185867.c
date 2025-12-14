/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_1));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 ^= (max(7253, 58282));
        var_18 -= (((((var_0 ^ ((min(var_1, 58273)))))) ? (((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) : ((1 ? var_8 : var_0))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 8;i_3 += 1)
            {
                {
                    var_19 ^= (~var_4);
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((var_0 ? ((var_9 ? var_12 : var_12)) : (~var_14)));
                    var_20 = (~2430814624435966905);
                }
            }
        }
        var_21 *= -var_0;
        var_22 = (((arr_4 [i_1] [i_1]) ? var_2 : var_2));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_11 [8] |= var_2;
        arr_12 [i_4] [i_4] = (max(var_13, var_2));
    }

    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_23 = var_7;
            var_24 = ((var_0 ? 18446744073709551615 : (arr_16 [i_6 - 2] [i_5 - 1])));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_22 [i_5] [i_7] [i_6] [i_6 + 2] [i_5] = ((~(arr_19 [i_5] [4])));

                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            arr_25 [i_5] = ((((-2430814624435966905 <= (arr_18 [i_5 - 1] [i_5] [i_5 - 1]))) ? (arr_13 [i_7]) : -var_0));
                            var_25 ^= var_8;
                            var_26 = (min(var_26, -37077));
                            var_27 += ((65535 ? 23 : 1));
                        }
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            var_28 -= -2430814624435966905;
                            var_29 = (arr_18 [i_5 + 1] [i_5] [i_5 + 1]);
                        }
                        arr_28 [i_5] [i_5] [i_5] [i_5] = ((~(arr_26 [i_6] [10] [i_6 + 2])));
                        var_30 = (max(var_30, (((65530 ? (arr_13 [i_8]) : ((((arr_24 [4] [i_6 + 2] [i_7] [i_8] [15]) <= 1))))))));
                    }
                }
            }
            arr_29 [i_5] [i_5] [i_6] = 61;
            var_31 ^= (((-9223372036854775807 - 1) ? 6 : 28459));
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_32 = (((var_6 != var_14) ? ((-(arr_30 [i_5]))) : ((max(var_3, (arr_30 [i_5]))))));
            arr_33 [i_5] [i_11] = (min(((var_15 ? (((arr_31 [i_5 + 2] [i_11] [i_5 + 2]) ? var_5 : 65510)) : ((min((arr_15 [15]), var_6))))), ((0 ? 1 : (arr_23 [i_5] [12] [i_5 - 1] [i_11] [i_11] [i_11] [i_11])))));
            var_33 *= var_2;
        }
        arr_34 [i_5] = var_5;
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        arr_37 [i_12] [i_12] = (arr_35 [i_12]);

        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                arr_42 [i_12] [i_12] [i_13] = (((arr_21 [i_12] [i_13] [i_13] [i_13 - 1]) ? var_11 : (arr_21 [i_12] [i_13] [i_13 - 1] [i_13 + 1])));
                arr_43 [i_13] [i_13] = (~var_10);
            }
            arr_44 [i_12] [i_13] = (((((1 ? 255 : 1))) ? (var_6 | var_0) : ((((max(var_14, var_9))) ? var_5 : ((min(0, 0)))))));
            var_34 = (min(var_34, ((((arr_20 [i_13 + 1]) / (arr_20 [i_13 - 1]))))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_35 = var_10;
            arr_48 [i_12] [i_15] = var_10;
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    {
                        arr_54 [i_15] [i_12] [i_15] [i_15] [i_12] &= (((arr_15 [i_16 - 1]) ? ((var_1 ? var_11 : var_0)) : (~249)));
                        arr_55 [i_12] [i_17] [i_16] [i_17] = (arr_36 [i_16 + 1]);
                        arr_56 [i_17] [i_17] = var_2;
                    }
                }
            }
            arr_57 [i_12] [i_12] = arr_24 [i_12] [i_12] [i_12] [i_15] [i_15];
            var_36 = (min(var_36, (((~(arr_0 [i_12] [i_12]))))));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 0;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                {
                    var_37 *= (arr_52 [i_19] [i_18] [i_12] [i_12]);
                    var_38 = (max((arr_38 [i_12]), var_12));
                    arr_64 [i_12] [i_18] [i_12] [i_18] = ((var_11 ? (min(var_13, var_9)) : var_7));
                    var_39 ^= (min(((min(var_7, (min((arr_45 [i_12]), var_1))))), var_0));
                }
            }
        }
        arr_65 [i_12] = 99;
    }
    #pragma endscop
}
