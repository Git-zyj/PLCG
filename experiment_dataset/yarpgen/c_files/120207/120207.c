/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((-(max(var_6, (((var_9 ? var_2 : 3)))))));
    var_11 = 3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (!332328464);
        var_13 = ((var_4 ? var_8 : -102));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_14 = (min((max(-332328464, var_3)), 29775));
        var_15 |= (((!var_0) == (max(47623, ((3 ? var_8 : var_7))))));
    }
    var_16 -= -1;
    #pragma endscop
}
