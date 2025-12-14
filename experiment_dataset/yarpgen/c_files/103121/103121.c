/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [8] [0] [8] &= -241;
                    var_15 ^= ((((arr_3 [6]) ^ (arr_8 [i_0 - 3] [i_1 + 1] [2] [i_2 - 2]))));
                }
            }
        }
    }
    var_16 = -var_14;
    #pragma endscop
}
