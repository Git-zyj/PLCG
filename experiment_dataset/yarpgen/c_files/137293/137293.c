/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = arr_3 [i_1] [i_1] [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_2] = (arr_7 [i_0] [0] [i_0 - 1] [i_3]);
                            arr_12 [i_3] = var_3;
                            arr_13 [2] [i_1] [i_2] [2] = var_12;
                            var_15 = (arr_4 [i_3] [i_0] [i_2]);
                            var_16 = var_0;
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, (((((var_1 ? var_7 : (var_12 != var_7))) != var_14)))));
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 = var_13;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] = (1770146803 != 38731);
                                arr_29 [i_8] [i_8] [i_8] [i_8] [i_4] [i_4] [i_8] = var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_20 = (arr_31 [i_4] [i_5] [i_6] [i_6] [i_4] [i_10]);
                                var_21 = (min(var_21, (var_12 != var_4)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
