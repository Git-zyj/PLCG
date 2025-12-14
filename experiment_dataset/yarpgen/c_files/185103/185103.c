/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_5);
    var_13 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_14, ((((arr_1 [i_0]) != (var_10 / var_1))))));
        var_15 = var_5;
        var_16 = (!var_4);
        var_17 = ((((((arr_1 [i_0]) + 0))) ? (arr_0 [i_0]) : 1));
    }
    var_18 = var_6;

    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_19 = (max((arr_2 [i_1 + 2]), ((min(var_2, var_11)))));
        var_20 = 4414184397905335947;
        var_21 = (var_6 | var_3);
    }
    #pragma endscop
}
