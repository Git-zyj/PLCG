/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, var_15));
                                var_18 = 3437118838514129154;
                                arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_4 - 1] = ((((((arr_1 [i_0 + 1]) ? (min(9939771343867715417, 1)) : 11))) ? (((var_16 ? 1 : var_9))) : var_6));
                            }
                        }
                    }
                }
                var_19 -= 59266;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_20 = ((var_12 / (arr_9 [i_1 - 1] [i_1 - 1] [i_5] [i_0 + 1])));
                    var_21 = (min(var_21, (((var_15 ? (!2903149408) : 1)))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_22 = ((~((((arr_11 [i_0 + 1] [i_1 + 1] [i_6] [i_1 + 1]) || (arr_3 [i_1 + 1]))))));

                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_23 = (min(var_23, (arr_7 [i_0 - 1] [i_7 + 3] [i_0 + 1])));
                        var_24 -= ((((((0 >> (arr_20 [i_0] [i_0] [i_6] [i_7 + 1])) < 1)))));
                        var_25 = (min(var_25, 0));
                    }

                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        var_26 = (min(var_26, (((var_11 ? ((1908453825426417983 ? (arr_23 [i_0 + 1] [i_0 + 1]) : 2045221995)) : (((max(var_1, (arr_21 [i_0] [i_8 - 4] [i_0] [i_8] [i_1 + 1]))))))))));
                        var_27 = ((-(arr_23 [i_0 + 1] [i_8 - 3])));

                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            var_28 = (min(var_28, (((var_0 ? (0 == var_7) : (arr_26 [i_0] [i_1] [i_6] [i_1] [i_0] [i_8] [i_9 + 2]))))));
                            var_29 |= (min(var_7, var_5));
                            var_30 = (max(var_30, ((((arr_22 [i_9 - 1] [i_8 - 3] [i_6] [i_0 + 1] [i_9] [i_0 + 1]) ? (((arr_26 [i_0] [i_1] [i_6] [i_8 + 1] [i_9 + 1] [i_8] [i_0 + 1]) * (arr_23 [i_1 - 1] [i_9 - 3]))) : (((max(2249745300, 1391817865)))))))));
                        }
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            arr_31 [i_0 - 1] [i_10 - 1] = (((arr_6 [i_0] [i_1] [i_10] [i_0 - 1]) / ((((((arr_22 [i_8 - 4] [i_10] [i_10] [i_10 + 1] [i_10 - 2] [i_1 + 1]) ? (arr_13 [i_0 + 1] [i_0 + 1] [i_6]) : 209867941))) ? -var_16 : 1))));
                            var_31 -= (((!(((arr_19 [i_0] [i_1 - 1] [i_1 + 1] [i_8] [i_10]) && (arr_30 [i_0 - 1] [i_1] [i_6] [i_8] [i_10 - 1]))))));
                        }
                        for (int i_11 = 3; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            arr_35 [i_0] = 2903149408;
                            var_32 &= -13452561398748444212;
                        }
                        for (int i_12 = 3; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_8 - 4] [i_0 - 1] [i_8 + 1] [i_12] = var_5;
                            var_33 = (min(var_33, (((-2004849775 ? 209867934 : 209867948)))));
                        }
                    }
                    arr_40 [i_0 - 1] [i_1] [i_1] [i_6] = (arr_1 [i_0]);
                }
                for (int i_13 = 2; i_13 < 18;i_13 += 1)
                {
                    var_34 = (((arr_3 [i_1 - 1]) > (((arr_4 [i_13 - 1] [i_1 + 1]) + 248))));
                    var_35 -= arr_5 [i_0 - 1] [i_1 - 1];
                }
            }
        }
    }
    var_36 = (var_8 > var_6);
    var_37 = var_5;
    #pragma endscop
}
