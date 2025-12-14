/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max((((((17077889092857049854 ? var_18 : 250))) ? var_15 : ((min(var_10, var_5))))), (var_6 | var_15));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] |= (1227 ? -1239 : (((arr_2 [i_0 + 2] [i_1]) + 12266)));
                var_21 = (max(var_21, ((((((-(arr_4 [i_0 + 2])))) ? (max((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0] [i_0 - 1]))) : var_6)))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_22 += 65529;
                                var_23 ^= (((128 > 65524) || (arr_7 [i_0 - 3] [i_1] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 &= ((-(max(199, -1))));
    #pragma endscop
}
