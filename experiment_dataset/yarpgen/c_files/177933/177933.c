/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max((min(var_1, -var_9)), (~var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = var_9;
                    var_12 = (arr_6 [i_2] [i_2] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (max((max(var_6, (arr_1 [i_4 - 1]))), (min((max(var_2, (arr_8 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4]))), (((~(arr_2 [i_0] [i_0]))))))));
                                var_14 = (min(var_6, ((min((arr_5 [i_0] [i_0] [i_0] [i_0]), var_0)))));
                            }
                        }
                    }
                    var_15 = var_1;
                }
            }
        }
    }
    var_16 = (~-var_9);
    var_17 *= (!-var_1);
    #pragma endscop
}
