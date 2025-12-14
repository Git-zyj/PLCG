/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_14 += (min(-1, ((1 ? ((min(1, (arr_2 [i_0])))) : var_3))));
        var_15 = (((((var_1 ? ((max(var_4, (arr_0 [i_0] [12])))) : ((var_0 * (arr_0 [i_0] [i_0])))))) || ((max((arr_1 [i_0]), -22)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_5 [11] = (((((-((50 ^ (arr_2 [i_1])))))) ^ ((var_0 ? var_3 : 1))));
        var_16 = (min(var_16, ((((max(21, 14576690630010385716)) <= (max(3870053443699165899, (arr_0 [i_1] [i_1]))))))));
        arr_6 [0] = (max(((var_1 ? 12379 : 6859638780736803076)), ((max(var_8, var_2)))));
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_9 [i_2] = ((((((((-(arr_4 [10])))) ? -43 : (!var_12)))) ? (((1 ^ (arr_2 [11])))) : ((((((arr_4 [i_2]) / (arr_3 [i_2 - 1]))) > (-1 * -6))))));
        var_17 = (min(var_17, (((((max((arr_4 [i_2 - 1]), 72973439))) ? (1275583393 || var_8) : (((arr_1 [1]) ? var_7 : (((var_1 ? (arr_8 [i_2 + 1]) : (arr_3 [i_2])))))))))));
        arr_10 [i_2] [i_2] = (max((((-((var_8 ? var_10 : (arr_1 [i_2])))))), (min((arr_1 [i_2 + 1]), (((arr_4 [i_2]) / var_7))))));
    }
    var_18 |= ((((min(var_8, (max(var_9, var_1))))) << (((((0 ? var_7 : var_8))) - 103))));
    #pragma endscop
}
