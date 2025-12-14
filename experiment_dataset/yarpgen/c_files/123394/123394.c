/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = 81;
        arr_2 [i_0] = 81;
    }
    var_14 = var_9;
    var_15 = var_0;
    var_16 = var_3;
    #pragma endscop
}
