/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 ^= (arr_1 [i_0]);
        var_14 = (max(var_14, (((arr_1 [i_0]) < var_2))));
        var_15 ^= (((arr_1 [i_0]) ? (arr_1 [i_0]) : (79 | var_8)));
    }
    var_16 = ((((min(1743465121, 77))) ? 1775826581 : ((((max(var_1, -1171724108)) <= var_1)))));
    #pragma endscop
}
