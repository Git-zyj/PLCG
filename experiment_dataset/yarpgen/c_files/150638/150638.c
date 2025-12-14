/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(3729467570076876484 | -954921511)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (max((((-(((arr_0 [i_0] [i_0]) ? -2632 : var_11))))), ((((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : -939852326658649876))) ? ((var_15 ? var_1 : (arr_0 [i_0] [i_0]))) : (1 ^ 14346)))));
        var_20 = (((((2207487428288078994 ? (((arr_2 [i_0]) ? var_15 : (arr_1 [i_0] [i_0]))) : (min((arr_2 [i_0]), (arr_1 [i_0] [i_0])))))) ? (arr_3 [i_0] [i_0]) : ((5076836272911889099 ? 12288 : 51))));
    }
    var_21 *= var_7;
    #pragma endscop
}
