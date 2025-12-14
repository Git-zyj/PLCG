/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(var_10, (var_7 + 1997))) != (!63537)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 ^= var_9;
                var_19 *= var_2;
            }
        }
    }
    #pragma endscop
}
