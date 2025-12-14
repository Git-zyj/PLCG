/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 8;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = ((+(((max((arr_0 [i_0]), -24))))));
        var_13 = ((max(var_5, (~0))));
        arr_2 [i_0] = -8;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 35;
        var_14 ^= 32765;
        var_15 = (((arr_6 [i_1] [i_1]) ? (max((~var_6), (min(var_8, 11)))) : ((((!(arr_0 [i_1])))))));
    }
    var_16 = var_5;
    #pragma endscop
}
