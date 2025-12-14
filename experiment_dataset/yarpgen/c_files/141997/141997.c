/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (min(var_12, var_3));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 - 2] [i_0] = (((arr_2 [i_0]) - 2944776554));
        var_13 = ((16 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = ((65526 / 2944776557) ? ((var_9 ? var_1 : (arr_5 [i_1 + 1]))) : (arr_4 [i_1 + 1] [i_1 + 1]));
        var_14 = (~505285523);
        arr_7 [i_1] [i_1] = ((!(((15690 ? (arr_4 [i_1] [i_1]) : 0)))));
        var_15 = (max(var_15, (arr_5 [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = (min(var_16, (((var_7 ? 62203 : (min((!var_8), var_8)))))));
        var_17 = (~((var_8 ? ((var_6 ? var_1 : var_7)) : (((arr_0 [i_2]) | (arr_8 [i_2]))))));
        var_18 -= var_0;
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_19 = (max(var_19, var_7));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_20 ^= ((min((arr_12 [i_3] [i_4] [1]), (arr_16 [i_3] [8]))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_4] [i_5] [i_6] [i_7] [14] [i_4] &= (!(arr_17 [4] [i_6] [14] [4]));
                                var_21 &= (arr_15 [2] [4] [4] [2]);
                                var_22 = var_9;
                            }
                        }
                    }
                    var_23 = (((min(((-(arr_21 [i_3]))), (((arr_5 [i_5]) * (arr_19 [i_5]))))) * (((((((1 ? (arr_15 [i_3] [i_3] [i_5] [i_5]) : (arr_13 [i_3] [i_3] [i_3])))) > (((arr_16 [i_3] [i_3]) ? (arr_17 [i_3] [i_4] [i_5] [i_5]) : 3563602727))))))));
                }
            }
        }
    }
    #pragma endscop
}
