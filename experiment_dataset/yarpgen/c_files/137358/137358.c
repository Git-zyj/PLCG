/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8388607;
    var_13 -= var_3;
    var_14 = var_9;
    var_15 = ((((min(var_4, var_6))) ? var_0 : (min((((var_0 >> (var_10 - 103)))), ((var_2 ? 229 : var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_1] = ((3779 ? (((((((max((arr_1 [i_0]), (arr_0 [i_0] [i_1]))))) >= (min(8388631, (arr_1 [6]))))))) : 12362454139083132671));
                var_16 -= ((-8387892953344138988 ? (((arr_1 [i_1 + 3]) - var_4)) : ((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
