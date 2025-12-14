/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min(((+(((arr_4 [4] [0] [i_0]) << (var_10 + 14225))))), 0));
                arr_5 [i_0] = 3768242782;
            }
        }
    }
    var_18 = var_11;
    var_19 = (var_13 > 0);
    #pragma endscop
}
