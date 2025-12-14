/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((13440655290685128005 ? 65 : 2273054342));
                var_20 = ((15 << (17667012422274962683 - 17667012422274962674)));
            }
        }
    }
    var_21 += var_8;
    var_22 = ((var_3 ? (((57606 <= var_7) ? (min(var_0, 2606310346)) : (((min(var_1, var_6)))))) : -30));
    #pragma endscop
}
