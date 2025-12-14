/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((max(var_5, 3355290002953170206)) < 4091609764))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (var_7 >> var_7);
        var_15 -= (((arr_1 [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0])));
        var_16 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_17 = (((arr_3 [i_0]) != var_6));
    }
    var_18 += (min(var_8, ((var_2 ? var_1 : var_7))));
    var_19 -= var_4;
    #pragma endscop
}
