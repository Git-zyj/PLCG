/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [21] [i_3 - 1] = (((arr_1 [i_0] [i_0]) <= ((min(0, (min((arr_7 [i_3] [9] [1] [15]), 1)))))));
                            arr_10 [i_0] [15] [15] [6] [i_0] [i_0] = (max((min((arr_6 [i_0] [i_0] [i_0] [i_0]), -29092)), (max(var_9, (arr_6 [i_2] [6] [i_2] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
