/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 += (max((((arr_0 [8] [i_0]) + ((var_5 - (arr_4 [i_0] [i_0]))))), var_10));
                var_16 = ((~((((min((arr_3 [2]), 33))) ? (((arr_0 [i_0] [i_1]) / -9162706219668613895)) : (((var_9 - (arr_1 [i_0] [1]))))))));
            }
        }
    }
    var_17 = (~9162706219668613901);
    var_18 -= ((var_9 - (-245 | var_10)));
    var_19 = ((39 << (((((~210) | (max(228, 33554432)))) - 4294967064))));
    #pragma endscop
}
