/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((98 & -1) ? var_12 : ((min((255 / 27), (~var_8)))))))));
                var_19 ^= var_7;
            }
        }
    }
    #pragma endscop
}
