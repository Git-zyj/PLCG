/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 = -1327222727;
                    var_11 = min(72057594037927936, 1);
                }
            }
        }
        var_12 = (min(var_12, -3698836151993426842));
    }
    var_13 = var_3;
    #pragma endscop
}
