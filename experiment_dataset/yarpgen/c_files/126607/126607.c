/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 -= (max((~var_13), ((max(-23183, -var_1)))));
        arr_3 [i_0] = 0;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_15 &= var_11;
        arr_6 [i_1] [3] = (~var_7);
    }
    var_16 = var_9;
    #pragma endscop
}
