/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((+(((1 + 7459913942210340322) - var_8))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (32749 + -1073479680);
        arr_4 [i_0] = -951;
        var_14 &= (((max(var_11, (max(1, (arr_2 [i_0]))))) ^ ((((-(arr_2 [11]))) - (((max(1, 1))))))));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = (((((var_11 ? (arr_8 [12]) : (arr_6 [i_1])))) || (~1)));
        var_16 = (((~255) ? (arr_1 [i_1]) : (!1)));
        arr_9 [i_1] [i_1] = (~1);
    }
    var_17 = var_10;
    var_18 = (min(var_18, ((((((var_10 << (((~1) + 19))))) ? ((1 ? ((var_6 ? var_6 : 1)) : 1)) : -55569)))));
    #pragma endscop
}
