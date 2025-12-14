/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(((~(arr_2 [i_0]))), (((arr_2 [i_0]) ? (arr_1 [1]) : (arr_2 [i_0])))))) ? (arr_2 [7]) : (((arr_2 [i_0]) ? (arr_1 [i_0]) : ((~(arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = ((!((((((~(arr_0 [i_0])))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0]))) : ((~(arr_0 [i_0]))))))));
    }
    var_19 = ((var_9 ? var_16 : (((((var_15 ? var_13 : var_13))) ? (min(-6733, 0)) : ((max(var_17, var_8)))))));
    #pragma endscop
}
