/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 |= var_12;
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (min(var_16, (((((((arr_2 [i_0] [i_0]) | (arr_1 [i_0] [i_0])))) ? (((arr_2 [0] [i_0]) ? var_2 : -8913804931293409569)) : ((((arr_0 [i_0]) ? 3627410693 : var_2))))))));
        arr_3 [i_0] = ((!(arr_1 [i_0] [i_0])));
        arr_4 [i_0] = ((((((!(arr_1 [i_0] [1]))))) < (arr_1 [i_0] [i_0])));
        arr_5 [i_0] = (((arr_2 [i_0] [i_0]) << (((arr_2 [i_0] [i_0]) - 1976400897432168589))));
        var_17 = (((arr_0 [i_0]) ? ((var_3 * (arr_2 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = (((arr_8 [i_1]) ? (((arr_6 [i_1] [8]) ? var_2 : (arr_6 [i_1] [i_1]))) : (arr_6 [i_1] [1])));
        var_19 = (3566948653 - 4065227085);
        var_20 = (max(var_20, (((!(arr_7 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((!3184) ? ((((((arr_6 [i_2] [i_2]) ? var_12 : 3184))) ? (min((arr_10 [16]), var_4)) : (((97 ? (arr_6 [i_2] [i_2]) : (arr_6 [0] [17])))))) : ((max((arr_6 [i_2] [i_2]), (127 / 23108))))));
        var_21 = (min(var_21, (((-224 == (max(((~(arr_8 [i_2]))), 255)))))));
        var_22 = (~var_2);
        var_23 = ((((((max((arr_7 [i_2] [i_2]), 0))) ? (((min((arr_6 [i_2] [i_2]), (arr_7 [0] [i_2]))))) : (arr_10 [5]))) | (((~(~var_2))))));
    }
    var_24 = (((max(-121, 82))));
    #pragma endscop
}
