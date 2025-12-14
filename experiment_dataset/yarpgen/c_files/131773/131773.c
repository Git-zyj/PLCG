/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_1 [10]);
        var_19 = ((((max(14354229975655722705, ((var_7 >> (((arr_1 [i_0]) - 56442))))))) ? (((arr_2 [i_0] [i_0]) ? (max(1, 4092514098053828890)) : (min(var_9, var_13)))) : ((((8168412942662115685 ? -93 : 1))))));
        var_20 = (((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) > ((((min(var_4, (arr_3 [1])))) | (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_5 [i_1]) >> (((arr_5 [i_1]) - 54))));
        var_21 = (min(var_21, ((((((~(arr_5 [i_1])))) || (((arr_6 [i_1]) && var_8)))))));
        var_22 = (min(var_22, ((((arr_6 [i_1]) || var_5)))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_23 |= ((((((max(1537822232, -4901356181004769625)) ^ 3584))) ? ((max((arr_9 [16]), (arr_9 [20])))) : ((((((((arr_9 [0]) && 20486)))) > (min((arr_9 [1]), var_12)))))));
        arr_12 [16] &= var_8;
        var_24 &= (arr_10 [i_2 - 1]);
    }
    var_25 += 1;
    var_26 = var_13;
    #pragma endscop
}
