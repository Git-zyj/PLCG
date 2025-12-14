/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 *= (arr_7 [i_0] [i_1] [i_1]);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                            {
                                var_13 = ((arr_2 [i_3] [i_2]) != (arr_5 [i_2]));
                                var_14 = (arr_12 [i_0] [i_1] [i_0]);
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                var_15 -= (max(((((((var_7 ? (arr_7 [i_0] [i_2] [i_0]) : var_0))) ? (arr_2 [15] [i_0]) : ((~(arr_3 [i_2])))))), (min((arr_2 [i_0] [i_5]), ((max((arr_4 [i_0] [i_1]), (arr_9 [i_1] [i_3] [i_5]))))))));
                                arr_17 [i_5] [i_1] [i_1] [i_0] = (arr_1 [i_1] [1]);
                            }
                            var_16 = ((-(((arr_4 [i_3] [i_2]) ? (arr_11 [i_3] [i_0]) : (arr_9 [i_0] [i_2] [i_3])))));
                            var_17 = (min(var_17, (((~(((var_10 == (arr_7 [i_0] [i_0] [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_18 = (((((-(arr_10 [i_0] [i_1] [i_0] [i_7 - 1])))) && (!4294967292)));
                            arr_22 [i_7 - 2] [i_7] [i_7] [i_7] = ((~(arr_4 [i_7] [i_7])));
                            var_19 = (min((arr_10 [i_7 - 2] [i_7] [i_7] [i_7 - 1]), (min((arr_10 [i_7 - 2] [i_7] [i_7] [i_7 - 1]), (arr_10 [i_7 - 2] [i_7 - 1] [i_7 + 3] [i_7 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((var_1 ? var_6 : var_3))));
    var_21 = var_3;
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 6;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {

                    for (int i_11 = 3; i_11 < 8;i_11 += 1)
                    {
                        var_22 = (max(var_22, (((((arr_13 [i_9 - 2] [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9 - 1]) / (arr_13 [i_9] [i_9] [1] [i_9 - 2] [i_9] [i_9 - 1] [21])))))));
                        var_23 |= ((~((53914 ? ((var_6 ? var_4 : var_6)) : (((arr_23 [i_8 + 4] [i_10]) ? (arr_21 [2] [17] [15]) : (arr_21 [i_8] [i_9] [i_11 + 2])))))));
                        var_24 = (arr_26 [i_11 - 2]);
                        arr_32 [i_8] [i_10] [i_8] [i_8] = ((((!(arr_4 [i_8] [i_9 + 1]))) ? ((var_6 ? (arr_4 [i_8 + 1] [i_9 - 1]) : (arr_31 [i_8 + 4] [i_9 - 1] [i_8 + 4] [i_11] [i_8 + 2]))) : ((((arr_31 [i_8] [i_9 - 2] [i_8 + 2] [i_9 - 2] [i_11]) >= (arr_31 [9] [i_9 - 1] [i_8 + 2] [8] [i_11]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_38 [i_8 - 2] [i_8 + 1] [i_9] [i_12] [i_13] [i_8 + 1] = (arr_5 [i_8 - 1]);
                                var_25 = (max((((-(arr_11 [i_8 + 4] [i_13])))), ((((arr_37 [i_9 - 1] [i_8 - 1] [2] [i_9] [i_13]) && (arr_37 [i_9 - 1] [i_8 + 3] [i_10] [i_12] [i_13]))))));
                                arr_39 [i_9] [i_13] [i_12] [i_9] [i_9] [i_9] [i_8] &= (((arr_5 [i_12]) ? (arr_1 [i_9 - 2] [i_8 + 4]) : 1));
                                var_26 = (min((arr_15 [i_8] [i_9] [9] [i_12] [i_13]), var_1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_47 [i_8] [i_9 + 2] [i_10] [i_14] [i_15] [i_10] = (min(var_11, (arr_29 [i_8 + 2] [i_9 - 1] [i_10] [i_15])));
                                arr_48 [i_8] [i_9] [i_8] [i_14] [i_14] [i_15] [i_15] = (((((((arr_2 [i_8 - 1] [i_10]) ? var_0 : 3379392288))) ? (arr_10 [i_8] [i_9] [i_10] [i_15]) : ((1 ? var_5 : var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
