/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 -= (((arr_1 [4]) * (arr_1 [2])));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_19 = var_0;
    var_20 = var_5;
    var_21 = var_16;
    #pragma endscop
}
