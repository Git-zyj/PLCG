/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((var_4 || var_4) ? var_4 : ((var_10 ? var_10 : var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_5;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = ((var_10 <= (arr_2 [i_1])));
                    arr_8 [i_2] [i_1] [i_0] = (1 - 503190464435834344);
                }
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    var_13 = var_10;
                    arr_11 [i_0] [i_0] [i_3] [i_3 + 2] = (arr_7 [i_1] [i_3 + 2]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_14 = var_10;
                                var_15 = (min(var_15, ((((arr_15 [i_0] [i_0] [i_1] [i_0] [i_3 - 2] [i_4] [i_5]) - ((((!(arr_9 [i_5] [i_3 - 3] [i_1] [i_0]))))))))));
                                var_16 = (-((-923135419 ? ((3927121987 ? var_8 : 503190464435834368)) : 12859293565428570954)));
                            }
                        }
                    }
                    var_17 = (arr_13 [i_0] [i_3] [i_1] [i_3 + 1] [i_3 - 3] [i_3 - 1]);
                    var_18 = ((!(((((var_3 < (arr_14 [i_0] [i_1] [i_1] [i_3 - 2]))) ? var_2 : (min((arr_2 [i_0]), (arr_3 [i_1]))))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_19 = ((var_3 && (arr_1 [i_0] [i_1])));

                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            var_20 = (!121);
                            arr_23 [i_7] [i_6] = var_8;
                            arr_24 [i_0] [i_0] [i_7] [i_0] [i_0] = var_0;
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_21 = (((arr_3 [i_6]) ? ((17943553609273717285 ? 1 : var_4)) : (arr_21 [i_9] [i_9] [i_7] [i_6] [i_1] [i_1] [i_0])));
                            var_22 ^= (arr_6 [i_1] [i_6] [i_7] [i_9]);
                        }
                        for (int i_10 = 2; i_10 < 22;i_10 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] = (arr_12 [i_10 - 1] [i_7] [i_6] [i_1]);
                            var_23 = (min(var_23, (arr_2 [i_10 - 2])));
                        }
                        var_24 = (max(var_24, var_4));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_34 [i_11] [i_0] [i_1] [i_6] [i_11] = (max((((arr_27 [i_0] [i_11] [i_0] [i_0] [i_0] [i_0]) ? (arr_27 [i_11] [i_11] [i_1] [i_11] [i_1] [i_1]) : (arr_27 [i_11] [i_11] [i_6] [i_1] [i_11] [i_0]))), ((min((arr_27 [i_0] [i_11] [i_6] [i_11] [i_1] [i_6]), (arr_27 [i_11] [i_11] [i_1] [i_0] [i_11] [i_0]))))));
                        arr_35 [i_0] [i_1] [i_6] [i_11] = ((((((arr_3 [i_0]) >> (((arr_3 [i_1]) - 1741015360))))) ? (arr_3 [i_0]) : (min((arr_3 [i_11]), 17943553609273717300))));
                        var_25 = (max(var_25, ((((-23 ? 503190464435834331 : var_0))))));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_26 = var_10;
                        var_27 = ((var_9 ? ((((17943553609273717285 / var_3) ? (arr_13 [i_0] [i_0] [i_1] [i_12] [i_1] [i_0]) : -46))) : (min(((((arr_10 [i_0] [i_1] [i_6] [i_12]) ? 0 : 0))), (min(1, 503190464435834330))))));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_44 [i_0] [i_1] [i_6] [i_13] [i_13] = (arr_33 [i_0] [i_1] [i_1] [i_0] [i_13]);
                        var_28 = (max(var_28, ((((((arr_2 [i_0]) + 2147483647)) << (!-18))))));
                    }
                    arr_45 [i_0] [i_0] [i_0] = (((((1 << (arr_38 [i_0] [i_1] [i_6] [i_1])))) ? var_6 : var_5));
                }
                arr_46 [i_0] = -30927;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                {
                    var_29 = var_3;
                    var_30 = (min(var_30, (((226 << (((arr_26 [i_16] [i_16] [i_16] [i_15 - 1] [i_14] [i_14]) - 26409)))))));
                    var_31 ^= (min((1 - var_6), (((var_2 == (-23 > 1))))));
                    arr_54 [i_14] [i_15 - 1] [i_14] = (arr_53 [i_14] [i_14] [i_16] [i_15 - 1]);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 11;i_18 += 1)
                        {
                            {
                                arr_61 [i_18 - 1] [i_14] [i_16] [i_16] [i_15 - 1] [i_14] [i_14] = (arr_22 [i_14] [i_18 + 1] [i_16] [i_17] [i_18 + 1]);
                                var_32 ^= ((((var_9 ? (arr_15 [i_18 + 1] [i_17] [i_16] [18] [i_14] [i_14] [i_14]) : (arr_31 [i_14] [14] [i_15 + 1] [i_17] [i_17] [i_15 - 1])))) > (min((min((arr_53 [i_18 - 1] [0] [i_16] [i_17]), (arr_17 [i_14] [i_15 - 1] [i_16] [i_18 + 1]))), -var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
