/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((-44 == (((var_10 <= -25) ^ 15)))))));
    var_16 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(var_17, (((-21863 ? -44 : 1)))));
        var_18 = arr_2 [i_0];
    }
    var_19 = ((((-var_9 ? var_0 : (min(15, 43)))) | var_4));
    #pragma endscop
}
