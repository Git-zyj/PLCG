/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_2 ? var_4 : (((var_1 ? var_6 : var_2))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, (1 > var_3)));
        var_13 ^= (((arr_3 [i_0 + 2]) ? (arr_3 [i_0]) : (arr_3 [i_0 + 2])));
        var_14 ^= (((~var_1) ? (arr_3 [i_0]) : (((arr_0 [i_0]) ^ (arr_3 [i_0])))));
        var_15 = ((var_10 ? ((4294967295 ? var_8 : 1)) : (arr_2 [i_0 + 1])));
    }
    var_16 -= var_2;
    var_17 = (max(var_10, (min(128, (max(var_10, var_2))))));
    #pragma endscop
}
