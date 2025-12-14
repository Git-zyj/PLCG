/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = ((16320 ? ((((-16320 ? 1469791420780304708 : -1)) >> ((((max(-114, -16322))) + 118)))) : -16327));
                var_12 ^= ((((min(527765581332480, 5684532756149539701))) ? (min(127, 806)) : ((min(960211765, 1)))));
            }
        }
    }
    var_13 -= var_3;
    #pragma endscop
}
