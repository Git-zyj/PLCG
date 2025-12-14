/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_3 * var_7) ? (var_4 == var_1) : ((~(~var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = arr_1 [i_0] [i_0];
        var_13 ^= (((arr_0 [i_0] [i_0]) % (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 &= ((~((~((min(var_6, 129)))))));
        var_15 = max((((arr_2 [i_1]) ? (var_9 * var_0) : var_4)), (((((arr_3 [i_1]) ? var_0 : var_1)))));
        arr_5 [i_1] = ((127 || (((var_5 + (min(124, (arr_2 [i_1]))))))));
        var_16 = (max(var_16, (arr_2 [12])));
    }
    #pragma endscop
}
