/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((17 * (408185762 / -3284278838492628619)));
        var_17 = 23;
    }
    var_18 |= ((0 << (478575006 || 884678779)));
    #pragma endscop
}
