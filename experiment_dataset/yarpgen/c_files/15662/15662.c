/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        var_11 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_12 = ((var_10 < ((((!(arr_5 [i_1]))) ? var_3 : (max(var_2, var_2))))));
        var_13 = var_3;
        arr_7 [i_1 + 2] = ((((((var_3 ? var_3 : var_7))) ? var_10 : (((var_2 == (arr_4 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = var_5;
        arr_11 [i_2] [i_2] = ((((((arr_2 [i_2] [i_2]) ? (arr_2 [i_2] [i_2]) : (arr_2 [i_2] [i_2])))) ? (((var_1 ? (arr_0 [i_2] [10]) : (arr_0 [i_2] [10])))) : (min(((var_1 ? (arr_4 [i_2]) : var_8)), (arr_9 [i_2] [i_2])))));
    }
    var_14 = (((((((max(var_3, var_8))) ? var_6 : (var_1 - var_2)))) ? ((((!312754254087124528) * (min(var_10, var_9))))) : ((~(max(var_1, var_8))))));
    var_15 = (max(var_15, (((483252881 ? 20 : 259752061)))));
    #pragma endscop
}
