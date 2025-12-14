/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_3));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 1] [6] [i_1] [i_2 - 1] |= 116;
                    var_16 = -117;
                }
            }
        }
    }
    var_17 = 112;
    #pragma endscop
}
