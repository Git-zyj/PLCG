/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((-(arr_1 [i_0])));
        arr_2 [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_17 = (((var_14 * var_4) ? (arr_1 [i_0]) : -3));
                            var_18 += (((!63) / (((var_7 + 2147483647) >> (-4364929352452673259 + 4364929352452673289)))));
                            var_19 = (41430 ^ 44631);
                            arr_12 [i_4] [i_3] [i_2 - 3] [i_1] [i_1] [i_0] [i_0] = (((((var_3 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_3 - 3] [i_1] [i_2 - 1] [i_3 - 2])))) ? (((arr_8 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0]) ? (arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]) : var_1)) : (arr_5 [i_4 - 2] [i_1])));
                            var_20 -= (arr_11 [i_1 + 1] [i_4 - 2]);
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_15 [i_0] = ((!(((arr_0 [i_1] [i_3]) != (arr_3 [i_3] [i_5])))));
                            var_21 = (var_15 && (arr_9 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 3] [i_3] [i_3 - 3]));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_22 = (arr_7 [i_1 + 1] [i_3] [i_6] [i_6]);
                            arr_18 [i_6] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0] = (arr_7 [i_0] [i_2] [i_3] [i_6]);
                        }
                        var_23 = (arr_0 [i_1 + 1] [i_1 + 1]);

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_22 [i_7 + 1] [i_3] [i_3] [i_7] [i_2 + 1] [i_1] [i_0] = arr_1 [i_0];
                            var_24 *= (((arr_16 [i_1] [i_1] [i_1] [i_1 - 1]) ? (arr_16 [i_0] [i_0] [i_1 + 2] [i_1 - 1]) : (arr_16 [i_0] [i_0] [i_0] [i_1 + 1])));
                            var_25 = (1127 / var_1);
                            arr_23 [i_0] [i_1] [i_7] [i_3] [i_7] = var_10;
                        }
                    }
                }
            }
        }
    }
    var_26 = var_8;
    #pragma endscop
}
