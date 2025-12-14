/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = var_16;
                var_22 = (((~var_1) ? (min((!-45852374), ((var_12 ? -7690987784432535209 : var_18)))) : 7690987784432535223));
            }
        }
    }
    #pragma endscop
}
