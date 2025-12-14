/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -26217;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (!11864257872100506839);
                    arr_8 [i_0] [i_1 + 3] [i_2] [6] = 40048;
                }
            }
        }
    }
    var_14 -= var_9;
    var_15 &= var_6;
    var_16 ^= var_11;
    #pragma endscop
}
