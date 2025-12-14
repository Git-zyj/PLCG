/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (max(var_12, -1065123493));
        arr_2 [i_0] = (1 ? var_9 : (!-14778));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_13 [i_2] [i_4] [i_2] = -1391926357;
                            arr_14 [i_1] [i_2] [i_3] [i_4 + 1] = ((-((min(131, 1)))));
                            var_13 = (max(var_13, -var_2));
                        }
                    }
                }
                var_14 ^= (-((max(250, 107))));
                var_15 = (min((15465916812521685498 ^ 24373), ((min(14777, 2601009285)))));
                arr_15 [i_1] [i_2] [i_1] = (max((-32766 * -33), 219));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [i_1] [19] [i_2] [i_5] [i_6 + 1] = var_3;
                            var_16 += 3259;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
