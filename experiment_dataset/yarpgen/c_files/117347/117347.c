/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = arr_0 [i_0];
                            var_19 = ((~(((((arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]) ? (arr_5 [i_2] [i_2] [i_2]) : 1))))));
                            var_20 = (min(var_20, (((var_3 ? ((-(arr_4 [i_3] [i_0 + 1] [i_0 + 1]))) : (((arr_4 [i_2] [i_0 + 1] [i_0]) + (arr_4 [i_3] [i_0 - 1] [i_0]))))))));
                            var_21 = (arr_4 [i_0] [16] [i_0 - 1]);
                        }
                    }
                }
                var_22 |= ((-((min(255, var_9)))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_23 = (((~((210 ? var_13 : var_3)))));

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_24 ^= ((max((arr_7 [i_0 + 1] [5] [i_4 - 1]), -4096)));
                                var_25 *= (((((-(1 && 1)))) ? (max((arr_0 [10]), (arr_12 [i_0 - 1] [i_1] [i_0 + 1] [i_5]))) : ((max(((max((arr_14 [i_0] [5] [i_4] [5] [i_4]), 13))), (max(1, (arr_12 [i_0 + 1] [i_4] [i_5] [i_0 + 1]))))))));
                                var_26 -= (max((((arr_15 [i_5] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 1] [i_4]) : var_7)), var_15));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_27 ^= ((((((!(((141 ? (arr_3 [i_0] [1]) : (arr_7 [4] [i_1] [i_7 - 1])))))))) ^ (max(1, (max(var_10, (arr_9 [i_0] [i_1])))))));
                            var_28 = (min(1, ((17 ? 20608 : -28659))));
                        }
                    }
                }
            }
        }
    }
    var_29 = var_5;
    #pragma endscop
}
