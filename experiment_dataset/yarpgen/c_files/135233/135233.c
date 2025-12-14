/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_11;
    var_15 = var_13;
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (arr_13 [i_0] [i_1] [i_2 - 2] [i_0 - 2] [i_4]);
                                var_18 = -23;
                                var_19 = (max(var_19, (~-3913748425450574148)));
                                var_20 = (min(var_20, 5571601234713959568));
                            }
                        }
                    }
                    var_21 = var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5 + 1] [i_0] [i_1] [i_0 + 1] = (arr_1 [i_0]);
                                var_22 = ((~(max(var_8, (arr_2 [i_5 - 1] [i_2 - 2] [i_0 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
