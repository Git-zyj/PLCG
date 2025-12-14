/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((-(var_10 & 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 -= 1;
                    arr_9 [i_1] = (((((2576479135 ? (1284328965 && var_5) : (!var_5)))) && ((max((((1 ? var_9 : (-32767 - 1)))), 2217146911)))));
                }
            }
        }
    }
    #pragma endscop
}
