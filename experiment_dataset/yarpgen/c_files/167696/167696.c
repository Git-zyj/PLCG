/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_2] = ((var_10 ? (arr_1 [2] [2]) : ((((((arr_8 [i_1] [i_1] [i_0]) & var_11))) ? (arr_7 [i_2] [i_1 - 1] [i_0 + 1] [i_2]) : ((var_14 ? var_12 : var_2))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_15 = var_13;
                        var_16 *= arr_3 [i_3 - 1];
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_2] [1] = 3744130954481151212;
                        var_17 = ((((var_2 ? 1475309387 : var_8))) ? 32767 : -1100641759);
                        var_18 *= var_10;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_20 [i_0] [i_5] [16] [i_2] = (max((var_3 < var_8), ((18 ? (arr_13 [i_2] [i_1] [1] [i_5] [i_1 + 2]) : var_0))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_19 = 65535;
                            arr_23 [i_2] [1] [i_5] [i_2] [i_1] [i_2] = (arr_21 [i_6] [i_2 - 1] [i_2 - 1]);
                            arr_24 [1] [i_1] [16] [7] [i_1] [i_2] [i_1] = (((arr_4 [i_0]) ? var_6 : (arr_17 [i_0] [i_2] [0] [i_2])));
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            var_20 = (min(var_20, (((var_8 ? ((((min(-2147483636, -8925))) ? ((96 ? (arr_11 [i_0] [9] [i_2] [9] [11] [i_1 - 1]) : (arr_8 [i_0 - 1] [i_5] [i_7 - 1]))) : (((arr_27 [i_0] [2] [i_2] [0] [i_7] [i_0 - 1] [i_2]) & var_10)))) : var_2)))));
                            var_21 = (arr_22 [i_7]);
                            var_22 = (min(var_22, var_13));
                        }
                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            arr_33 [i_8] [i_1 + 3] [i_2] [i_2 + 1] [i_2] = (min(-1475309387, ((var_1 ? ((max(233, -12))) : (((arr_18 [i_8] [i_1] [9] [i_1] [i_0 - 1] [19]) ^ (arr_7 [i_2] [4] [4] [i_2])))))));
                            var_23 = var_3;
                        }
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_36 [i_2] = max((max(((min(1475309400, var_8))), ((var_2 ? var_9 : 6)))), (((((255 ? var_6 : (arr_14 [i_0 - 1] [0] [i_2 - 1])))) ? ((var_14 ? (arr_6 [i_0 - 1] [i_1] [i_2]) : var_11)) : var_3)));
                        arr_37 [i_2 + 1] [i_2] [i_2] [16] = var_3;
                        arr_38 [i_0 + 1] [i_2] [i_1 + 2] [i_2] [i_0 + 1] = ((((((arr_30 [i_2] [i_0] [i_2 + 1] [5] [5]) ? var_7 : var_5))) ? ((min((arr_30 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]), (arr_30 [i_2] [0] [i_2 + 1] [i_2 + 1] [i_9])))) : (((arr_30 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]) ? var_7 : var_5))));
                    }

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_24 *= (arr_19 [9] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 1]);
                        arr_43 [i_2] [11] [i_2] = (arr_4 [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_25 = max((arr_28 [i_11] [i_1] [i_2] [i_11] [i_11] [i_11]), (max((arr_4 [i_0 - 1]), var_10)));
                        arr_46 [i_0] [14] [14] [i_2] = (((((1100641757 ? var_12 : 0))) ? 952976868 : -19));
                    }
                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        var_26 |= (((arr_40 [18] [i_1] [i_1] [10] [i_1] [i_1 - 1]) % 4294967295));
                        var_27 = (arr_30 [i_2] [i_2] [i_2 + 1] [i_12] [1]);
                        var_28 = (arr_5 [6] [7]);
                    }
                }
            }
        }
    }
    var_29 = var_12;
    #pragma endscop
}
