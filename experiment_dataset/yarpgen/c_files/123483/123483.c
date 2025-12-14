/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = 14280;
        arr_2 [i_0] [i_0] = (min((((20682 ? -48 : 232))), var_5));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = 1684726598;
        arr_6 [1] |= ((+(((((7783 ? (arr_5 [i_1] [i_1]) : var_15))) ? ((min((arr_5 [12] [12]), var_6))) : -1755181900))));
        var_22 = -12668865786699812746;
        var_23 = (min(var_23, (((-((67108862 ? 89 : (var_0 ^ var_5))))))));
    }
    var_24 = ((-var_14 << (var_1 - 115)));
    #pragma endscop
}
