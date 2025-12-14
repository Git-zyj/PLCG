/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = ((4294967293 ? 2382024884056659490 : (((var_5 >> (-977986066 + 977986090))))));
        var_13 = ((-38 ? -83 : 9569));
        arr_3 [i_0] = ((-9557 ? (12 ^ -9558) : ((var_4 ? var_8 : 3))));
        arr_4 [12] [i_0] = ((((-9553 ? var_5 : 12)) + 45289));
    }
    var_14 = ((((max(var_4, (((4 ? var_5 : 20254)))))) ? 45293 : (((max(-2076931268, 15)) / 48))));
    var_15 = var_10;
    var_16 *= ((((var_8 + 20274) / (((-47 ? 23 : var_11))))));
    #pragma endscop
}
