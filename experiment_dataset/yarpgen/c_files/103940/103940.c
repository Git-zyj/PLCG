/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0 - 2] = var_4;
            var_16 = (max(((90 ? 32640 : 32640)), ((((min(var_4, -32641))) ? (((arr_3 [i_0] [i_0] [i_0]) ? 32640 : (arr_2 [i_0 - 1]))) : 1))));
            arr_8 [i_0] = var_11;
            arr_9 [10] [11] [i_0] = ((((!(var_1 != var_14))) ? ((var_4 + (((arr_2 [14]) - 32652)))) : (((arr_2 [i_0 + 1]) | ((var_6 ? 26583 : (arr_3 [i_0] [i_0 - 1] [i_0 - 1])))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_17 = (max(var_17, (((-32641 ? -1 : ((-32652 / (arr_0 [i_2]))))))));
            arr_12 [i_2] = ((45238 ? (arr_11 [i_0 + 1]) : (arr_10 [i_0 + 1])));
        }
    }
    var_18 = 4491422618005576116;
    #pragma endscop
}
