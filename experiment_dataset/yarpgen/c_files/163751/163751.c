/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!var_0) ? -var_7 : (max(var_3, var_1)))) << (var_3 - 137)));
    var_11 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? var_2 : var_0)) : 1));
        var_12 = (arr_1 [i_0] [18]);
        var_13 += (((arr_2 [3]) ? (arr_1 [i_0] [0]) : -5879214490044506063));
        var_14 = -132122100;
    }
    #pragma endscop
}
