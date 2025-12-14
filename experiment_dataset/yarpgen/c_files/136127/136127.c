/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
                                arr_11 [i_0] [i_0] [1] [i_3 - 1] [i_4 - 2] [i_0] = ((!((max((max((arr_5 [i_0] [i_2] [i_3 - 2] [i_4 - 1]), -1523138656)), (arr_9 [i_1] [i_2] [15]))))));
                            }
                        }
                    }
                }
                var_19 = ((((+(((arr_5 [i_0] [i_0] [i_0] [i_0]) << (((arr_9 [i_1] [6] [i_0]) - 963112555)))))) - ((-174781127 ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : -174781126))));
                var_20 = (min(var_20, (((+(max(var_5, (((arr_2 [i_0] [i_1]) ? var_4 : (arr_3 [i_0] [i_0]))))))))));
                arr_12 [i_1] [i_0] [i_0] = min((((((((arr_7 [i_1] [i_1] [i_0] [5] [i_0]) * var_7))) >= var_11))), (arr_4 [i_0]));
                var_21 += (arr_7 [i_0] [i_0] [i_0] [i_0] [i_1]);
            }
        }
    }
    var_22 = var_5;

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_23 += (max((arr_13 [i_5] [i_5]), ((((min((arr_14 [1]), var_11))) / (arr_13 [1] [3])))));
        var_24 = var_7;
        var_25 = ((((+(((arr_13 [i_5] [i_5]) ^ var_14))))) ? (~var_5) : ((((((!(arr_13 [i_5] [i_5]))))) & 174781126)));
        var_26 = (((var_15 / var_1) ? (((arr_13 [i_5] [i_5]) ? (221 / -174781126) : ((-174781126 / (arr_14 [i_5]))))) : (arr_14 [i_5])));
    }
    #pragma endscop
}
