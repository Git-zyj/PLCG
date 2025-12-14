/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (((var_8 * var_0) + ((var_5 | (arr_1 [1])))));
        var_18 = (max(var_18, (((0 + (var_8 * 1))))));
    }
    #pragma endscop
}
