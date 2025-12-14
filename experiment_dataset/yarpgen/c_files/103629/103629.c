/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= -var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_1] = ((((max((!var_4), var_4))) ? var_5 : (17 >> 0)));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_14 = 1;
                        var_15 = (min(var_15, (arr_7 [i_0] [i_0] [i_0] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_16 = ((((((~254341096) ? 4040626200 : var_6))) ? ((min(((var_5 < (arr_6 [i_0] [i_0]))), (var_11 != var_2)))) : (((arr_13 [i_1]) >> (var_11 - 22064)))));
                        arr_15 [i_1] [i_1] [i_1] [i_2] [i_4] = ((!((((!var_12) ? 1 : (arr_10 [i_4] [i_2] [13] [i_0]))))));
                        var_17 = (((var_5 ? (arr_0 [i_1]) : (254341095 + 254341106))));
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_18 = ((((0 >> (254341109 - 254341090))) | (max((arr_12 [i_0]), (-773697451 | 37191)))));
                        var_19 = var_2;
                        var_20 = (arr_18 [i_0] [i_0] [i_0] [i_0]);
                        var_21 = var_6;
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        var_22 *= var_8;
                        arr_22 [i_0] [i_1] [i_2] [i_6] [i_1] [i_1] = -1950720356;
                    }
                    var_23 += -29703005;
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_26 [i_1] [i_1] [i_1] [i_1] = 1;
                    var_24 = ((!(((var_8 ? (arr_17 [i_0] [i_1] [i_0] [i_7]) : (arr_17 [i_0] [i_0] [i_7] [i_7]))))));
                    arr_27 [i_0] [i_0] [i_1] [i_7] = ((~((var_5 ? 1 : (arr_10 [i_0] [i_0] [i_7] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_25 ^= 4040626200;
                                var_26 = (min(var_26, ((((!var_3) <= var_10)))));
                            }
                        }
                    }
                    var_27 = (1 > 0);
                }
                var_28 ^= (((var_5 | (arr_29 [i_0] [i_1] [i_0] [i_0]))) ^ ((min(var_6, (arr_29 [3] [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_29 += (var_9 / var_8);
    #pragma endscop
}
