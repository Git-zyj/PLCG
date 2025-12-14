/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_9, (((var_6 | var_9) ? (max(var_11, var_5)) : var_16))));
    var_20 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_21 &= ((~(arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_22 = (min((arr_5 [i_1 - 1]), (arr_6 [i_1] [i_2])));
                arr_10 [i_1] [i_1 + 1] = (max((((arr_8 [i_1 - 1]) ? (arr_8 [i_1 + 1]) : (arr_8 [i_1 - 1]))), (min((((arr_5 [i_1]) ? (arr_5 [i_1 - 1]) : (arr_7 [i_1] [i_1] [i_1]))), (((!(arr_5 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
