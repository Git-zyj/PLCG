/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((-1678037324 && ((((arr_3 [i_0]) ? ((0 - (arr_3 [i_0]))) : (arr_3 [18]))))));
        var_21 = arr_1 [i_0];
        var_22 &= arr_2 [i_0] [i_0];
        var_23 = arr_1 [i_0];
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_24 = (~67);
        var_25 = var_17;
    }
    var_26 ^= (-100 ? 512340344 : 99);
    var_27 = 99;
    var_28 = var_9;
    #pragma endscop
}
