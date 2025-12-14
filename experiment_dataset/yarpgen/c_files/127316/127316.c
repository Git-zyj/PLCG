/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_9 & ((~(max(10810984620711632483, 16816)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_2 [i_0] [i_0])));
        var_16 = ((~(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_2))));
        arr_4 [2] = (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])));
        var_17 = (min(var_17, ((((arr_3 [i_0]) / (arr_3 [i_0]))))));
    }
    #pragma endscop
}
