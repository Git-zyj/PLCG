/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (max(((((!0) || (var_0 && var_1)))), var_10));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 *= ((+(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [1]) : (arr_1 [i_0] [i_0])))));
        var_14 = (max(var_14, 1));
        var_15 |= (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_16 = max(((((min(1, (arr_2 [i_1 - 1] [i_1])))))), ((var_5 ? 3531748943 : (((((arr_3 [i_1 + 1]) == (arr_3 [i_1 - 1]))))))));
        var_17 = (arr_2 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 -= var_5;
        var_19 += ((~(arr_0 [i_2] [i_2])));
        var_20 *= (arr_0 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_21 |= (min(((1 ? 1 : 1)), (arr_4 [i_3])));
        var_22 = (((((((((arr_10 [i_3]) ? (arr_2 [i_3] [i_3]) : 32256))) ? (~8) : (arr_1 [i_3] [i_3])))) ? ((1 ? (((((arr_2 [i_3] [i_3]) != (arr_9 [i_3]))))) : (arr_10 [i_3]))) : 1));
        var_23 = (max(1, 1));
        var_24 = (max((!-14851), (min((((arr_2 [i_3] [1]) + (arr_1 [9] [9]))), ((max(var_4, 1)))))));
    }
    #pragma endscop
}
