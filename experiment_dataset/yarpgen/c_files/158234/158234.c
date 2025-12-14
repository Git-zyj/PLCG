/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 += (max((((max(255, 255)))), (((1 << (79 - 60))))));
                    var_16 = 8294897071333288388;
                    arr_8 [i_2] = (((~3271643373) ? 220 : (min(254, 4070430001))));
                }
            }
        }
    }
    var_17 = 9223372036854775807;
    #pragma endscop
}
