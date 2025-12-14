/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 ^= (((((!(arr_1 [i_0] [i_0])) ? 46756 : var_10))));
        var_12 = 64146;
        var_13 = (((0 ? (((((arr_1 [i_0] [i_0]) && (arr_0 [i_0]))))) : 353516666)));
    }
    var_14 = ((((((var_5 ? var_0 : -620048703)))) << ((((~(-620048687 / var_5))) - 14207))));
    var_15 = ((min((var_0 >= var_1), (var_6 ^ var_5))));
    var_16 += ((var_9 ? ((64 ? var_2 : 808950029)) : var_0));
    #pragma endscop
}
