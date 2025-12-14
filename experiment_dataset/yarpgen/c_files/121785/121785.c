/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (((((max((arr_1 [i_0]), var_1)) * var_9)) + -4503988668144344964));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] = var_7;
                        arr_11 [i_0] [0] [i_0] [i_3] [i_2] [i_0] = (((((-(arr_5 [i_3] [1] [2] [i_0])))) ? (var_9 & 99) : var_4));
                        var_15 = arr_1 [i_0];
                    }
                    var_16 = var_2;

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_17 = (min(var_17, (117 > var_4)));
                        arr_16 [i_0] [3] [11] [3] = (var_9 + var_7);
                        arr_17 [i_0] [i_0] [i_0] [i_4 + 1] [i_1] [i_4 - 2] = ((arr_14 [i_2] [i_0]) << (((arr_15 [i_2]) & (arr_3 [i_4 + 2] [17] [10]))));
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_18 = (arr_1 [i_5]);
        arr_21 [i_5 - 2] [i_5] = ((((arr_19 [1] [i_5]) < ((var_2 ? (arr_2 [i_5] [i_5 + 1]) : var_0)))));
        var_19 = (min(((73 ? var_13 : var_9)), -1));
        var_20 = (((((((min(-9, (arr_19 [i_5] [i_5 - 2])))) ? (arr_9 [i_5] [i_5 - 1] [i_5]) : (max(var_13, var_9))))) ? (max((((var_10 + (arr_14 [5] [i_5])))), (var_7 + var_8))) : (((-(arr_3 [i_5 + 1] [i_5 + 1] [i_5 + 1]))))));
    }
    #pragma endscop
}
