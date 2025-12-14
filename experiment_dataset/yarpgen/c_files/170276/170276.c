/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 ^= var_2;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_22 = (min(var_22, ((((((1 % (arr_0 [i_0] [i_0])))) < (((arr_0 [i_0] [i_0]) ? var_19 : -18682)))))));
        var_23 = var_12;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_24 = (((arr_1 [i_1]) == (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_1 [i_1])))));
        var_25 = ((1 >> (-1186575519 + 1186575525)));
    }
    #pragma endscop
}
