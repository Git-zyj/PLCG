/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (!0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = ((((max((-127 - 1), var_0)))) & (~-var_2));
                    var_14 = (((2956242515 || 2956242515) - ((~(~4680130550905553716)))));
                    arr_9 [13] = (~var_9);
                    arr_10 [i_2] [i_2] [i_1] [i_0 + 2] = -2;
                }
            }
        }
    }
    #pragma endscop
}
