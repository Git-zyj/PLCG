/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((!(var_4 != var_2)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (max(0, -1359782456));
        var_16 ^= 3096273834;
        arr_2 [i_0] = (1 ^ ((((max(1, var_9))) | (1 ^ 1))));
    }
    var_17 = (max((((!31337) ? var_9 : var_1)), (((-(3 > var_1))))));
    #pragma endscop
}
