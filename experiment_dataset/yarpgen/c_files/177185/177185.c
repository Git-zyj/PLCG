/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_13 = (arr_1 [i_0 - 1]);
        var_14 = (min(var_14, (arr_0 [i_0 - 1])));
        var_15 = (max(var_15, 4294967276));
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        var_16 -= (((!(arr_2 [i_1]))));
        var_17 = (max(var_17, ((min((arr_0 [i_1]), ((~(min(24, var_7)))))))));
    }
    var_18 = ((-(((var_3 / 1) ? var_5 : var_3))));
    var_19 = 4172901702;
    #pragma endscop
}
