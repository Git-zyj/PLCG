/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(579989276, -303284752));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 -= ((-((((((-(arr_3 [i_0] [i_1]))) + 2147483647)) >> (((((arr_6 [i_0] [i_0]) ^ -25136)) - 5629323256025874626))))));
                var_17 ^= (((((min(32767, 303284747)))) ? 303284773 : 19577));
                var_18 &= (arr_5 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
