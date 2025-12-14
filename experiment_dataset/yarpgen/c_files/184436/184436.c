/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!1906735421);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (arr_2 [i_0]);
        var_21 = (((-1397374671611731497 + 9223372036854775807) >> (5309 - 5277)));
        var_22 = ((~((var_15 ? 128 : var_2))));
    }
    var_23 = (min(var_23, (2941489677 - 5314)));
    #pragma endscop
}
