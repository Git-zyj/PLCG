/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_7, var_7));
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (min((arr_1 [i_0]), 1));
        arr_3 [0] [0] = ((!((max(var_10, 668816145)))));
        var_15 *= (min(((((arr_2 [i_0]) ? 17546 : var_2))), (-9223372036854775807 - 1)));
        var_16 *= var_11;
    }
    #pragma endscop
}
