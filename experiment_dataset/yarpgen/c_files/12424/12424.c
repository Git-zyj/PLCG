/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (--7);
    var_17 *= (34 | 120401429232493084);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (~-12);
                arr_7 [i_1] = ((-(max(-var_6, ((max(0, 57)))))));
            }
        }
    }
    #pragma endscop
}
