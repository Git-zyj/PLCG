/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0 + 1] = ((var_11 ? (arr_2 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 + 1])));
        arr_5 [i_0] = (((arr_3 [i_0 + 1]) ? 18999 : (((((arr_2 [i_0 + 1] [i_0]) + 9223372036854775807)) >> (var_15 - 44110)))));
        arr_6 [i_0] = var_10;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                arr_11 [i_1] [i_2] = (arr_9 [i_1] [i_1 - 1] [i_1]);

                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_3] [i_2] = var_14;
                    arr_16 [i_3] [i_2] [i_2] = (var_15 > var_3);

                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        var_16 ^= ((var_3 * (((arr_20 [1] [1] [i_3] [i_3] [i_3] [i_3]) ? 1 : 33924))));
                        arr_21 [i_3] [i_3] [i_3] [i_1] = var_5;
                        arr_22 [i_1] [17] [i_3] [i_4 - 2] = (((((var_2 ? (arr_12 [i_1 - 1] [i_1 - 1] [3] [i_3]) : (arr_20 [2] [i_3] [16] [i_4] [i_3] [i_1])))) ? ((3606642757872235460 ? var_7 : var_11)) : (((((arr_7 [i_1 - 1]) + 2147483647)) >> (var_5 - 34874)))));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, (!1)));
                            var_18 = (max(var_18, (((var_8 | (1 > var_2))))));
                            var_19 = (arr_25 [i_2] [i_6]);
                        }
                        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_36 [i_6] = (arr_7 [i_1 + 2]);
                            var_20 = (min(var_20, ((((arr_34 [i_5] [i_2] [i_5] [i_6] [1] [i_2]) > (var_12 * 16294))))));
                            arr_37 [i_1] [i_2] [i_5] [i_6] [i_8] = ((3733 ? 16294 : 1));
                        }
                        var_21 ^= (arr_27 [i_1 - 1] [i_1 + 2] [i_1 + 1]);
                    }
                    arr_38 [i_1] [23] [10] = var_13;
                    arr_39 [i_1 - 2] [1] [i_1] [8] = ((!(arr_30 [i_1] [i_1 + 1] [24] [i_1 + 2])));
                    arr_40 [i_5] [i_2] [i_2] [i_1 - 1] = (((arr_8 [i_1 + 2] [i_1 + 2]) ^ (arr_8 [i_1 + 2] [i_1 - 1])));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    var_22 = (min((min(var_7, (arr_33 [i_1 + 1]))), (arr_33 [i_1 - 1])));
                    arr_44 [1] &= (((var_11 ? (((var_0 > (arr_14 [i_1]))) : ((max((arr_17 [i_1] [i_2]), var_0)))))));
                    var_23 = (max(var_23, (((((var_2 ? (arr_35 [1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 2] [i_1 + 1]) : (arr_35 [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 2]))) | (!var_11))))));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            arr_50 [i_10] [i_11] = (!49242);
                            arr_51 [i_10] [i_10] [i_2] [i_1] [i_10] = ((+(((arr_8 [i_1 + 2] [i_1 - 2]) ? (arr_8 [i_2] [i_11]) : (arr_8 [i_1 - 1] [i_2])))));
                            arr_52 [i_1] [i_10] [i_11] = var_3;
                            var_24 = (((var_7 * var_11) == (min((arr_9 [i_2] [i_2] [i_11]), (1 > 16290)))));

                            for (int i_12 = 4; i_12 < 21;i_12 += 1)
                            {
                                arr_56 [i_1] [i_10] [i_10] [i_1 + 2] [i_1] = ((((max(var_13, (arr_41 [i_12 + 2] [i_1 + 1] [i_10])))) ? (arr_23 [i_1] [i_1] [i_1 + 1]) : (arr_23 [24] [i_1] [i_1 - 2])));
                                var_25 = (((((2 >= (arr_48 [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1] [i_10])))) <= ((-(arr_47 [i_1 + 2] [i_10] [i_12 - 3] [i_12 - 4])))));
                            }
                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 0;i_13 += 1)
                            {
                                var_26 = (min(var_26, ((((14680 >> 1) & (((arr_53 [12] [20]) ? var_14 : (arr_14 [i_10]))))))));
                                arr_60 [i_1] [i_2] [i_10] [i_11] [i_13 + 1] = (arr_14 [i_1 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_6;
    #pragma endscop
}
