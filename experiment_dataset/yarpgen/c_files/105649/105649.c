/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_0;
    var_14 = (max((-9223372036854775807 - 1), 9223372036854775807));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-((-(min(9223372036854775807, (arr_0 [i_0]))))));
        var_15 += ((((arr_1 [i_0]) && (arr_2 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = (min(var_8, (min((arr_1 [i_1]), (((9223372036854775807 ? (-9223372036854775807 - 1) : 9223372036854775807)))))));
        arr_6 [i_1] = (((((-(arr_0 [i_1])))) ? (((((arr_0 [i_1]) && var_5)) ? (min((arr_4 [i_1] [i_1]), (arr_1 [i_1]))) : (arr_1 [i_1]))) : (((arr_1 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])))));
        var_17 = min(((((((-9223372036854775807 - 1) || var_6)) || (arr_1 [i_1])))), ((+(max((arr_0 [i_1]), (arr_1 [i_1]))))));
        arr_7 [i_1] = (arr_0 [i_1]);
        arr_8 [i_1] = ((((min((-9223372036854775807 - 1), 9223372036854775807))) | ((9223372036854775807 * (arr_1 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 -= (((arr_10 [i_2] [i_2]) / (-9223372036854775807 - 1)));
        arr_13 [i_2] = ((((((((arr_11 [i_2]) + 9223372036854775807)) >> (var_5 - 59)))) ? (((arr_9 [i_2]) ? 9223372036854775807 : -9223372036854775785)) : (-9223372036854775807 - 1)));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_16 [13] [12] = (arr_12 [i_3] [i_3]);
        var_19 = (arr_15 [11]);
    }
    var_20 = (min((-9223372036854775807 - 1), (-9223372036854775807 - 1)));
    #pragma endscop
}
