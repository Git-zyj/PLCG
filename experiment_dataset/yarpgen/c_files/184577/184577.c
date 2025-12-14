/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_1;
    var_18 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = -8192;
        arr_3 [i_0] = (((-4039755352690565666 | -4039755352690565666) >= (-4039755352690565666 | -51)));
    }
    #pragma endscop
}
