/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3] = ((((max(var_15, var_6))) ? -6 : (max(var_18, (min((arr_2 [i_0] [i_0]), 3193703779338216181))))));

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                arr_11 [i_4] [i_4 + 1] [i_0] [i_2] [i_0] [i_0] [i_0] = ((((min((arr_7 [i_4 + 1] [i_0] [i_0] [i_4 + 2] [i_4 + 1]), (arr_7 [i_4 + 1] [i_0] [i_4] [i_4 + 1] [i_4 + 1])))) ? (max((arr_7 [i_4 + 1] [i_0] [i_4 - 1] [i_4 + 2] [i_4 + 1]), var_16)) : (((~(arr_7 [i_4 + 1] [i_0] [i_4] [i_4 - 1] [i_4 + 1]))))));
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = ((var_19 ? (arr_10 [i_0] [i_4] [i_4] [i_4 + 2] [i_4] [i_4 - 1] [i_4]) : ((((-5274 ? var_2 : var_1))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 10;i_5 += 1)
                            {
                                arr_16 [i_0] [i_0] = var_17;
                                arr_17 [i_0] [i_0] = var_9;
                            }
                            for (int i_6 = 3; i_6 < 11;i_6 += 1)
                            {
                                arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] [i_6] = ((((max(51304, -1093101040))) * ((var_16 / (arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_6 - 2])))));
                                var_20 -= (((((~var_14) ? (arr_13 [i_2]) : var_2)) + (((((5262 ? var_9 : var_10))) ? ((var_12 ? (arr_0 [i_2]) : 21266)) : ((43364 ? var_8 : (arr_0 [i_2])))))));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] = ((!((((arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_1] [i_1]) : var_6)))));
            }
        }
    }
    var_21 = 21266;
    #pragma endscop
}
