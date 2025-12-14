/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (min(var_11, (((0 ? ((127 ? -4 : -80)) : 21)))));
        var_12 = (min(var_12, ((~((((min(1, 1163883141))) ? (((min(var_9, 0)))) : 1))))));
        var_13 = min((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_7)), (arr_1 [i_0]));
        arr_2 [i_0] = (-(min((arr_1 [i_0]), 1)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = ((-(max(3852380261, (arr_4 [i_1])))));
        var_14 = (var_8 - (max((max((arr_4 [i_1]), 442587028)), var_10)));
    }
    var_15 *= ((var_7 ? ((var_5 + ((1749356361 ? var_7 : 20)))) : (((var_10 ? (3852380261 & 2589640765) : (((var_9 ? var_6 : var_1))))))));
    var_16 ^= (min(((-(((-122 + 2147483647) << (var_4 - 1477393823))))), 1));
    #pragma endscop
}
