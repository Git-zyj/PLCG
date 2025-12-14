/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (~var_11);
                var_19 &= ((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : ((var_14 ? 685955094 : (arr_1 [i_1 + 1]))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_20 = (arr_4 [i_2 + 1] [i_2]);
        var_21 = (min(var_21, 1));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_22 *= ((((arr_7 [1]) < (((arr_0 [i_3]) % 1)))));
                    var_23 = (!-var_5);
                    var_24 = (var_0 < ((((arr_6 [i_2 + 2]) < var_10))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_25 = ((!(arr_14 [i_5] [i_5])));
        var_26 = var_1;
        var_27 = (arr_14 [i_5] [i_5]);
        var_28 = (min(var_28, var_0));

        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            var_29 = ((var_2 >> (((arr_15 [i_6] [i_5]) - 61937))));
            var_30 = (min(var_30, (arr_17 [i_6] [i_6] [i_5])));
            var_31 = var_12;
            var_32 = 1;
            var_33 = var_1;
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_34 = var_8;
                            var_35 = 1;
                        }
                    }
                }
            }
            var_36 = ((var_6 ? var_15 : (arr_14 [i_5] [i_7])));
            var_37 = (~var_10);
            var_38 = (var_1 ? var_7 : ((var_12 ? var_7 : 1)));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_39 = 201326592;
        var_40 = -35;
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_41 = ((~(((arr_16 [i_12] [i_12]) & (arr_24 [i_12] [i_12])))));
        var_42 = (arr_20 [i_12]);
        var_43 = ((((min((arr_21 [i_12] [i_12] [11] [i_12]), var_2)) - var_8)));
    }
    var_44 |= 8694915764741264583;

    /* vectorizable */
    for (int i_13 = 1; i_13 < 13;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_45 = (((var_0 >= (arr_46 [i_13] [2] [i_13] [i_13]))));
                                var_46 = var_14;
                                var_47 = (min(var_47, ((((arr_35 [4] [i_17]) + 37133)))));
                            }
                        }
                    }
                    var_48 |= ((!(arr_37 [i_14])));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            {
                                var_49 = ((var_7 > (arr_39 [4] [i_18])));
                                var_50 = arr_31 [i_13];
                            }
                        }
                    }
                    var_51 = (min(var_51, var_17));
                    var_52 = (min(var_52, (arr_30 [i_13])));
                }
            }
        }

        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            var_53 = (((arr_33 [i_13] [i_13 + 1]) ? (~4064) : var_7));
            var_54 = (max(var_54, var_16));
            var_55 = ((~(arr_41 [i_20] [i_13])));
        }
    }
    #pragma endscop
}
