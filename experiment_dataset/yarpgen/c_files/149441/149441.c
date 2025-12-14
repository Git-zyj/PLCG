/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_2;

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = var_7;
            var_12 = ((((!(((26013 ? var_2 : 208172230))))) ? ((-((26013 ? 26013 : 26013)))) : (((((2147483648 ? 1 : 33554432))) ? (!var_6) : ((1 ? -14782 : 48))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_13 = var_10;
            arr_8 [0] [i_2] [i_2] = 39540;
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_11 [i_3] = (arr_0 [i_3]);
        var_14 = var_4;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_14 [i_4] = (((min(((min(var_7, -64))), 2125062065))) ? (arr_7 [i_4] [1]) : (39546 / 4237));
        var_15 = var_4;
        arr_15 [i_4] = ((~(((((var_2 ? (arr_6 [i_4] [i_4]) : var_9))) ? var_6 : (((26013 ? (arr_9 [i_4]) : 1566158367)))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_16 = 1;
        var_17 = (max(var_17, (((!(785474112 ^ 9))))));
    }
    #pragma endscop
}
