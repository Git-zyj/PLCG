/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 ? (-9223372036854775807 - 1) : var_13);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_13));
                var_17 = (arr_1 [i_1 - 3] [i_1 + 1]);
                var_18 = (arr_5 [i_1] [i_1]);
                var_19 = var_10;
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
