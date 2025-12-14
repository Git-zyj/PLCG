/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_2));
    var_17 = max(var_10, (!var_0));
    var_18 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] |= (arr_1 [i_0]);
        var_19 ^= ((~(arr_0 [i_0])));
    }
    var_20 = min((max(1513691124, ((var_12 ? var_15 : var_2)))), ((((((var_3 ? var_0 : var_15))) ? (235 ^ 28) : var_5))));
    #pragma endscop
}
