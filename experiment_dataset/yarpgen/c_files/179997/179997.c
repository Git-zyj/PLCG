/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-6737 ? var_6 : (1 / 12714424352975020139))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_18 = 88052427;
        var_19 ^= 0;
    }
    #pragma endscop
}
