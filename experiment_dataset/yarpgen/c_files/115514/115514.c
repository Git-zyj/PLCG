/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = var_2;
        arr_2 [i_0] = 0;
    }
    #pragma endscop
}
