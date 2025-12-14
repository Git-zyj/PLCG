/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 0;
    var_16 = (min(var_8, (((301663061 ? 14739 : 11308)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 += (min(((1 ? 10830067215723816186 : 54)), (max(301663061, 2359269875619717311))));
                                var_18 += (2523354956762691753 <= 16087474198089834304);
                                var_19 += (arr_1 [i_1 + 1]);
                                var_20 = (min(var_20, ((min(-93, 15923389116946859863)))));
                                var_21 = (max((min((arr_13 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_4]), (arr_13 [i_1] [7] [7] [i_3 + 1] [1] [i_4]))), (((arr_13 [i_1 - 1] [i_3] [i_3] [i_3 - 1] [i_4] [i_4]) ? (arr_13 [i_2] [i_2] [i_3 + 1] [i_3 - 1] [i_2] [i_4]) : (arr_13 [1] [1] [i_3] [i_3 - 1] [i_3 - 1] [8])))));
                            }
                        }
                    }
                }
                arr_14 [i_1] = ((((arr_2 [i_1 + 1] [i_1 + 1]) ? 2813393077 : (arr_1 [i_1 + 1]))));
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
