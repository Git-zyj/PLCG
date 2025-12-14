/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(~var_17)));
    var_19 = (((~32767) ? (~1928988359045916673) : ((max((var_17 | 118), var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 += (((((arr_2 [i_0]) << (((arr_2 [i_0]) - 7940633544309943031)))) & (arr_2 [i_0])));
                arr_6 [i_0] [i_0] = (max(((var_7 + ((var_10 ? 2751561612128585887 : var_3)))), (((var_15 ? (7436481708910180909 && var_2) : 25947)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = (((((-(arr_1 [i_1])))) ? (((!((min(-28951, (arr_5 [19] [i_3 + 1] [i_0]))))))) : 136));
                                arr_16 [i_0] [i_0] [i_1] [1] [i_1] [i_3] [i_4] &= (min((arr_10 [i_2] [i_2 + 3] [i_3 + 1] [i_3 + 1]), var_5));
                            }
                        }
                    }
                }
                var_22 = (var_1 | 5438824010726382021);
                var_23 = (min(((var_0 & (arr_3 [i_0]))), (((arr_3 [i_1]) | (arr_3 [i_0])))));
            }
        }
    }
    #pragma endscop
}
