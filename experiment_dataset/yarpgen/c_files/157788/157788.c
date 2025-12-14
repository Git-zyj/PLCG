/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(max((max(var_4, var_1)), (((4294967278 ? 1536 : -16910)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [10] [10] [10] [i_1] [10] = var_4;
                                arr_15 [i_1] [i_1] [10] [10] [19] = (((((min((min(var_3, var_5)), (var_6 / var_2))) + 9223372036854775807)) >> (((arr_7 [i_4]) - 3461575671))));
                                var_11 = (~16910);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_12 = (min((~var_9), ((-16900 ? 16893 : -8626956138639723581))));
                                var_13 = (max(var_13, ((max(var_1, (~16185782066938585951))))));
                                var_14 = (arr_11 [i_1] [i_1] [i_1] [i_2] [i_2] [14] [i_6]);
                                var_15 = ((var_3 ? (~var_3) : ((~(min(var_0, var_0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
