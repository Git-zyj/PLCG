/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 ^= 3;
                    var_13 -= -77;
                }
            }
        }
    }
    var_14 |= ((~0) ^ (~var_2));
    var_15 = (-22305 ? 51405 : (min(((max(var_4, 95))), var_3)));
    var_16 = var_4;
    #pragma endscop
}
