/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((-6511595721242436853 ? var_4 : (arr_1 [i_0 - 2] [i_0 - 2]))));
        var_13 = (((arr_0 [1]) ? (((arr_1 [3] [3]) ? (((6511595721242436840 ? 1 : -24312))) : (max((arr_1 [i_0 - 2] [i_0]), var_9)))) : (max(var_9, 6511595721242436841))));
    }
    var_14 = var_4;
    var_15 = var_8;
    var_16 = var_10;
    var_17 = ((((((7652930577411804960 ? 0 : 1))) ? 1 : -6511595721242436853)));
    #pragma endscop
}
