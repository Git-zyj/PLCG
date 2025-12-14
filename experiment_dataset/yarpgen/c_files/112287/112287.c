/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? (max(var_2, -var_10)) : var_3));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        arr_3 [i_0] = (17951 ? (arr_0 [i_0 + 1]) : -985500848);
    }
    var_12 = min((max(var_1, (max(17874, 10163622992495960899)))), var_9);
    #pragma endscop
}
