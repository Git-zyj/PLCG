/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((62 ? var_4 : var_13))) ? (1 && var_16) : (((!(((var_3 >> (var_6 - 337502489)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (((var_9 + (arr_1 [6]))));
        arr_2 [i_0] [1] = (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_9));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_19 -= -1;
        var_20 = (max(((min((max(60441, var_8)), 1))), -62));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = 84;
        var_21 = ((((((max(2040, (arr_4 [i_2]))) >> ((((max((arr_3 [12]), 63))) - 247))))) ? (arr_0 [4]) : (((((((arr_4 [4]) & (arr_4 [i_2]))) <= (((((arr_5 [i_2] [i_2]) > var_15))))))))));
        arr_8 [i_2] = ((9007199254739968 - ((((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_2]))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_11 [i_2] [5] = (-82 && 4);
            arr_12 [i_2] [i_2] = ((~((var_13 ^ (arr_6 [i_2])))));
        }
    }
    #pragma endscop
}
