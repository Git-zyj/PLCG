/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((12822 ? -21620 : 12821));
        var_15 = var_9;
        var_16 ^= ((arr_2 [i_0]) ? (var_4 / 3164557334438219103) : var_11);
    }
    #pragma endscop
}
