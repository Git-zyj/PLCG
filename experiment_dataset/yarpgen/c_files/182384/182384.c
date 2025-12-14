/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max((((!4294967279) >> (((arr_6 [i_1 + 1] [i_1] [i_1]) + 26554)))), (!12)));
                arr_8 [i_0] = (var_9 ? (arr_6 [i_1 - 1] [i_1] [i_1 - 1]) : var_2);
                var_20 = ((~(max((arr_4 [i_1 - 1] [i_1] [11]), var_17))));
                var_21 = (~var_0);
                var_22 = ((~(max(var_16, (max(4294967283, 0))))));
            }
        }
    }
    #pragma endscop
}
