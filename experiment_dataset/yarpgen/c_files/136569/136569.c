/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = ((min(var_6, var_2)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = ((((+(((arr_0 [i_0] [i_0]) ? 3686321163671493030 : var_2))))) ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_10))) : (((var_12 & (arr_3 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] = -var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_3]) : (arr_7 [i_0] [i_1])))) && (~0))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [21] [i_0] = ((~((~(arr_10 [i_2] [i_1] [i_2] [i_3] [i_2] [i_4])))));
                                var_17 = (max(var_17, ((((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]) == (((var_12 ? (arr_4 [i_0]) : (arr_5 [i_2])))))) ? (((arr_9 [i_4] [i_3] [17]) ? var_2 : (arr_12 [i_0] [i_1] [i_2] [i_1] [i_4]))) : (arr_13 [20] [i_1]))))));
                                var_18 = (((((arr_6 [i_0] [i_3]) + (arr_13 [i_4] [i_0]))) + (arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] [14])));
                            }
                        }
                    }
                    var_19 = var_6;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                {
                    var_20 = (arr_9 [i_6 - 1] [12] [i_6 - 1]);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_21 += ((+(((arr_25 [6] [i_6 + 1] [i_6 - 1] [i_7 + 1] [i_8 + 2]) ? (arr_25 [i_5] [i_6 - 1] [i_6 - 1] [i_7 - 1] [i_8 + 2]) : (arr_25 [i_5] [i_6 - 1] [i_6] [i_7 - 2] [i_8 + 2])))));
                                arr_31 [i_5] &= (arr_21 [i_9]);
                                var_22 += -2071917437;
                            }
                        }
                    }
                    var_23 = (max(var_23, (((arr_14 [16]) ? (arr_17 [7] [18]) : (min((arr_30 [i_6 + 1] [i_6] [i_7 - 1] [i_7 - 2] [i_7 + 1]), -2))))));
                }
            }
        }

        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    {
                        arr_41 [i_5] = ((2071917462 ? (arr_30 [i_11] [3] [i_11] [i_12 - 2] [i_11]) : var_9));
                        var_24 = var_8;
                        var_25 = arr_11 [i_12 - 3] [i_12 - 3] [i_12 + 1] [i_12 + 1] [i_5] [i_5];
                        arr_42 [i_5] [i_10] [i_11] [i_12] = ((((((2071917436 + -102) ? -var_7 : (arr_13 [i_12 - 2] [i_12 - 1])))) ? (arr_25 [i_5] [i_5] [i_5] [i_5] [i_11]) : (min((arr_21 [i_12 + 2]), var_7))));
                    }
                }
            }
            var_26 = ((((min((arr_4 [i_10]), ((var_2 ? 2071917436 : (arr_0 [i_5] [8])))))) ? ((((arr_7 [i_5] [i_5]) ? (arr_40 [16] [i_10] [i_10]) : ((min(var_10, (arr_37 [i_10] [i_10] [i_10] [i_10]))))))) : (((((arr_11 [i_5] [i_5] [i_5] [i_10] [i_5] [i_10]) / (arr_20 [i_5]))) ^ (!var_4)))));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        arr_48 [i_5] [i_10] [i_13] = 36028797018963968;
                        var_27 = min((((~(-2071917437 | 1)))), (arr_21 [i_13]));

                        /* vectorizable */
                        for (int i_15 = 3; i_15 < 21;i_15 += 1)
                        {
                            var_28 = (arr_9 [i_15] [i_15 + 1] [i_13 + 1]);
                            arr_52 [i_15] [i_14] [i_13] [i_10] [i_5] = (((arr_17 [i_13 + 1] [i_13 - 1]) ? var_2 : (arr_17 [i_13 + 1] [i_13 + 2])));
                            var_29 = (max(var_29, ((((arr_38 [i_5] [i_10] [15] [9]) ? (arr_33 [i_10] [i_13 + 2] [i_15 + 1]) : (arr_33 [i_10] [i_13 + 2] [i_14]))))));
                        }
                        var_30 = (!1);
                    }
                }
            }
            arr_53 [i_5] [i_10] [i_10] = (arr_33 [i_5] [i_5] [i_5]);
            var_31 = (max(var_31, ((min((9223372036854775786 < -7234302827989378685), (min((arr_11 [i_5] [i_5] [i_5] [i_10] [i_5] [i_10]), (arr_11 [i_5] [i_5] [i_5] [i_10] [i_10] [i_10]))))))));
        }
        var_32 = -var_7;
        arr_54 [1] [i_5] = (((((-(arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (arr_10 [18] [i_5] [i_5] [i_5] [i_5] [i_5]) : (((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                {
                    var_33 *= (((arr_19 [i_17 + 1] [i_17 - 2]) ^ (arr_21 [i_17 - 1])));
                    var_34 ^= (arr_50 [i_16] [i_17 - 2] [i_18] [i_18] [i_17 + 1] [i_18] [i_17]);
                    var_35 = (((arr_0 [i_17 + 1] [9]) ? 102 : (arr_23 [i_17 - 2] [i_17 + 1])));
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 19;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            {
                                arr_68 [i_18] = ((-8660127969229499682 ? 158 : -4584947944904929584));
                                var_36 = var_0;
                            }
                        }
                    }
                }
            }
        }
        var_37 = (((arr_40 [2] [i_16] [i_16]) ? (arr_40 [i_16] [i_16] [15]) : (arr_40 [i_16] [i_16] [i_16])));
        arr_69 [i_16] [i_16] = ((-(arr_17 [i_16] [i_16])));
        arr_70 [i_16] &= ((-(arr_55 [i_16] [i_16])));
        arr_71 [i_16] = 108;
    }
    for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
    {
        var_38 = (arr_61 [i_21] [i_21] [i_21]);
        arr_74 [i_21] = ((!(arr_67 [i_21] [i_21])));
    }
    #pragma endscop
}
