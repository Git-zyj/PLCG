/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(min(var_11, (((-9223372036854775807 - 1) ? var_9 : (-9223372036854775807 - 1)))))));
    var_14 = (max(var_14, var_7));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = -var_3;
        arr_5 [i_0] &= (max(-6857552084859152073, (((((var_4 ? var_7 : var_6))) + ((var_7 ? var_0 : (arr_1 [i_0])))))));
        var_15 ^= (((((294851343 ? 9223372036854775807 : 94))) ? var_7 : (max(470770300, (((11084100310031414094 < (arr_1 [i_0]))))))));
    }
    #pragma endscop
}
