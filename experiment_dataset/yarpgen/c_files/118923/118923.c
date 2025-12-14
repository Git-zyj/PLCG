/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!-var_15);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] &= ((max(var_10, (arr_1 [i_0 - 2] [i_0 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = var_3;
                            arr_9 [i_0] [i_1] [i_2 - 1] [i_3] = max(0, 4294967295);
                            var_19 = max((((arr_7 [i_3] [i_3 - 1] [i_3 - 1] [11]) ? (((arr_7 [i_3] [i_2 - 2] [i_1] [i_0]) ? var_1 : var_2)) : (arr_5 [i_2 - 2] [i_0 - 1] [i_0 - 1]))), var_11);
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    arr_13 [i_4] [19] [i_0] = (arr_7 [14] [14] [i_4] [i_4]);
                    var_20 = ((-(arr_5 [i_0] [i_1] [i_4])));
                    var_21 = (max((!-3508424661207141743), 4294967295));
                }
                var_22 -= (max((((~var_14) ? ((((-1474584900 || (arr_8 [i_1]))))) : (max((arr_0 [i_0 - 1]), var_7)))), (((~((1223645088 & (arr_12 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
