/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((((!var_8) ? (((-339 ? 30430 : var_3))) : ((var_15 ? -99 : (arr_1 [7])))))) ? ((-3 ? ((11710 ? var_11 : 15914539390948860663)) : (arr_0 [i_0]))) : ((min(((2147483647 ? (arr_2 [i_0]) : var_14)), -1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((-(arr_1 [i_0])));
                    var_20 -= (4 <= 522372650);
                }
            }
        }

        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_21 = (min(var_21, (((((-(max(2456731133, 66)))) ^ (min(4294967291, 471964912)))))));
            var_22 ^= (((((~(min(876126900, 1))))) >= ((var_3 ? var_3 : var_1))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_23 = (((((-(arr_13 [i_4 - 1] [i_4 - 1] [i_4 + 1])))) ? var_8 : var_2));
                        arr_18 [i_0] [i_3] = (min(var_14, (((-1 ? (arr_9 [i_3] [i_3]) : var_6)))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_7] [i_0] [i_7] [i_3] = (~2093295843);
                            arr_28 [i_0] [i_3] [i_6] [i_7] [i_3] [i_7] [i_6] = (min((((arr_0 [i_0]) & var_14)), (!-7365834064623827859)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_24 = var_0;
                        arr_34 [i_3] = ((17048070251950709823 ? 2147483647 : 1));
                        var_25 = ((((max(var_11, (arr_19 [i_0] [i_0] [i_0] [i_0])))) ^ (arr_19 [i_0] [i_3 - 1] [i_9] [i_10])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_37 [i_11] = ((var_10 == (arr_21 [i_11] [i_11] [i_11])));
        var_26 = (min(var_26, var_16));
        arr_38 [i_11] = -5595157195862871010;
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_27 = (((max(var_13, (arr_13 [i_12] [i_12] [i_12])))) ? ((max(var_3, (arr_26 [13] [13] [i_12] [i_12] [13] [i_12])))) : -471964912);
        var_28 ^= ((((max((arr_41 [i_12]), (arr_41 [i_12])))) ? -var_1 : ((var_4 ? (((arr_32 [16] [i_12] [i_12] [i_12] [i_12]) * 14)) : var_7))));
        var_29 = arr_8 [i_12] [i_12];
    }
    var_30 = (-1 && 16702);
    var_31 = -var_16;

    for (int i_13 = 2; i_13 < 18;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_32 = ((arr_7 [i_14]) ? (arr_16 [i_13 - 2] [i_17 - 1] [i_17 + 1] [i_17 - 1]) : (((var_11 ? (arr_22 [i_13] [i_13 + 1] [i_13] [i_15]) : -19))));
                                var_33 = (max((max(398523810, ((2147483647 ? (arr_43 [i_14] [i_14]) : var_2)))), ((-242 ? -var_7 : (arr_17 [i_13 + 2] [22] [i_15])))));
                            }
                        }
                    }
                    arr_53 [i_13] = var_12;

                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        var_34 = var_8;
                        var_35 += (min((arr_33 [i_13] [i_13 - 1] [i_13] [i_13 - 1]), (max(168, (min(7391, 1))))));
                    }
                    for (int i_19 = 2; i_19 < 20;i_19 += 1) /* same iter space */
                    {
                        arr_61 [i_19] [i_14] [i_15] [i_15] [i_19 + 1] [i_19] = ((-(arr_46 [i_13 + 2] [i_13 - 1] [i_19 - 1])));
                        var_36 ^= ((-(max((((arr_44 [i_14]) ? var_4 : var_1)), var_2))));
                    }
                    for (int i_20 = 2; i_20 < 20;i_20 += 1) /* same iter space */
                    {
                        var_37 = (max(0, 4));
                        arr_64 [i_14] [3] = (min((~65535), (((max((arr_25 [i_15]), (arr_16 [i_13] [i_13] [i_13] [19]))) >> ((((max(32759, var_5))) - 32729))))));
                        var_38 = (min(((var_12 ? var_8 : 17675388749493266839)), var_14));
                    }
                }
            }
        }
        var_39 = var_9;
        var_40 = 471964911;
    }
    var_41 = var_9;
    #pragma endscop
}
