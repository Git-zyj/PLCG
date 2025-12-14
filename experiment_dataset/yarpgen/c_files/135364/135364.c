/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ^ (((arr_0 [i_0] [i_0]) << (((arr_1 [i_0]) + 29))))));
        arr_3 [i_0] = min(((((~(arr_0 [i_0] [i_0]))) >> ((((min((arr_1 [i_0]), (arr_1 [i_0])))) + 19)))), (max(((1745292532 ? (arr_0 [i_0] [i_0]) : var_7)), 2549674746)));
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) && ((min(2164663517184, 2549674739)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_5 [i_1] [i_1]) ^ ((-(arr_5 [i_1] [i_1])))));
        var_16 = (min(var_16, (max(((((((arr_6 [i_1]) * (arr_5 [i_1] [i_1])))) ? (((arr_7 [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1]))) : (((((arr_6 [i_1]) == (arr_5 [i_1] [i_1]))))))), ((((!1) == 0)))))));
    }
    var_17 = var_6;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = ((arr_1 [i_2]) ? (arr_7 [i_2]) : (arr_11 [i_2]));
        var_19 -= (arr_11 [10]);
        arr_12 [i_2] = (((arr_1 [i_2]) * (((arr_9 [i_2]) & (arr_10 [i_2])))));
        arr_13 [i_2] = arr_0 [i_2] [i_2];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = -7980864576127712135;
        var_20 = ((((2016 > (arr_6 [i_3]))) ? (arr_10 [i_3]) : ((((arr_11 [i_3]) ? (arr_5 [i_3] [i_3]) : var_10)))));
    }
    #pragma endscop
}
