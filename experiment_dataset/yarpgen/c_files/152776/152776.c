/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 *= var_7;
                    var_21 ^= (+((((~1) >= 255))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_16 [i_5] [i_4] [1] = ((((min(1, ((var_19 ? var_4 : 29300))))) ? ((~(arr_1 [i_5]))) : 1));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_19 [i_3] [i_5] [3] [i_6] [i_4] [i_3] = (arr_3 [1] [i_5]);
                        var_22 = ((~((0 ? 49805 : 29301))));
                        arr_20 [14] [1] [i_5] [i_5] [i_5] = var_1;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_23 [i_7] [i_5] [i_5] [i_3] [i_3] [i_3] = ((!((((arr_12 [i_3] [i_4] [4]) ? var_6 : (max((arr_15 [i_3]), 29300)))))));
                        var_23 |= -26;
                        var_24 = (min(var_24, 1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
