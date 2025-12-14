/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = -1503684445;
        var_20 ^= (arr_0 [i_0 + 1]);
        arr_4 [i_0] |= ((1473075238 ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 + 1])));
        var_21 = ((-(((arr_1 [1] [1]) | var_6))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = ((1016 ^ (arr_5 [i_1])));
        var_23 &= ((((12004 ? -32761 : 64520)) >= -var_10));
        var_24 += (var_0 || 18375059696323690774);
        var_25 = 4323455642275676160;
    }
    var_26 |= var_8;
    #pragma endscop
}
