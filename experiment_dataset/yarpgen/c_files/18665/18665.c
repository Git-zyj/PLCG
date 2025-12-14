/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (arr_3 [i_0] [i_1]);
                var_22 = ((!(arr_0 [i_1 + 4])));
                var_23 = ((10705 << (72 - 67)));
            }
        }
    }
    var_24 = (min(var_24, var_14));
    #pragma endscop
}
