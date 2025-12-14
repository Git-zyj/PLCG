/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_10, var_11))) + ((min(var_12, var_8)))));
    var_19 = (((-((min(var_5, var_5))))));
    var_20 = ((var_16 ? (((-(var_12 != var_9)))) : ((-(max(var_16, var_3))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 ^= (((arr_0 [i_0]) & (arr_0 [i_0])));
        var_22 ^= (((arr_2 [i_0]) << (((((arr_1 [i_0] [i_0]) + 26693)) - 27))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_23 = (min(var_23, (((+(((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_5 [i_1]))))))));
        arr_7 [i_1] [i_1] = (min(var_10, (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_24 = (min(var_24, var_5));
        var_25 += ((~(arr_8 [16] [16])));
    }
    for (int i_3 = 2; i_3 < 6;i_3 += 1)
    {
        arr_14 [i_3] |= ((-(arr_13 [i_3])));
        arr_15 [i_3] = ((((arr_11 [i_3] [i_3]) && (arr_11 [i_3] [0]))) ? (arr_10 [i_3] [i_3]) : (var_12 >= var_14));
        arr_16 [i_3] &= ((((((arr_12 [i_3 + 2]) | (arr_12 [i_3 - 2])))) ? (((max(var_17, (arr_4 [19]))))) : (((((!(arr_2 [20]))) && (!var_1))))));
    }
    #pragma endscop
}
