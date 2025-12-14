/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((((81 ? 24 : var_11)) + var_9));
        arr_3 [i_0] = (((44 / 19) >> (((arr_0 [i_0]) - 156))));
        var_17 = 20;
        arr_4 [i_0] = -236;
    }
    var_18 = 35;
    var_19 &= min(19, 15);
    #pragma endscop
}
