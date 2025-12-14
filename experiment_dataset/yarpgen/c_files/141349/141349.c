/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1 - 2] [i_1 - 1] [i_0] = (max((arr_3 [i_0]), ((((min(var_9, -1568330574))) ? -486257717 : (arr_5 [i_0] [i_0] [i_0])))));
                arr_7 [i_0] [i_1] = ((var_1 ? ((((((arr_1 [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0])))) ? var_0 : (min(3754392772, 540574523)))) : (max((arr_1 [i_1 - 1]), ((var_9 ? 540574510 : 1792))))));
            }
        }
    }
    var_13 = 17592152489984;
    var_14 = var_3;
    var_15 = ((var_7 ? (1 / 14859) : (((~var_3) % (~var_11)))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                {
                    var_16 &= var_11;
                    var_17 = 1821199107;
                    var_18 = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] = (min(1, -5480060952677304465));
                                arr_22 [i_2] [i_6] [i_2] [i_2 + 1] [i_2] = (max(2147483647, 3754392772));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
