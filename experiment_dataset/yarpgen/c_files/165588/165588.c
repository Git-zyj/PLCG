/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (max(((1084388885420241632 ? (var_1 | 243) : 1125899906842623)), (0 / 8191)));
    var_13 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (max(var_14, (((-(5736387104835056054 / 7))))));
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    #pragma endscop
}
