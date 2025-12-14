/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, -44));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2 - 1] [i_1] [i_0] = (-65535 != 64156);
                    arr_8 [7] [i_1 + 3] [i_1] [i_2] = (var_3 & 268435455);
                }
            }
        }
    }
    var_13 += (((268435455 + (max(8160, -8161)))));
    #pragma endscop
}
