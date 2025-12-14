/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((~-18) >> (((((var_12 ? var_12 : var_6))) - 48014)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 = ((var_3 ? (((((((arr_0 [i_0]) ? var_0 : var_7)) >= (arr_0 [i_0]))))) : (arr_0 [i_0])));
        var_16 = (((((42344 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_2 [8] [1] &= ((((((46885 - var_5) ? 0 : (((((arr_0 [i_0]) >= var_5))))))) ? ((min(18595, var_6))) : ((((((arr_0 [i_0]) * var_9)) > 1473373702)))));
    }
    var_17 = (min(var_17, (((-((var_11 ? (((var_2 ? var_12 : var_2))) : var_4)))))));
    var_18 = ((7 ? ((2234106491 ? 7 : 10)) : (((!var_3) ? var_9 : var_11))));
    var_19 = (!(((49 ? (var_6 > -7) : (var_0 / var_0)))));
    #pragma endscop
}
