/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_9 / ((((var_3 / 6386123934071073135) ? 93 : var_3)))));
    var_14 &= ((max(-1186227086, 27937)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((arr_1 [0] [i_0]) ? ((-9223372036854775803 ? 2210523683 : -6386123934071073135)) : (arr_1 [i_0] [i_0])));
        var_16 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [8]) : (~2210523683)));
    }
    var_17 = 19991;
    var_18 += (0 ? -2 : 65535);
    #pragma endscop
}
