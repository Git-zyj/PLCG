/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-50 ? (((1 ? 35 : (39 || 2093250520)))) : -2474761687792293150));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 -= var_11;
        arr_4 [i_0] = (((((38 ? 73811763887956695 : 120))) ? (!var_9) : (var_7 | var_2)));
    }
    var_16 = var_6;
    #pragma endscop
}
