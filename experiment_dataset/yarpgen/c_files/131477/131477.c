/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (min((!191), 9223372036854775807));
                    var_18 *= ((14395529127739152130 ? 156 : 6672027446058354553));
                }
            }
        }
    }
    var_19 *= var_12;
    var_20 *= (((~var_9) ? ((var_9 ? (var_0 - var_9) : 248)) : var_13));
    #pragma endscop
}
