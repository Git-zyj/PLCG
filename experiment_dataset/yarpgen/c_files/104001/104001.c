/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 ^= 33;
                var_21 = -9;
                var_22 = 1;
                var_23 = 0;
            }
        }
    }
    var_24 ^= max(1546385273, 1546385255);
    var_25 = ((((!(((1 ? 8 : 163))))) ? (~-1546385273) : (min((max(1, (-2147483647 - 1))), ((max(9566, 0)))))));
    var_26 = 93;
    #pragma endscop
}
