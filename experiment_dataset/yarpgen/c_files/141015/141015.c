/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2865079021141100436;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [12] [i_2] = ((var_5 ? (!0) : (min(((471447311 ? var_4 : (arr_6 [i_2]))), (~var_4)))));
                    var_13 += (max((min((arr_6 [i_1]), var_2)), ((var_11 ? (arr_6 [i_2]) : (arr_6 [i_0 + 1])))));
                    var_14 = (max((((min(var_11, var_10)) << (((arr_9 [i_0] [4] [i_0 - 1]) - 593481347)))), ((-1 ? ((0 ? 1164223626 : (arr_1 [i_0]))) : (-281299779 - var_2)))));
                    var_15 = (max(var_15, (arr_3 [i_2] [i_1])));
                    var_16 ^= min((((arr_0 [i_2]) ? (arr_2 [i_1]) : 33554431)), var_1);
                }
            }
        }
    }
    var_17 = (~((var_2 ? ((8844265995274184606 ? var_11 : var_7)) : (~-1167875314))));
    var_18 = (var_11 / var_0);
    #pragma endscop
}
