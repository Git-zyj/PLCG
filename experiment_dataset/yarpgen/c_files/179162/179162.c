/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((var_4 ? (((min(var_2, 4768)))) : 8847254054558443212))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((arr_4 [i_1]), (((var_6 & 0) + 1453336009100813596))));
                arr_7 [i_0] [i_0] = 1;
                var_11 = ((((arr_5 [i_0]) ? ((~(arr_2 [i_1 - 2] [i_0]))) : (arr_4 [i_1 - 3]))) & (arr_2 [i_1 - 1] [i_1]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_3 - 1] [i_3] [i_3] [i_3 - 1] = 28422;
                                arr_17 [i_0] [i_3 - 2] [i_2] [i_0] [i_3] = ((~(((arr_9 [i_0] [i_1 - 2]) ? (arr_9 [i_0] [i_1 - 2]) : (arr_9 [i_0] [i_1 - 2])))));
                                var_12 = var_1;
                                arr_18 [i_0] [i_3] [i_1] [i_3] [i_4] |= (max(3, -117));
                                var_13 = min((min((arr_2 [6] [13]), ((max((arr_3 [i_0]), -6323228042999727492))))), (((~((min(var_8, (-127 - 1))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
