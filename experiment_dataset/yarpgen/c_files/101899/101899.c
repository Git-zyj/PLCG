/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((-(arr_2 [i_0])));
        var_20 |= (arr_0 [i_0]);
        var_21 = (((-438480287 + -438480287) ? var_16 : (arr_2 [i_0])));
    }
    #pragma endscop
}
