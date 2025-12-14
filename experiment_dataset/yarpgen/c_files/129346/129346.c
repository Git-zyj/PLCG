/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 &= (arr_0 [i_0 + 1]);
        var_16 &= (var_1 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_17 = ((0 ? (arr_5 [i_2 + 3] [i_2 - 2]) : (arr_5 [i_2 - 2] [i_2 - 3])));
            var_18 = (arr_5 [7] [i_2]);
            var_19 = (arr_3 [i_1 - 1]);
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_20 = (min((((~(arr_4 [i_1])))), 8850727593096551928));
            var_21 = var_13;
        }
        var_22 = (max(var_11, var_13));
    }
    var_23 = -var_12;
    var_24 = (min(((1858368329 ? (var_6 - var_0) : var_6)), ((((~var_5) && var_11)))));
    var_25 = ((((782674066056235883 != -8850727593096551929) ? (min(-7536494088209283097, 782674066056235883)) : (min(var_11, var_10)))));
    #pragma endscop
}
