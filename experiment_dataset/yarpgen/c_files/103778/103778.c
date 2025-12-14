/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_9, var_5));
    var_11 = (var_6 || 127);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = 77;
        var_12 *= (((!var_3) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_1 [5] [i_0]) : 123))));
    }
    #pragma endscop
}
