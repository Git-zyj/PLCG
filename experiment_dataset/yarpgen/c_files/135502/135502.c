/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_6 ? (((-(var_5 || var_5)))) : (max(var_2, ((var_7 ? var_1 : var_5)))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (32367 == 4062968431);
        arr_3 [i_0] = ((((max(var_8, (((var_6 ? var_6 : var_1)))))) ? (((((arr_1 [1]) <= var_2)) ? (((-32342 ? 2047 : (arr_1 [i_0])))) : 2738045445)) : (((((min(var_4, (arr_1 [4])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((arr_0 [i_0] [i_0]) ? var_2 : (arr_1 [i_0]))))))));
        var_11 = (min((min(((0 ? 766905205 : 231998884)), (arr_0 [i_0] [i_0]))), (((var_7 > ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_4))))))));
    }
    #pragma endscop
}
