/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((arr_0 [i_1 - 1]) && (arr_0 [i_1 - 1])))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_15 = (min(var_15, var_10));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_0] [6] [i_0] [i_0] [i_0] |= (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [2]);
                            var_16 = (-55 + 298153501);
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_17 -= (((-57344 ? var_7 : var_12)));
                            var_18 = (min(var_18, (((1 ? 8246 : 1)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_19 = (((arr_0 [i_1 + 1]) % (arr_0 [i_1 - 1])));
                            var_20 = ((arr_15 [i_0] [i_1 - 1] [i_2] [i_1 + 1] [i_1 + 1] [i_3] [i_1]) ? (arr_15 [i_2] [i_2] [i_2] [i_1 + 1] [i_6] [i_1 + 1] [i_3]) : (arr_15 [i_0] [i_6] [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]));
                        }

                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            var_21 &= var_1;
                            var_22 &= (((arr_5 [i_7 - 3] [i_7] [i_1 + 1] [i_3]) ? (arr_5 [i_7 - 1] [i_1] [i_1 - 1] [i_3]) : (arr_5 [i_7 - 1] [i_1] [i_1 + 1] [i_3])));
                            var_23 -= 1;
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_24 *= ((17340 ? 1 : 1));
                            var_25 = 49401;
                        }
                        arr_21 [i_0] [i_1] [8] [i_3] [i_0] [i_0] &= (arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3] [i_0]);
                        var_26 *= ((!((min(1, 17329)))));
                        var_27 = (arr_3 [i_3]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_28 = ((-(arr_1 [i_1 + 1])));
                        arr_25 [i_0] [i_1 + 1] [i_1] [i_2] [i_9] = (arr_2 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_29 -= ((arr_20 [i_1] [i_1 + 1] [i_10] [12] [i_1 + 1]) ? var_0 : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]));
                        arr_28 [4] [i_2] |= 14720868274957845563;
                    }
                }
                var_30 -= (arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_31 *= (arr_2 [i_1]);

                            for (int i_13 = 1; i_13 < 12;i_13 += 1)
                            {
                                var_32 = (max(((min((arr_11 [i_13 + 2] [i_13 + 1] [i_1 + 1] [i_12] [i_13] [i_12]), var_4))), (arr_33 [i_1] [i_1] [i_1] [i_12] [i_13])));
                                var_33 *= (min(670236564641205671, 1));
                                var_34 *= (((((~(arr_20 [i_13] [i_13] [i_13 + 1] [i_1 + 1] [i_1 + 1])))) ? (arr_23 [i_1 - 1] [i_11] [i_13 - 1] [i_13 + 2] [i_13] [i_13]) : ((max((arr_20 [i_13] [i_13 - 1] [i_13 - 1] [i_1 - 1] [i_1 + 1]), (arr_31 [i_1] [i_12] [i_1] [i_1] [i_1 - 1]))))));
                            }
                            /* vectorizable */
                            for (int i_14 = 2; i_14 < 10;i_14 += 1) /* same iter space */
                            {
                                var_35 = ((var_12 ? (arr_24 [i_14] [i_14 + 3] [1] [1] [1] [i_14]) : (arr_31 [i_14 + 2] [i_1] [i_11] [i_1] [i_11])));
                                arr_37 [i_1] [i_0] = (arr_18 [i_11] [i_1]);
                                arr_38 [i_14] [i_14] &= (arr_9 [i_12] [i_1] [i_14 + 1] [i_12] [i_1] [i_1 - 1]);
                                var_36 = ((!(arr_36 [i_1])));
                                var_37 = ((!(arr_18 [i_0] [i_1])));
                            }
                            for (int i_15 = 2; i_15 < 10;i_15 += 1) /* same iter space */
                            {
                                var_38 *= ((max((arr_24 [i_0] [i_0] [i_1] [i_11] [i_12] [i_15]), ((1 ? (arr_24 [i_0] [i_0] [0] [i_11] [i_12] [i_15]) : var_3)))));
                                var_39 = (min(((~(arr_13 [i_0] [i_0] [i_15 + 3] [i_12] [i_0]))), 1));
                                var_40 = (var_1 ? ((max((arr_22 [i_0] [i_1 + 1] [i_15 + 4] [i_1 + 1]), 1))) : -var_5);
                                var_41 = ((((((!(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_27 [i_0] [i_0] [i_0] [i_0]) : (((!(arr_3 [i_12]))))))) ? (arr_5 [4] [i_1] [i_1 - 1] [i_1]) : (((arr_2 [i_0]) ? var_3 : -var_2)));
                                arr_41 [i_1] [i_1 - 1] [i_1 - 1] [i_12] [i_15 + 3] = ((~(((arr_0 [i_12]) ? (arr_0 [i_12]) : (arr_0 [i_0])))));
                            }
                            /* vectorizable */
                            for (int i_16 = 0; i_16 < 14;i_16 += 1)
                            {
                                var_42 *= (arr_24 [i_0] [i_1] [i_11] [i_12] [i_12] [i_16]);
                                var_43 *= 17342;
                                var_44 = var_5;
                                var_45 = (arr_30 [i_0] [i_11] [i_11] [i_0]);
                                var_46 = (arr_5 [i_16] [i_11] [i_1] [i_0]);
                            }
                            arr_44 [i_0] [i_1] [i_11] [i_1] = ((-((var_12 - (arr_27 [i_0] [i_1] [i_11] [i_12])))));
                        }
                    }
                }
            }
        }
    }
    var_47 = var_12;
    #pragma endscop
}
