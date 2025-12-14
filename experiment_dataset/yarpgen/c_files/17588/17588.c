/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [20] [20] |= var_7;
                var_15 *= 58297;
            }
        }
    }
    var_16 = (1 * (((var_10 ? var_4 : var_12))));
    #pragma endscop
}
