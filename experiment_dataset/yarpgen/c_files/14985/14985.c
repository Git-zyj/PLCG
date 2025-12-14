/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 += (arr_1 [i_0]);
        var_15 += 9223231299366420480;
        var_16 += ((~(~21028)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 9223231299366420480;
        arr_6 [i_1] [i_1] = ((var_12 ? (arr_4 [i_1]) : ((9223231299366420480 ? -9223231299366420483 : (arr_3 [11] [i_1])))));
        arr_7 [i_1] = (-77 < 16792);
        arr_8 [i_1] |= (~-9223231299366420480);
        var_17 = (min(var_17, ((((arr_0 [i_1]) * (arr_0 [i_1]))))));
    }
    var_18 = var_6;

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 += -1;
        arr_12 [3] [9] = ((arr_4 [i_2]) ? (min(3755683374, 65516)) : ((min((~-26), (((var_10 == (arr_2 [i_2]))))))));
        arr_13 [5] [i_2] = min((arr_4 [5]), ((((~-1643606887) == var_4))));
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        arr_16 [i_3] = (max(((((max((arr_14 [i_3]), -6211214080300205006))) ? (max((arr_15 [i_3] [i_3]), 1)) : (arr_15 [i_3] [i_3 + 2]))), var_2));
        var_20 ^= ((((!1) >= (var_7 % 1))));
        arr_17 [i_3] = ((-85 ? (arr_14 [18]) : (((arr_15 [i_3 - 2] [i_3 + 2]) ? ((var_8 | (arr_14 [5]))) : var_6))));
    }
    #pragma endscop
}
