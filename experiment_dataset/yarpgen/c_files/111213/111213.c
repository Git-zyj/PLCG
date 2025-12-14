/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((~((4112381559 ? (arr_1 [1]) : 144))))) ? ((125 ? 0 : 7881299347898368)) : var_6));
        arr_3 [i_0] [8] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_10 -= (((arr_4 [i_1 - 2] [i_1 + 1]) | (arr_4 [i_1 + 1] [i_1 + 1])));
        var_11 ^= ((((67100672 ? var_8 : var_3)) <= var_4));
        arr_6 [11] = (((arr_4 [i_1] [i_1 - 1]) ? var_4 : var_5));
    }
    var_12 = var_1;
    var_13 = var_9;

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_9 [20] [8] = (((((arr_7 [i_2 + 2]) ? 18438862774361653247 : var_6)) / (((var_0 ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 - 1]))))));
        var_14 = ((1608308017 ? (((arr_7 [i_2]) ? var_5 : (((112 >= (arr_7 [i_2])))))) : (arr_8 [7])));
    }
    #pragma endscop
}
