/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_13 = ((+(((arr_0 [i_0 - 3]) ? ((1749531968 ? (arr_0 [5]) : -1749531969)) : var_5))));
        var_14 = (arr_0 [i_0 + 1]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_15 -= (((!(arr_1 [i_1 - 1] [i_1 - 1]))));
        var_16 |= ((((((((arr_0 [i_1]) && var_3)) ? (((arr_3 [4]) ? 1749531968 : (arr_1 [i_1] [i_1]))) : ((min(var_0, var_4)))))) ? (((((arr_0 [i_1 + 1]) <= (arr_0 [i_1 + 1]))))) : ((~(max((arr_0 [i_1]), var_10))))));
        var_17 = ((+((max((arr_2 [i_1 + 1] [i_1]), var_1)))));
        var_18 = var_11;
    }
    var_19 -= (min((~var_2), (((!(var_0 / -1749531969))))));
    var_20 -= (((((var_10 ? (min(824192272, 428280166020051243)) : (3470775023 * var_9)))) ? ((127 ? var_10 : ((min(var_10, var_9))))) : 203));
    var_21 = -var_9;
    #pragma endscop
}
