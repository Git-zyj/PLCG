/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (16905406833529480265 ^ var_2)));
                var_19 = var_7;
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
