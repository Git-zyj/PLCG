/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = var_1;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] [6] = ((!(arr_11 [11] [i_1] [11] [1] [i_1])));
                                var_15 = ((-4225 ? -56888 : (arr_7 [i_0])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_16 = (((4224 / 32) ? (((((~var_11) > (arr_1 [i_1 + 1] [i_1 - 1]))))) : (min(((((arr_2 [5] [5]) ? var_8 : var_10))), (max((arr_3 [0] [7]), 221))))));
                        arr_16 [11] [i_5] [i_0] [i_1] [i_1] [i_0] = (max(((max(63, 2140375245))), 3363));
                        var_17 = ((~(((arr_2 [6] [i_1 - 2]) ? (arr_2 [i_0] [i_1 + 1]) : -4239))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_18 = ((((arr_5 [i_0] [i_1] [i_0]) - (2147996526 > 0))));
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_6] [i_2] [i_6] = (((((4224 ? 79 : 2051386705))) | 3508958131623964410));
                            var_19 -= (min(16, ((((max(1394951822, var_13))) ? var_6 : ((max(var_6, var_6)))))));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_20 -= (((((var_5 || (arr_5 [i_0] [i_0] [1])))) == ((max(((((arr_15 [5] [i_1] [6] [i_1]) == -8192))), 7462)))));
                            var_21 = (min(var_21, var_9));
                            var_22 ^= (arr_4 [i_0] [i_0] [i_0]);
                            var_23 = (min(var_23, ((max(((var_11 ^ (~2370330470))), (arr_0 [i_1 - 1] [i_1 - 1]))))));
                        }
                        arr_24 [9] [i_2] [i_2] [i_2] = ((max(15, (arr_23 [i_1 - 2] [i_1 - 1] [8] [10] [i_1 - 1] [i_1 - 1]))));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_24 = (arr_8 [i_1] [10] [10] [i_1]);
                        arr_28 [0] [i_1] [i_1] [0] = (max((min((arr_7 [i_0]), (arr_27 [2] [i_1] [10] [5]))), 1236233780190904808));
                        var_25 -= (((~((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) || var_10))))));
                    }
                    var_26 = ((arr_6 [i_0] [7] [10]) < var_12);
                    var_27 -= ((((max(4224, 95))) ? (((arr_9 [i_2] [i_1 - 1] [i_2]) ^ (arr_9 [6] [i_1 + 1] [3]))) : (1 / var_5)));
                }
            }
        }
    }
    var_28 = ((((~((88 ? var_9 : var_12))))) ? ((((max(0, var_5))) ? var_2 : (var_9 & var_6))) : var_8);
    #pragma endscop
}
