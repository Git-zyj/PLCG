/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_9 || -18907);
    var_21 = var_18;
    var_22 = 1687285637321577528;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_23 = var_1;
                    var_24 = 18901;
                }
            }
        }
    }
    var_25 = var_19;
    #pragma endscop
}
