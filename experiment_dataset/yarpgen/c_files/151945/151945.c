/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 11028;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 += (min(((124 ? 7125 : 4)), (min(-64, 1730395887))));
                var_16 = ((999603227 ? 255 : 63));
                var_17 ^= min(((-66 ? -74 : 15)), (min(-117, 1299694172)));
            }
        }
    }
    #pragma endscop
}
