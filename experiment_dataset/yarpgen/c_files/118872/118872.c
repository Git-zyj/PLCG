/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_12 >> ((((var_8 ? var_2 : var_15)) + 220490444)))) - ((((-1490738209 ? 1100398468 : 1100398462)) << (((-1100398494 + 1100398522) - 28))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = -1100398494;
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 ^= ((~(min((arr_0 [i_0] [i_0]), (min((arr_0 [i_0] [i_0]), var_10))))));
    }
    #pragma endscop
}
