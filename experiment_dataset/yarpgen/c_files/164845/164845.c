/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min(var_15, (((((arr_1 [i_0]) ? var_1 : 38))))));
        var_16 = (min(var_16, (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0])))))));
    }
    var_17 *= 180;
    #pragma endscop
}
