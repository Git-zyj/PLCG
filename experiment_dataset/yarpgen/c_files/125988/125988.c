/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 *= (max((((arr_7 [i_0] [i_1] [14] [i_4]) ^ -90)), (~-91)));
                                var_19 = (max(var_19, (((!((((arr_6 [i_0]) ? ((max(-122, var_12))) : (~2147483647)))))))));
                                var_20 = ((var_11 && ((!((min(91, -122)))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] = max(var_9, (0 / var_8));
                            }
                        }
                    }
                }
                var_21 = (((-42147 / -92) + (var_15 + var_1)));
                var_22 = min((max(269405134, ((var_8 ? (arr_1 [i_1]) : 1)))), (((~(109 & 69)))));
            }
        }
    }
    #pragma endscop
}
