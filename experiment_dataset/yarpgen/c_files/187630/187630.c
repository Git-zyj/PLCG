/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_10 *= arr_4 [i_0];
                arr_6 [i_0] [i_1] [i_0] = var_4;
            }
        }
    }
    var_11 = (max(var_11, (((1655833018057652700 ? ((((!((max(var_7, var_2))))))) : (((5304806156766285269 ^ var_3) ? ((var_2 ? var_4 : var_3)) : var_0)))))));
    #pragma endscop
}
