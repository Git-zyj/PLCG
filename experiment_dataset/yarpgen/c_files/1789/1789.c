/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~(max(((89 ? var_9 : 16025827159347118775)), var_6)));
    var_16 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 ^= (((73 * 0) ? (!0) : (var_11 >= -var_3)));
                var_18 = (((~(~var_7))));
            }
        }
    }
    var_19 = (~1904913372213225780);
    #pragma endscop
}
