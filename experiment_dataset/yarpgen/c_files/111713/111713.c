/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 - var_4) <= (((var_7 == 14) ? ((4158639560 ? var_2 : var_11)) : var_5)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = (min(var_14, ((((var_3 ? 10 : var_1))))));
        var_15 &= (min(var_7, (((((var_5 + (arr_0 [i_0])))) ? (var_7 | 6903516805528924771) : (max((arr_0 [1]), 224))))));
        arr_2 [i_0] |= ((!((((arr_1 [i_0 + 2]) | -25599)))));
    }
    var_16 = var_8;
    #pragma endscop
}
