/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_14 = (((1 ? 4414737937391198828 : var_2)));
        var_15 |= ((var_0 ? (((var_12 ? 79 : (arr_2 [i_0] [i_0])))) : (467363029 - 1754995902836279335)));
        arr_4 [i_0] [17] = (((var_7 + 98) / 18446744073709551615));
    }
    var_16 = (min((((var_7 ? -35 : var_11))), 0));
    var_17 = (max((min(((var_0 ? 1151795604700004352 : var_12)), (var_4 == var_5))), var_8));
    #pragma endscop
}
