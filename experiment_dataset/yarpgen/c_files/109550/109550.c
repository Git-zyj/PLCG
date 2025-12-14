/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] &= (max((48108 <= -7), (arr_6 [i_0] [i_1] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = ((!((((((17427 >> (48 - 46)))) ? 60762 : 3307654514)))));
                                var_15 = (max(var_15, (((((var_10 ? -197 : 48108))) ? ((-7 ? -240248579 : 17428)) : (max((((arr_11 [i_0] [i_1] [i_2] [6]) ? 17427 : 17427)), var_12))))));
                            }
                        }
                    }
                    arr_14 [i_0] [16] |= (((max(-4278, (arr_9 [i_0] [i_0] [i_2]))) == (arr_4 [i_0] [i_0] [i_2])));
                }
            }
        }
    }
    var_16 = (var_0 / var_11);
    var_17 += (((var_2 ? var_2 : -7190)));
    #pragma endscop
}
