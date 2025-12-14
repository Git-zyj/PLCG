/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) && 3));
        var_13 = (((arr_1 [i_0]) + 1));
        var_14 = -67188054;
        var_15 = 4611686018427387903;
    }
    var_16 = ((128 ? var_2 : -5954514068030385169));
    #pragma endscop
}
