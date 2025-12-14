/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [4] = (((((((var_4 ? var_0 : var_15))) ? (((min((arr_0 [i_0]), (arr_2 [3] [i_0]))))) : ((var_6 ? 1156876691 : var_4))))) ? ((-125 ? var_7 : ((var_5 ? var_16 : (arr_2 [i_0] [i_0]))))) : (((((var_10 != (arr_2 [i_0] [i_0]))) ? ((1 ? var_3 : var_6)) : (min(var_3, (arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] &= (((((arr_0 [i_0]) ? 535 : 1))) - ((2047 ? var_0 : 128)));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_18 = (max(-118, 0));
        var_19 = min(4294967289, 13);
    }
    #pragma endscop
}
