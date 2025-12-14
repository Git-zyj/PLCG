/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (((((((min(-145633703, 11))) ? 207 : var_13))) ? var_9 : 58224));
                arr_7 [i_1] = 0;
                arr_8 [i_0] [i_1] [i_1] = (!13);
                var_15 = ((((!(((var_10 ? (arr_2 [i_1] [i_0]) : (arr_5 [i_1])))))) ? ((((arr_3 [i_1] [i_0]) == (!1994444130399003495)))) : (arr_4 [i_0] [i_1 + 2])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (1 > 110);
        arr_12 [i_2] [i_2] = (((arr_2 [i_2] [i_2 - 2]) ? ((var_3 ? (arr_4 [i_2] [i_2]) : var_9)) : (arr_5 [i_2])));
        var_16 = (max(var_16, -7146820853392095634));
        var_17 = 806347709;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_18 = (min(var_18, (123 | 10041596021398205529)));
        var_19 = (((~1890243021820177564) ^ 139));
        var_20 = ((var_4 ? ((10 ? 1 : (arr_14 [i_3]))) : (arr_13 [i_3])));
    }
    var_21 |= 3291639757;
    #pragma endscop
}
