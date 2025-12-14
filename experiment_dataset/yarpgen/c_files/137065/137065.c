/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = var_13;
                var_18 ^= (var_7 <= -18);
                var_19 = 18;
            }
        }
    }
    var_20 = var_8;
    var_21 = ((((min((-19704 ^ var_2), var_4))) ? ((((~var_7) ^ 3258322547260435810))) : ((((var_6 << (65520 - 65508))) | (((32915 ? 84 : -57)))))));
    #pragma endscop
}
