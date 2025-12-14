/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((max((max(247, 3321580482)), ((var_7 ? var_4 : var_11))))), (((!var_5) ? var_1 : var_2))));
    var_15 = (((((((var_9 ? var_9 : var_12))) + 2147483647)) << ((((11415 ? 666119420 : 66846720)) - 666119420))));
    var_16 = (min(var_16, var_11));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (((max(11429, 40148))));
        arr_4 [i_0] = (~-40148);
    }
    var_18 = (((0 - (var_1 - var_5))));
    #pragma endscop
}
