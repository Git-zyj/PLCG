/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min((arr_0 [i_0] [i_0]), (arr_1 [i_0])));
        var_16 = ((((30356 ? (((arr_0 [i_0] [i_0]) ? 226 : var_8)) : (((min((arr_2 [i_0]), (arr_2 [i_0]))))))) ^ var_6));
        var_17 = ((-(((!(((33017 ? var_8 : var_4))))))));
        var_18 = (max(var_18, ((((((1 ? (arr_2 [10]) : var_11))) ? 41643 : ((max(325741076, (arr_0 [i_0] [i_0])))))))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((((((arr_5 [i_1]) ? -93 : (arr_4 [i_1] [i_1]))) - ((min(0, 130)))))) ? 3969226240 : (((-(arr_3 [i_1 + 2] [i_1 + 1]))))));
        var_19 -= ((-(min(130, (((arr_4 [i_1] [i_1]) + var_13))))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_20 = (-127 - 1);
        arr_10 [3] [i_2] |= ((+((((arr_4 [i_2 + 3] [i_2 + 2]) != (arr_4 [i_2 + 1] [i_2 + 1]))))));
    }
    var_21 = ((((min((~var_5), var_9))) ? var_4 : (max(0, var_1))));
    var_22 = var_13;
    var_23 = var_4;
    #pragma endscop
}
