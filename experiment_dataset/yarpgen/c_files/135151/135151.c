/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = 1;
                var_17 = ((-484408940 ? ((-((0 ? 4271132431 : 127)))) : ((-4556960469851031438 ? 4294967295 : 23834859))));
                var_18 ^= (max((min(468713567, 4271132420)), (((4271132455 ? -1625197766 : ((229540931 ? 1 : 50)))))));
            }
        }
    }
    var_19 &= 4271132457;
    #pragma endscop
}
