/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 *= arr_1 [i_0] [i_0];
        arr_2 [i_0] [i_0] = (1 ^ 0);
        var_13 = ((5550 ? 1 : (arr_1 [i_0] [i_0])));
    }
    var_14 = var_4;
    #pragma endscop
}
