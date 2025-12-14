/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = ((~(~3190486593886900588)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = ((~(((arr_7 [16] [i_1] [i_2] [15]) & 133))));
                                arr_15 [i_0] [i_3] [15] [i_1] [i_0] [i_0] = var_11;
                                arr_16 [i_0] [7] [i_2] [7] [i_3] [i_3] [16] = 103;
                            }
                        }
                    }
                }
                var_20 = (((arr_6 [i_0] [i_0] [i_0] [i_1]) + ((max(var_9, 15946)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_21 ^= (arr_18 [i_5]);
                    var_22 = max(((var_17 ? ((max((arr_22 [i_5] [i_7]), 114))) : (~7154392211111037231))), (-46 / 40953));
                }
            }
        }
    }
    var_23 = (min(var_23, var_8));
    #pragma endscop
}
