/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = -904918053;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [14] [i_0] = (((arr_2 [i_1]) > var_6));
            arr_8 [i_0] = ((-(arr_4 [i_0] [i_1] [i_0])));
            arr_9 [i_0] [i_1] = (99 & 63);
            arr_10 [3] = (((895829280 ^ var_13) ? (var_17 + 904918056) : (arr_2 [i_1])));
        }
        var_22 = (min((min(var_9, (arr_6 [i_0] [i_0]))), (!-904918075)));
    }
    #pragma endscop
}
