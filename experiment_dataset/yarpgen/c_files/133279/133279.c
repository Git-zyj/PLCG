/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -6616538339580560213;
    var_16 = var_10;
    var_17 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [5]);
        var_18 = (arr_1 [i_0]);
    }
    #pragma endscop
}
