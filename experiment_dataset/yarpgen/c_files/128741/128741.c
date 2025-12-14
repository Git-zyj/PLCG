/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (((((3054216683 ? var_2 : -7539))) ? 4027 : (arr_1 [i_0] [i_0])));
        var_15 = (max(var_15, var_7));
    }
    #pragma endscop
}
