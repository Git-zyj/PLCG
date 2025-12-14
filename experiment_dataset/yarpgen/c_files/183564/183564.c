/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_12 &= ((!(arr_0 [i_0 + 1])));
        var_13 = ((arr_1 [8] [i_0 - 1]) ? (~var_7) : ((-5367045711763173607 / (arr_0 [i_0]))));
    }
    var_14 ^= ((5367045711763173606 ? ((min(((28 ? var_8 : 6)), var_2))) : -5367045711763173607));
    var_15 = (((~var_1) | (((((4294967290 | var_0) < (12288 / 12)))))));
    #pragma endscop
}
