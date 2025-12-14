/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] = ((6914039130553461830 ? 16777208 : 16777208));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = var_7;
                        }
                    }
                }
                arr_11 [i_0] [i_0] = var_6;
                arr_12 [i_0] [i_1] [i_1] = 15125717641508949687;
            }
        }
    }
    var_11 = -4659361153404364909;
    #pragma endscop
}
