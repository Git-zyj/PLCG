/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_7 + var_9);
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max((max(((min((arr_0 [i_0 - 2]), var_11))), 3540718068)), var_5));
                var_16 = ((((arr_0 [i_0 - 2]) ? (arr_4 [i_0 + 3] [i_0 - 1] [i_0 + 2]) : (arr_0 [i_0 + 1]))));
                var_17 = ((((min(var_6, 0))) ? (((var_1 || (((4294967271 * (arr_0 [6]))))))) : var_11));
            }
        }
    }
    #pragma endscop
}
