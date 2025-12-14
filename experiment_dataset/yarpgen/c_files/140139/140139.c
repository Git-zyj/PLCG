/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_18 -= (((((~(((arr_2 [i_1] [i_0]) & 4010346807))))) | (((~4010346807) | (((arr_4 [i_0] [i_0] [i_0]) ? 101 : var_17))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((((((((arr_6 [i_0] [2]) < (arr_7 [i_3] [i_2]))))) > (((~4010346804) ? 284620488 : 0)))))));
                            var_20 = (arr_1 [i_1 - 1]);
                            var_21 = 101;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_6] = (max((((-(arr_7 [i_0] [i_0])))), ((64 ? (arr_9 [i_0] [i_1] [i_1 + 1] [i_5] [i_6]) : (arr_9 [i_1] [5] [i_1 - 1] [i_6] [i_6])))));
                                var_22 = (((((((arr_13 [i_0]) * (arr_7 [i_0] [0]))))) ? ((min((arr_4 [i_4 + 2] [i_5 - 1] [i_1 + 2]), (arr_4 [i_4 + 1] [i_5 + 1] [i_1 + 1])))) : ((((~(arr_13 [i_0]))) | ((min((arr_16 [i_0] [i_1 - 1] [i_1] [i_5] [i_0] [i_6]), 30857)))))));
                                var_23 = (((((((arr_10 [i_0]) - var_11))) ? -3621041642 : (((arr_9 [i_0] [i_1] [i_4] [i_5] [i_6]) ? (arr_5 [i_1] [i_1] [i_5 + 2]) : 284620491)))) >= ((((3621041639 || (((517219677 >> (1172812487 - 1172812482)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (!var_16);
    var_25 = ((-(min(var_11, var_1))));
    var_26 = min(((max(((var_1 ? var_4 : var_5)), 86))), (min((var_5 > 1), (max(var_14, var_16)))));
    #pragma endscop
}
