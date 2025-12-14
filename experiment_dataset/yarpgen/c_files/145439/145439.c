/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-var_7 << (var_9 + 22677)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = ((((~(arr_1 [16]))) == var_12));
        arr_2 [i_0] [i_0] = ((var_17 ? (((arr_1 [i_0]) ^ var_0)) : (-9223372036854775807 - 1)));
        var_22 = -var_6;
    }
    #pragma endscop
}
