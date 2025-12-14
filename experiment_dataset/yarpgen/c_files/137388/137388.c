/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((!var_7), var_3));
    var_13 |= (~10542376303482236520);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_9 [2] [7] [i_2] [i_2] = ((~(arr_2 [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 += (-((~(arr_11 [i_0 - 1]))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_15 += ((~(min((arr_11 [i_0 - 1]), (arr_1 [i_0 + 1])))));
                            var_16 = (arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [15] [i_4]);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = var_8;
                        }
                        var_17 = (max(var_17, (arr_10 [i_0 + 1] [23] [23] [i_3])));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_19 [i_5] [i_1] = 2301339409586323456;
                        var_18 = var_3;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_19 = ((~(min((min(0, 2889308473999902191)), -1))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_25 [i_0] [i_6] [18] = (-(max(var_5, ((~(arr_5 [i_1] [i_6] [i_7]))))));
                            arr_26 [i_7] [i_6] = (arr_17 [i_7] [i_7] [i_1] [i_0 - 1]);
                        }
                        var_20 = (max(var_20, (((-(arr_3 [i_0] [i_1] [i_0]))))));
                    }
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_33 [i_8] [i_9] = 2889308473999902191;
                        var_21 = arr_11 [i_1];
                        arr_34 [i_0] [i_1] [i_8] [i_8] |= ((~(~var_7)));
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_39 [i_10] [i_10] [i_10] [i_10] = 96;
                        var_22 *= ((var_5 ? (arr_32 [11] [i_1] [i_8] [i_10]) : ((~(arr_36 [i_10] [i_8] [i_1] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_23 = (213 / 20215);
                            arr_46 [i_11] [i_1] [i_11] [i_12] [i_12] [i_1] = (arr_35 [i_11] [i_1] [i_1] [i_8] [i_0 + 1]);
                            var_24 += -var_11;
                        }
                        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_0] [i_1] [22] [i_11] [i_13] [i_13] = var_0;
                            arr_50 [i_13] [i_11] [i_11] [9] [i_0] = var_9;
                            var_25 = ((-90 == (arr_45 [i_13])));
                            arr_51 [i_0] [i_0] [21] [i_11] [i_0] = (arr_23 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [15] [i_13]);
                        }
                        arr_52 [i_0] [i_11] [i_11] = (arr_11 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_61 [i_8] [i_8] [i_8] [i_8] [i_8] = (min((min((arr_31 [i_15] [i_15] [i_14 + 1] [i_14 + 1] [i_0] [i_0 - 1]), (arr_31 [i_15] [i_14] [i_14] [i_14 + 2] [15] [i_0 - 1]))), (((!(arr_31 [i_15] [i_15] [i_8] [i_1] [i_1] [i_0 - 1]))))));
                                var_26 = ((var_7 & (arr_48 [i_0 - 1] [i_0] [i_1] [i_8] [i_14] [15] [i_15])));
                            }
                        }
                    }
                }
                arr_62 [i_0] [i_1] [i_0 + 1] = var_9;
                var_27 *= (max((min(var_10, 4)), ((min((22 | var_7), ((~(arr_1 [i_1]))))))));
            }
        }
    }
    var_28 += (min((~3833), ((25 ? ((var_9 ? var_7 : var_11)) : (~var_7)))));
    #pragma endscop
}
