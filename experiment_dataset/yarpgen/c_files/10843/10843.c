/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = 31315;
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_2] = (min((~-649265540), var_1));
                                var_14 = (max((((arr_14 [i_3 + 1] [i_1] [i_2] [i_1] [10] [i_2] [i_2 - 1]) ? (arr_13 [i_3 + 1] [i_3 + 1] [i_2 + 1] [i_3] [i_4] [i_2] [i_2 - 1]) : var_6)), (min(16502, (-101640363727431633 - var_6)))));
                                var_15 = ((17845746266016584723 ? ((36732 ? (((16496 ? 26774 : 49152))) : -1)) : (((min(((((arr_6 [i_2] [i_2] [i_2]) <= (arr_2 [i_2])))), var_9))))));
                                var_16 += 1674668154894634278;
                            }
                        }
                    }
                }
                arr_17 [i_1] = var_7;
                var_17 -= (-7 || 540431955284459520);
            }
        }
    }
    var_18 = (((-7 + 9223372036854775807) << (var_4 - 795662380)));
    #pragma endscop
}
