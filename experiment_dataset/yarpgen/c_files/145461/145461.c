/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1] = var_9;
                    arr_8 [i_0 + 3] [i_1] [i_2] = var_4;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0 - 3] [1] [i_2] [i_1] = min(((min(var_9, (max(203, 13767))))), (((((arr_1 [i_2] [i_1]) ? var_12 : (arr_9 [i_1] [i_0] [i_1] [i_1]))) >> (var_10 - 11120220035035185752))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_2] = (max((max((max(var_2, 70)), var_9)), (((!(arr_3 [i_0 - 2]))))));
                            var_18 = (max(((max(((max(var_5, var_13))), var_15))), var_3));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, 187));
                            var_20 = (arr_13 [i_5] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_21 = ((213 ? ((((arr_14 [i_1]) | (arr_3 [i_0 + 3])))) : (min(var_9, (min(var_10, var_5))))));
                            var_22 = (min((((((-16 ? (arr_5 [i_1] [i_1] [i_1]) : var_15))) ? (min(var_9, var_10)) : (arr_0 [i_0 + 3]))), (max((max((arr_20 [7] [i_1] [i_2] [i_3] [i_2] [i_1]), var_5)), (((-(arr_9 [i_0] [i_0] [i_0] [i_1]))))))));
                            arr_21 [i_6] [i_1] [i_1] [i_1] [4] = -715675723;
                        }
                        var_23 = (max((~var_10), ((((min((arr_17 [15] [15] [i_2] [15] [i_0]), 1659139112)) >> (56 - 33))))));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_1] = (max(((-1 ? (((arr_18 [16] [i_1] [11] [i_1] [i_0]) / 14764980929543282471)) : -var_5)), ((max(0, 945488806767035286)))));
                }
            }
        }
    }
    var_24 = ((8 ? 56 : 8304628874257924338));
    #pragma endscop
}
