/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(1, ((1 ? var_7 : 1))))) ? (max(var_4, var_6)) : (((((min(-24087, var_2))) & 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = var_12;
        var_17 = var_6;
        var_18 = 5627541270093921965;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = ((var_8 ? 1 : var_10));
        arr_6 [i_1] = 20861;
        var_19 *= (arr_2 [i_1]);
    }
    var_20 = ((+(((15 >= 1) ? (min(648083322, -46)) : (((3712499036 ? var_0 : var_2)))))));
    #pragma endscop
}
