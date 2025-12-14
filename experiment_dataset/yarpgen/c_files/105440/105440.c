/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((4294967295 ? 9223372036854775807 : 402057186713496560));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = -402057186713496560;
                arr_7 [i_0] [i_0] = ((((((402057186713496560 ^ (arr_5 [i_1] [i_0]))))) ? (0 & 67) : ((((1 ? -8139902993318950355 : 2147483622)) | 1))));
            }
        }
    }
    #pragma endscop
}
