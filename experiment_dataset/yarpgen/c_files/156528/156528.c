/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 += ((((var_11 < (arr_1 [i_0]))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
        var_15 *= (min((((~var_9) ? -var_7 : ((((arr_1 [i_0]) != var_0))))), (((((1 ? (arr_0 [i_0]) : (arr_1 [i_0]))) != ((max((arr_2 [i_0]), var_9))))))));
    }
    var_16 = ((1 ? (((var_13 ? var_5 : var_4))) : ((-var_8 ? (var_10 + var_5) : ((17042430230528 ? 17042430230528 : var_13))))));
    var_17 ^= (var_6 | var_6);
    #pragma endscop
}
