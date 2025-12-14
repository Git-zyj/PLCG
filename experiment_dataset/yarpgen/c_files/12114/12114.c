/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 -= min((min(-4662589982484535025, (arr_0 [i_0]))), ((~(arr_0 [i_0]))));
        arr_3 [i_0] = ((~(min(var_10, 4662589982484535024))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_13 ^= ((-(arr_10 [i_3 - 1] [i_3 - 1] [i_1])));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_14 = (arr_1 [i_3 + 1]);
                            var_15 ^= var_0;
                            arr_17 [i_1] [i_4] = ((-444545900 ? var_6 : (arr_10 [i_1] [i_3 - 1] [i_3])));
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [i_1] [i_2] [i_4] [i_4] [i_6 - 1] [i_3] [i_2] = 8;
                            arr_22 [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] [i_6] = var_2;
                        }
                        var_16 = (max(var_16, 60));
                        arr_23 [i_1] [i_2] [i_2] [i_3] [i_4] [i_2] = (!var_9);
                        var_17 -= (((((0 ? 12 : 15651937929087458630))) ? var_8 : ((~(arr_1 [i_1])))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_3] = (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        var_18 = -var_4;
                        arr_29 [i_1] [i_1] = 4662589982484535027;
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_1] [i_2] [i_3] [i_3] [i_8] [i_8] = (!149);
                        var_19 -= ((-(arr_26 [i_2] [i_3 + 1] [i_3 - 1] [i_3 + 1])));

                        for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_20 = -24;
                            arr_35 [i_1] [i_2] [i_8] [i_9] = ((~(arr_10 [i_3 + 1] [i_8] [i_9 + 1])));
                        }
                        for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            var_21 = ((!(arr_25 [i_3 - 1] [i_3] [i_3])));
                            arr_38 [i_1] [i_1] [i_3 + 1] [i_10] [i_10] = var_0;
                            var_22 = ((var_1 ? (arr_18 [i_10] [i_8] [i_3 + 1] [i_2] [i_1]) : (arr_18 [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_10])));
                        }
                        for (int i_11 = 2; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            var_23 = (~-65536);
                            arr_41 [i_1] [i_2] [i_3 - 1] [i_8] [i_11] = var_1;
                            arr_42 [i_3] [i_3] [i_3] [i_3] = (~var_7);
                            arr_43 [i_1] = -var_4;
                            arr_44 [i_1] [i_2] [i_1] [i_8] [i_2] [i_2] = (~-18);
                        }
                        var_24 ^= var_11;
                    }
                }
            }
        }
        var_25 = (max(var_25, (((~(arr_9 [i_1]))))));
        arr_45 [i_1] [i_1] = (~12943);
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_26 = var_0;
        arr_50 [i_12] = min((((~(arr_47 [i_12])))), ((((!(arr_49 [i_12] [i_12]))) ? (max((arr_49 [i_12] [i_12]), var_0)) : 60)));
        var_27 = (~-24);

        for (int i_13 = 1; i_13 < 23;i_13 += 1)
        {
            arr_53 [i_12] [i_12] = (min((((arr_52 [i_13 - 1] [i_13 + 1] [i_13 + 1]) ? (arr_52 [i_13 + 1] [i_13 - 1] [i_13 + 1]) : (arr_52 [i_13 - 1] [i_13 + 2] [i_13 - 1]))), (max((!0), (arr_47 [i_13])))));
            var_28 += (((-((min(0, 6))))));
            var_29 = (min(var_29, (~12933)));
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_30 = (~var_1);
            var_31 -= ((var_3 ? (((~0) ? (~var_0) : var_0)) : (((min(var_4, -8230))))));
            var_32 = ((!((min((arr_47 [i_12]), 2692802767473800553)))));
        }
        var_33 = 3831659145538299479;
    }
    var_34 = (max(((-((var_5 ? -23 : var_10)))), 9223372036854775791));

    for (int i_15 = 1; i_15 < 18;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                {
                    var_35 ^= (arr_56 [i_15] [i_15] [i_15 - 1]);
                    var_36 *= (max((max((arr_30 [i_15 + 1] [i_15] [i_15] [i_15] [i_15 - 1] [i_15 - 1]), (arr_30 [i_15 + 1] [i_15] [i_15] [i_15] [i_15 - 1] [i_15 + 1]))), ((min(var_4, -36)))));
                    arr_68 [i_15] [i_16] [i_16] = (arr_58 [i_15] [i_15]);
                }
            }
        }
        var_37 = (max(((-(arr_49 [i_15 - 1] [i_15 - 1]))), ((max((arr_9 [i_15]), var_4)))));
        var_38 = (min(var_38, ((max((((!(arr_27 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15])))), -var_3)))));
    }
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        var_39 = (((-(arr_7 [i_18]))));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 10;i_21 += 1)
                {
                    {
                        arr_79 [i_21] [i_20] [i_19] = var_3;

                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 13;i_22 += 1)
                        {
                            arr_83 [i_19] [i_22] [i_21] [i_20] [i_19] [i_19] |= var_1;
                            var_40 = (min(var_40, var_3));
                            var_41 = var_3;
                            arr_84 [i_19] [i_19] [i_20] [i_21] [i_22] = ((-(arr_14 [i_21 - 1] [i_22] [i_21] [i_21 + 2] [i_22] [i_19])));
                        }
                    }
                }
            }
        }
        var_42 = (max(var_42, ((((((~(arr_30 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))) ? (arr_30 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) : (min(var_0, var_5)))))));

        /* vectorizable */
        for (int i_23 = 0; i_23 < 13;i_23 += 1)
        {
            arr_87 [i_18] [i_18] = -64;
            var_43 -= -var_4;
        }
    }
    #pragma endscop
}
