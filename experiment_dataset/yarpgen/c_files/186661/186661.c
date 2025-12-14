/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 ^= ((-(max((arr_1 [i_0]), 34))));
        var_13 = ((!(arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1 + 1] = (min(((((arr_3 [i_1 - 1]) ? 1 : 35))), ((~(arr_3 [i_1 - 1])))));
        arr_5 [i_1] = ((~(min(var_5, (arr_3 [i_1 - 1])))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] = (-59 & -43);
        var_14 = (((((248 ? 6875444055229718605 : 18446744073709551608))) ? ((((((arr_2 [i_2] [1]) - (arr_3 [i_2])))) ? (arr_3 [i_2]) : (arr_6 [2] [i_2]))) : (((max((arr_2 [i_2] [7]), var_7))))));
        var_15 = (((((var_6 ? (arr_0 [i_2] [i_2]) : (arr_0 [i_2] [i_2])))) ? (((arr_0 [i_2] [12]) ? var_8 : 17034682880417629043)) : (((15 ? -45 : -64)))));
    }

    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((((max(var_0, (arr_3 [i_3])))) ? (((min((arr_10 [i_3]), (arr_10 [i_3]))))) : ((117 ? (arr_2 [i_3 + 1] [i_3]) : (~1412061193291922572)))));
        arr_12 [i_3] = (arr_3 [i_3 - 1]);
        var_16 = (min(6875444055229718605, -111));
        arr_13 [i_3] = var_11;
        arr_14 [i_3] [2] |= 53552;
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] [i_4 + 1] = ((((1776384992 ? 11571300018479833011 : var_9)) == (((((arr_10 [i_4]) ? var_6 : (arr_3 [i_4]))) + -42))));
        arr_20 [i_4] [i_4] = ((+(max((arr_3 [i_4 - 1]), ((min((arr_10 [i_4]), 1)))))));
        var_17 *= min((max((arr_16 [i_4 + 1] [0]), (arr_3 [i_4 - 1]))), ((((arr_17 [i_4 - 1]) ? (arr_17 [i_4 + 1]) : 2147483647))));
    }
    var_18 = (max(var_18, var_11));
    #pragma endscop
}
