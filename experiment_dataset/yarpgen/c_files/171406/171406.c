/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_2, ((min(-1, (max(1474695419, 1)))))));
    var_15 |= (((min(((var_0 ? var_0 : 1)), var_7)) - var_4));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_16 = (min(var_16, (-var_10 * 2751764484478002438)));
        var_17 = ((var_8 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
    }
    var_18 = var_0;
    var_19 = 2751764484478002438;
    #pragma endscop
}
