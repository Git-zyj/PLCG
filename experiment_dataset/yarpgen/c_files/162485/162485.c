/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] &= ((((((arr_0 [10]) != var_7))) >> (((-6441440522993217811 | 6441440522993217811) + 26))));
        arr_3 [i_0] |= ((((((arr_0 [i_0]) >= (arr_1 [i_0] [i_0])))) << (((((((arr_1 [i_0] [1]) + 2147483647)) << (((-6441440522993217811 + 6441440522993217842) - 31)))) - 1124283478))));
        arr_4 [i_0] [i_0] = (((var_10 >= var_9) | (var_3 + var_16)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 -= (((((var_9 > (arr_5 [i_1])))) - (var_14 || var_3)));
        var_18 = (((((var_5 == (arr_5 [i_1])))) >= (var_11 && 28263)));
        arr_7 [i_1] = (((((((arr_6 [i_1]) >= (arr_1 [i_1] [i_1]))))) >= (((arr_0 [4]) % -107911601037416395))));
        arr_8 [i_1] [i_1] = (((-107911601037416395 == var_12) << ((((arr_6 [i_1]) != -20)))));
        var_19 += ((((((arr_1 [i_1] [i_1]) * var_4))) % (((arr_5 [i_1]) | 6441440522993217810))));
    }
    var_20 = (min((max((107911601037416398 - -790277052), (max(var_1, var_3)))), (min((((var_8 >> (var_15 - 36370)))), ((1004808823479084989 >> (var_12 - 11514983395561255130)))))));
    #pragma endscop
}
