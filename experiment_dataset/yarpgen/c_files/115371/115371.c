/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(((max(57256, -67))), ((2977969167856027492 ? -265651634514458842 : 2977969167856027486)))) - (((-((-44 ? 37039 : 53688)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [8] = -2977969167856027504;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_15 [9] [i_1] [i_1] [i_0 + 1] [i_2 + 3] [i_2] = (arr_0 [i_0]);
                                var_15 = ((-((min((arr_12 [i_4 - 1]), 53694)))));
                            }
                        }
                    }
                    var_16 = min(-2977969167856027501, -9223372036854775787);
                }
            }
        }
    }
    var_17 = ((var_5 / ((-((11840 ? var_9 : 53672))))));
    var_18 = -9223372036854775789;
    #pragma endscop
}
