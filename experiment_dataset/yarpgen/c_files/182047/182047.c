/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(((var_5 ? var_3 : var_8)), ((var_1 >> (var_8 - 80)))))) ? (((((11 ? var_9 : 184))) ? ((max(var_2, 0))) : var_7)) : (var_2 && var_9)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((((!(arr_2 [i_0 - 1])))) - (((((var_2 ? (arr_1 [i_0]) : (arr_2 [i_0])))) ? var_8 : (~var_6)))));
        arr_5 [i_0] = (max((((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : 219)), (arr_1 [i_0])));
    }
    var_11 += ((((5 - (143 + var_9))) < ((max(var_3, var_4)))));
    #pragma endscop
}
