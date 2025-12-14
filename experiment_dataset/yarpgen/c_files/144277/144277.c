/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 &= (((arr_1 [i_0]) < ((2181843386368 ? (((!(arr_0 [0])))) : (((arr_1 [4]) ? 1005301002 : (arr_1 [i_0])))))));
        var_22 = (i_0 % 2 == zero) ? ((((((var_11 ? (arr_1 [i_0]) : (arr_2 [i_0])))) << ((((((-(arr_0 [i_0]))))) - 48987))))) : ((((((var_11 ? (arr_1 [i_0]) : (arr_2 [i_0])))) << ((((((((-(arr_0 [i_0]))))) - 48987)) - 3878)))));
        var_23 |= ((!(arr_0 [6])));
    }
    var_24 = 1005301002;
    var_25 = ((var_1 ? (max((-1005301002 > var_9), var_11)) : 7));
    #pragma endscop
}
