/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (max(var_14, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((((((arr_0 [i_1]) ? 0 : -7619065126766356846)) | -7619065126766356846)) > (!44797)));
                var_16 = (max(var_16, (((((arr_0 [i_1]) ? -1819832464 : (-9223372036854775807 - 1)))))));
            }
        }
    }
    #pragma endscop
}
