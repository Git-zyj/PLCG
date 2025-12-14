/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2 + 3] [i_3 - 1] = ((min(var_2, var_6)));
                            arr_12 [i_2] [i_2] [i_2] = var_7;
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = var_6;
                        }
                    }
                }
                var_15 = (max(var_15, ((min(var_5, (max(((max(var_3, var_12))), (max(var_1, var_5)))))))));
            }
        }
    }
    #pragma endscop
}
