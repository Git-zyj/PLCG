/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_5;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 = 14;
        var_14 = (min(var_14, ((min((((((-21937 ? 48759752931718538 : 817570416632877649))) ? 65535 : 0)), -2022365653349971940)))));
        arr_2 [i_0] = (min((((var_10 ? -20501 : (arr_1 [i_0])))), (((arr_0 [i_0 - 1]) / (arr_0 [i_0 + 1])))));
        var_15 |= ((var_0 ? (arr_1 [i_0 + 1]) : ((11414011469030508799 ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 2])))));
    }
    var_16 = -var_4;
    var_17 = (((((var_0 ? var_6 : var_1))) && var_6));
    #pragma endscop
}
