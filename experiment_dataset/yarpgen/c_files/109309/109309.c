/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 += var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 *= (var_9 > (arr_1 [i_0]));
        var_14 ^= (min(25213, -25213));
        var_15 = ((((arr_1 [i_0]) == var_1)) ? ((var_7 ? -25201 : (arr_1 [i_0]))) : ((~(arr_1 [i_0]))));
    }
    var_16 = var_8;
    #pragma endscop
}
