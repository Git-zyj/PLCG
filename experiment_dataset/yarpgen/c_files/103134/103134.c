/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, -39));
                var_16 = (arr_0 [i_0 + 2]);
            }
        }
    }
    var_17 *= var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_18 = 105;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 = 15085536006984037420;
                            var_20 += ((var_9 ? var_6 : (max((max(1167766619, var_10)), 127))));
                            var_21 = ((((max((129 && 1), 108))) ? (arr_17 [i_5] [i_5]) : ((min(-30055, -30045)))));
                        }
                    }
                }
                var_22 *= (((arr_1 [i_2]) ? 4547 : ((1032360214501358625 ? ((var_6 ? 155 : 144)) : ((133 ? var_13 : 129))))));
                var_23 = (max(-2327, (var_11 >> -29)));
            }
        }
    }
    #pragma endscop
}
