/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_2] [i_2] = 13468718721292759765;
                    arr_9 [i_0] [i_2] = (arr_4 [i_0] [i_0 - 1]);
                }
            }
        }
    }
    var_14 = 28;
    var_15 = 2468319317058772081;
    #pragma endscop
}
