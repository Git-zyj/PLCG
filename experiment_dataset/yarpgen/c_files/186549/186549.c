/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (var_1 | var_5)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 -= (max((((arr_0 [i_0]) >= ((var_13 ? var_0 : var_8)))), (((250579552 && var_15) < (var_1 + -1026)))));
        var_19 += (min(((((var_1 * (arr_2 [1] [i_0]))) | (arr_3 [i_0] [i_0]))), (arr_0 [i_0])));
        var_20 = (!0);
    }
    var_21 = (max((max(7685, (min(var_7, var_12)))), (1 * 1476813181)));
    #pragma endscop
}
