/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (!179);
    var_18 = ((!(((var_16 ? (((16088872017421038089 ? var_9 : 50))) : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_4] [8] [8] |= min(((var_2 ? ((0 ? var_4 : var_4)) : 16088872017421038089)), (((((16088872017421038091 ? 2357872056288513524 : 16088872017421038083))) ? 10 : 16088872017421038089)));
                                var_19 |= (!-8336281072952552760);
                                arr_13 [i_1] [i_1] = ((-16088872017421038089 ? (arr_1 [i_0]) : (((8336281072952552759 < 10) ? (arr_9 [i_4] [1] [1] [i_1] [i_0]) : 16088872017421038096))));
                            }
                        }
                    }
                }
                var_20 ^= ((16088872017421038096 - (min(16088872017421038087, 9153505157576139469))));
            }
        }
    }
    var_21 = (min(var_21, 2357872056288513533));
    #pragma endscop
}
