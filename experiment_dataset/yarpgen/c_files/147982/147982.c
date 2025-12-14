/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(105, 150)))));
    var_16 = (max(var_0, var_14));
    var_17 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 |= 150;
        arr_3 [i_0] [i_0] = ((0 ? var_3 : (arr_2 [i_0])));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_19 &= (min((arr_1 [i_1]), (((((150 > (arr_6 [18]))))))));
        var_20 ^= ((var_2 || ((((arr_2 [i_1]) ^ ((~(arr_7 [i_1]))))))));
        var_21 -= (((((max((arr_6 [1]), (arr_2 [i_1 - 1]))))) * (150 / 709390123)));
    }
    #pragma endscop
}
