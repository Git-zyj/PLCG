/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) / (arr_1 [i_0])));
        arr_2 [0] |= (3212527084 & 2204878400013320512);
        var_13 ^= (~var_9);
    }
    var_14 = var_8;
    var_15 = var_6;
    var_16 = var_3;
    var_17 = (!var_1);
    #pragma endscop
}
