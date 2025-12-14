/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_0 && (((((var_0 ? var_6 : var_0)) ^ var_9))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (((arr_2 [i_0]) ? (-1156274958 / var_9) : var_8));
        var_12 = (((((-(var_2 - 2147483647)))) ? ((((((arr_1 [i_0]) ? var_6 : 9))) ? ((var_9 ? (arr_0 [i_0]) : 8191)) : (arr_2 [i_0]))) : ((~((var_6 ? (arr_2 [i_0]) : (arr_1 [i_0])))))));
        var_13 = (max(var_13, ((((arr_0 [i_0]) | (arr_1 [i_0]))))));
        arr_3 [i_0] = (((var_0 - var_7) ? var_3 : (((arr_1 [i_0]) | 7614))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (-(((min((arr_6 [i_1]), (arr_6 [i_1]))))));
        arr_9 [2] &= var_8;
        var_14 += (arr_5 [8] [i_1]);
    }
    var_15 = ((var_6 ? var_2 : -942825270));
    var_16 = ((~(max(var_3, (~var_2)))));
    #pragma endscop
}
