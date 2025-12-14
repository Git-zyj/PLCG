/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = ((5659 ? (var_3 != -55) : (arr_0 [i_0])));
        var_13 = 40259;
        arr_3 [i_0] [i_0] = ((-55 ? var_8 : (arr_1 [i_0])));
    }
    #pragma endscop
}
