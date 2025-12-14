/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (((((var_4 != var_8) ? (max(31285, 1091037140)) : (!var_12))) << ((((((~(arr_4 [i_0 + 3] [i_1 + 1] [i_0 + 3]))) + 98)) - 4))));
                                var_21 = (min(var_21, 375104906));
                            }
                        }
                    }
                }
                var_22 = ((((min(3, -12)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_23 = (arr_4 [i_0] [i_5] [i_5]);
                            var_24 = (min(var_24, (((((-(arr_11 [i_1 - 2]))) > ((((var_0 - 8640) & (arr_9 [i_0 - 1] [i_5] [i_5] [14] [i_5] [i_5])))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_24 [i_7] [i_9] [11] [15] [5] [i_7] = var_19;
                            arr_25 [i_10] [i_7] [i_8] [i_7] [i_7] = ((((arr_23 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_23 [i_7] [i_7] [i_7] [1] [i_7] [i_7]) : (arr_23 [i_8] [14] [i_8] [9] [i_7] [i_9]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_25 = (max((((((~(arr_23 [13] [0] [1] [i_12] [i_7] [i_7]))) < (((arr_4 [i_7] [i_8] [i_7]) ? -25 : (arr_15 [i_12] [i_7])))))), -8977523655720210110));
                            var_26 ^= 16539;
                            var_27 = (max((max(7527, 112)), (((35 == (max((arr_30 [i_7] [7] [i_8] [i_7] [i_7]), var_10)))))));
                            arr_31 [i_7] [i_7] [i_7] [i_8] &= ((((((arr_15 [i_11] [i_11]) - (arr_18 [i_7])))) ? (((arr_3 [i_7] [i_8]) - (var_3 != 0))) : ((((((!(arr_5 [i_7] [i_8] [i_8] [i_12])))) <= var_6)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_28 = (max((arr_17 [i_7]), var_4));
                            arr_38 [i_7] [i_7] [i_7] [i_14] = 13404310048020129703;
                            var_29 = ((-(~217)));
                        }
                    }
                }
                var_30 = (arr_16 [i_7] [i_8]);
            }
        }
    }
    #pragma endscop
}
