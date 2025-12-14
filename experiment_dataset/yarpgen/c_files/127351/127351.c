/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [4] [i_2] [i_1] = -21744;
                    arr_7 [i_0 - 1] [i_1] = (!var_8);
                    arr_8 [i_0] [i_0] [i_0] [i_2] = var_1;
                    arr_9 [6] [6] [14] [i_2] = (!-5);
                }
            }
        }
    }
    var_17 = (!-5);
    #pragma endscop
}
