/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 ^= ((-(arr_0 [i_0])));
        var_16 = (arr_3 [i_0] [13]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (arr_4 [i_1]);
        var_18 += (min(var_1, (arr_4 [i_1])));
    }
    var_19 ^= ((var_0 ? 11387043671020091053 : ((min((~var_12), var_4)))));
    var_20 = 17438497619113879759;
    #pragma endscop
}
