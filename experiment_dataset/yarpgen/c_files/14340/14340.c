/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (min(var_20, 7858197470088349956));
                var_21 *= ((~((-413303444 ? (~1) : (((arr_4 [10] [i_1] [i_1]) ? 804851176 : -21))))));
            }
        }
    }
    #pragma endscop
}
