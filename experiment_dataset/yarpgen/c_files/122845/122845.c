/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((1 ? 1549153511 : 1007817899)) ^ (((-((17583596109824 ? 134217664 : 128)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_17 = ((((((!(arr_0 [i_0]))) ? (arr_0 [i_0]) : (((arr_1 [i_0]) | (arr_0 [i_0]))))) | (((((arr_0 [i_0]) || (arr_0 [i_0])))))));
    }
    var_18 = var_9;
    #pragma endscop
}
