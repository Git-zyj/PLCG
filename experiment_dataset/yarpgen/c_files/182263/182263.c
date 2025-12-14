/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(4146338408, 4611));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = min(var_9, (((arr_5 [i_0 - 4] [i_1 + 2]) ? 0 : (arr_5 [i_0 - 1] [i_1 - 1]))));
                var_14 = (min(var_14, (min((min(var_12, 96)), (arr_5 [0] [i_1 + 1])))));
                var_15 = (min(var_15, (((min((((arr_2 [i_1]) + (arr_1 [0] [i_1]))), (((19329 ? (arr_4 [i_0] [i_1 + 1] [8]) : 656366945)))))))));
            }
        }
    }
    var_16 = (max(var_16, var_5));
    #pragma endscop
}
