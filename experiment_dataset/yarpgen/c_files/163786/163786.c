/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                var_16 -= (((!((((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_3] [i_3] [i_2]) : var_13))))));
                                var_17 ^= ((!(arr_10 [4] [i_1] [i_2 + 2] [i_3] [i_4])));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_18 = ((var_15 ? var_12 : ((var_2 ? var_8 : (arr_11 [i_0] [i_2 - 1] [i_0] [i_0] [i_0])))));
                                var_19 |= var_15;
                                arr_16 [i_0] [i_0] [i_2 - 1] [i_3] [i_3] [i_5] [i_0] &= ((((((arr_5 [i_0]) ? var_1 : (arr_12 [i_0] [11] [i_0] [i_2] [i_3] [11])))) ? (((arr_1 [12]) ? (arr_7 [i_0] [i_1] [i_2 + 2] [i_3] [i_5]) : (arr_10 [i_0] [9] [9] [1] [1]))) : (((var_12 ? (arr_2 [i_1] [i_2] [i_3]) : var_1)))));
                                var_20 ^= (((((var_4 ? (arr_14 [i_5] [i_1] [i_5] [4] [1]) : (arr_7 [11] [i_1] [i_2] [i_3] [i_3])))) ? ((var_9 ? (arr_2 [i_5] [i_5 + 2] [i_5 + 1]) : var_10)) : (arr_5 [i_5])));
                            }
                            for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                var_21 = (arr_6 [i_0] [i_0] [i_2 - 1] [i_3]);
                                var_22 = ((var_8 ? (!1) : (!var_13)));
                            }
                            arr_19 [i_0] [i_2 + 2] [i_0] [i_0] = (~var_7);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 = ((-((-(arr_27 [13] [i_7 + 1] [i_8 - 2] [i_9])))));
                                var_24 = ((-(arr_5 [i_0])));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_35 [i_0] [i_10] [11] [i_0] [3] = ((~(arr_2 [i_0] [i_0] [1])));
                                var_25 = var_10;
                                var_26 = (((!(min((arr_14 [i_0] [i_0] [2] [i_11] [i_0]), var_0)))));
                                var_27 ^= var_6;
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_39 [1] [i_1] [i_10] [i_10] = var_12;
                        var_28 = var_13;
                        arr_40 [i_0] [11] [i_0] [i_10] = max((((var_15 ? (arr_4 [i_0] [i_10] [i_13]) : (((arr_17 [i_0] [i_0] [i_0] [i_0] [0]) ? var_7 : var_2))))), ((((((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_0 : var_9))) ? ((((arr_22 [i_0] [i_0] [i_0]) ? var_10 : (arr_12 [i_10] [i_1] [i_1] [i_1] [i_10] [i_1])))) : (min((arr_4 [i_0] [i_1] [i_13]), (arr_0 [i_13]))))));
                    }
                    for (int i_14 = 1; i_14 < 11;i_14 += 1)
                    {
                        var_29 = ((~((-(((arr_27 [i_0] [1] [i_10] [i_14]) ? (arr_30 [1] [i_10] [i_1]) : (arr_4 [i_0] [i_0] [i_0])))))));
                        var_30 = ((~((+(((arr_36 [i_14 - 1] [i_14 + 2] [i_10] [i_10] [5] [i_0]) ? var_15 : var_1))))));
                        var_31 = ((var_3 ? ((((((~(arr_14 [i_1] [i_14] [i_10] [i_1] [i_0])))) ? var_4 : (arr_10 [1] [i_1] [i_10] [1] [i_14])))) : (max(((~(arr_6 [i_0] [i_1] [8] [7]))), (arr_22 [i_0] [i_1] [i_10])))));
                    }
                    arr_45 [i_10] [i_10] [i_10] [i_10] = (((((17040 ? 1 : 48495))) ? ((-24177 ? 17035 : 48491)) : (((!(arr_37 [i_0] [i_1] [i_1] [3] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            {
                                arr_54 [i_10] = ((var_13 ? (arr_43 [i_0] [i_0] [i_10] [i_10]) : ((~(!var_11)))));
                                var_32 = ((!(((~((48491 ? -19126 : 48468)))))));
                                var_33 = (~1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = (((((var_11 ? var_11 : var_2)))) ? (((((min(var_12, var_4))) ? ((var_9 ? var_10 : var_11)) : -var_1))) : (((~var_14) ? (max(var_10, var_3)) : (~var_1))));
    #pragma endscop
}
