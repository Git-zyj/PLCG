/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (~179);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-0 ? ((((max(76, -1706542271))) ? ((0 ? 0 : 0)) : (((-127 - 1) ? 37304 : 42740)))) : (24924 * 81)));
                var_19 = ((-29305 ? 1 : 165));
            }
        }
    }
    var_20 = 602838713;
    #pragma endscop
}
