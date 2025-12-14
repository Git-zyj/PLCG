/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123370
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
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, var_1));
                                var_18 |= var_7;
                            }
                        }
                    }
                    var_19 = ((-(((arr_7 [i_1] [i_1] [i_2]) & (arr_7 [i_1] [i_1] [i_2])))));
                    var_20 = ((((min((arr_6 [i_0] [i_1] [i_0] [i_1] [i_1] [5]), ((((arr_5 [i_1] [i_1]) && (arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2]))))))) && ((min((((arr_7 [i_1] [i_1] [18]) ? (arr_4 [i_0] [i_1] [i_2] [i_2]) : (arr_6 [i_2] [i_2] [i_2] [i_1] [7] [i_0]))), 1745483836)))));
                }
            }
        }
    }
    var_21 -= var_11;

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_22 = ((((((arr_9 [i_5] [i_5] [i_5] [18] [i_5] [15]) ^ (!var_11)))) ? (((((min((arr_12 [i_5]), var_11))) && -1745483840))) : (((!((min(1745483850, -120))))))));
        var_23 = ((((arr_9 [i_5] [12] [i_5] [i_5] [i_5] [i_5]) ? (((1745483836 ? -1911001368 : 398748243))) : (((arr_3 [8] [21]) / (arr_5 [i_5] [19]))))));
    }
    #pragma endscop
}
