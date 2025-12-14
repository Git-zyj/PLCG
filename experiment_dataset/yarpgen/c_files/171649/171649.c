/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_6, var_4));
    var_14 &= var_12;
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_16 = ((((((arr_7 [i_3] [i_3] [i_3] [i_3]) ? (arr_3 [i_0] [i_3]) : (arr_7 [i_0] [i_1] [i_2] [i_3])))) ? ((((!((((arr_1 [i_2]) + var_5))))))) : (min(((43 ? var_3 : (arr_3 [i_0] [i_1]))), 7))));
                        var_17 ^= -1;

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_18 = 0;
                            arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = var_4;
                            arr_14 [i_0] = (arr_2 [i_2]);
                        }
                        arr_15 [i_0] [i_0] [i_0] [i_0] &= (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0]);
                        var_19 = (max(var_19, ((((!(arr_2 [i_2 - 2]))) ? (arr_2 [i_2 - 2]) : (arr_2 [i_2 + 1])))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_20 = -81;
                        arr_18 [i_0] [i_1] [i_1] [i_5] = ((((max(var_2, (arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) ? (((-((-(arr_16 [i_5] [i_2 - 1] [i_1] [i_1] [i_0])))))) : (((arr_12 [i_2 - 1]) ? (arr_2 [i_2]) : 24))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] = (arr_11 [i_0] [i_1] [i_2] [i_0] [i_5]);
                        arr_20 [i_0] [i_1] [i_2] [i_5] = arr_11 [i_0] [i_1] [i_2] [i_2] [i_5];
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_21 = (((arr_12 [i_2 - 1]) ? (arr_12 [i_2 + 1]) : (arr_12 [i_2 - 2])));
                        arr_23 [i_0] [i_0] [i_2] [i_2] = ((290151719 ? -58 : (arr_7 [i_2 - 2] [i_2] [i_2] [i_2])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_22 -= (min(var_5, (((1 ? 195459305 : 1)))));
                        var_23 -= (arr_24 [i_7] [i_1] [i_7] [i_7] [i_1] [i_2]);
                        var_24 = (-(((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((arr_25 [i_0] [i_2] [i_0] [i_1] [i_7] [i_0]) ? var_7 : (arr_9 [i_0] [i_1] [i_1] [i_7]))) : (arr_8 [i_1] [i_1] [i_2 - 2] [i_2 - 2]))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_25 *= ((min(((var_11 ? 2147483635 : (arr_30 [i_0] [i_2 + 1] [i_8]))), (((var_2 || (arr_22 [i_0] [i_0] [i_2] [i_8])))))));
                        arr_31 [i_0] [i_1] [i_2] [i_8] &= (((arr_6 [i_2 - 2]) ? (arr_22 [i_0] [i_2 - 1] [i_2] [i_2 - 1]) : (((!(arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    var_26 ^= ((((((arr_6 [i_2 - 1]) ? var_12 : (arr_6 [i_2 - 1])))) ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2 - 1]) : (arr_6 [i_2 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
