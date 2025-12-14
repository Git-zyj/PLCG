/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_16 ^= (((!var_8) & 255));
        var_17 = (((arr_0 [i_0]) && 243));
    }
    var_18 = (((max((~var_12), (min(var_10, var_15)))) != (((12 ? 18 : 252)))));
    var_19 = var_1;
    #pragma endscop
}
