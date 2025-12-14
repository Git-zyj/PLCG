/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_9 ? var_7 : var_10));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 -= (((arr_0 [i_0] [i_0 - 1]) ? (arr_1 [i_0 + 1]) : ((((arr_1 [i_0]) > (arr_2 [i_0 - 2] [i_0]))))));
        arr_4 [i_0 + 1] = (arr_3 [i_0 - 1]);
        arr_5 [i_0] = ((21975 ? 35748 : 92));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_9 [i_1 + 4] = ((((((arr_8 [i_1]) != (arr_7 [i_1 - 2] [6]))) ? ((((arr_6 [i_1] [i_1]) / (arr_6 [i_1 + 3] [i_1 + 1])))) : (((arr_6 [i_1] [i_1]) + (arr_8 [i_1]))))));
        var_15 = (((arr_8 [i_1]) ? ((~(((arr_6 [i_1 - 2] [i_1 - 2]) << (((arr_7 [i_1] [i_1]) - 1088233088)))))) : (((arr_6 [i_1] [i_1 + 4]) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1 + 4])))));
        arr_10 [i_1] = ((((((arr_7 [i_1 + 3] [i_1 + 3]) ? (arr_7 [i_1 - 2] [1]) : (arr_7 [i_1 + 4] [i_1 + 3])))) ? (arr_7 [i_1 - 2] [i_1]) : (arr_7 [i_1 + 2] [i_1 + 2])));
        var_16 = (min(var_16, ((((((((((arr_8 [i_1 + 3]) ? (arr_8 [1]) : (arr_7 [i_1] [i_1])))) ? ((((arr_6 [i_1 + 4] [i_1 + 4]) ? (arr_6 [1] [i_1 - 2]) : (arr_6 [i_1] [i_1])))) : (arr_8 [i_1 + 2])))) ? (((((arr_6 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_8 [1]))) & ((((arr_7 [i_1] [i_1]) | (arr_6 [2] [i_1 - 1])))))) : (arr_7 [i_1] [i_1 - 1]))))));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_17 *= ((((((arr_11 [i_2 - 3]) ? (arr_12 [i_2 - 3]) : (arr_11 [i_2 - 3])))) ? (((arr_13 [i_2 + 1] [8]) ? (arr_13 [i_2 - 3] [20]) : (arr_13 [i_2 - 3] [i_2]))) : (((arr_12 [i_2 - 3]) & (arr_11 [i_2 - 2])))));
        var_18 = ((((-8132622316558649100 != (-2444568500548017163 ^ 8787503087616))) ? 15 : 2444568500548017166));
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        arr_17 [i_3 - 2] = ((~(arr_16 [i_3 - 3])));
        arr_18 [i_3] [i_3 - 1] = ((((arr_11 [i_3 - 3]) ? ((~(arr_15 [i_3] [i_3]))) : ((((arr_16 [i_3]) && (arr_13 [i_3 - 3] [i_3])))))) + (((48 / 9223372036854775805) ? (((arr_13 [i_3 - 3] [1]) ? (arr_12 [i_3]) : (arr_16 [i_3]))) : (((arr_11 [i_3]) ? (arr_11 [i_3 + 1]) : (arr_16 [i_3]))))));
    }
    #pragma endscop
}
