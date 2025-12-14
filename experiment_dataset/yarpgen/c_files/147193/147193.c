/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_7;
    var_17 *= (max(((65535 ? (~var_10) : ((var_2 ? var_2 : 0)))), ((var_6 ? ((min(1, 110))) : ((0 ? 1 : 1))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? ((((max((arr_0 [i_0]), 1))) ? ((max(93, 1))) : ((var_7 ? 1 : (arr_0 [i_0]))))) : (arr_2 [i_0])));
        var_19 = (min(var_19, 9223372036854775807));
        var_20 += (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [1] [1] &= ((((84 ? 1 : -1665450738))) ? ((255 ? var_3 : (arr_1 [i_1]))) : ((var_10 ? (arr_3 [0]) : 206)));
        arr_6 [i_1] = (~(arr_1 [i_1]));
        var_21 |= ((127 ? 22 : 28223));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_22 -= (((!(arr_7 [i_2] [i_2]))));
        var_23 = ((((arr_8 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : 1)));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_24 |= (!var_5);
        arr_11 [i_3] = ((((((arr_2 [i_3 - 1]) + (arr_2 [i_3 + 1])))) ? (min(1077883367, ((0 ? 1 : (arr_1 [i_3]))))) : (((((var_0 * (arr_1 [i_3]))) < (arr_2 [i_3 + 1]))))));
        var_25 = (max(var_25, (arr_8 [i_3] [i_3])));
    }
    #pragma endscop
}
