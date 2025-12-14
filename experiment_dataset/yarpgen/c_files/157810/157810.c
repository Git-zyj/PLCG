/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (min(64, 1));
    var_11 = var_4;
    var_12 = (var_2 | var_0);
    var_13 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = 64;
        var_15 = (((arr_0 [i_0]) + 1));
    }
    #pragma endscop
}
