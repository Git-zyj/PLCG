/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 ^= (max((arr_5 [1] [i_1]), (arr_6 [i_0] [12])));
                var_15 = (min(var_15, ((((~(arr_6 [i_0] [i_1])))))));
                arr_7 [i_0] [i_0] [i_0] = (max((min(var_2, ((max((arr_1 [i_0] [16]), (arr_2 [i_0])))))), ((((((var_5 ? (arr_1 [i_0] [i_1]) : (arr_4 [13])))) ? var_2 : ((((arr_4 [i_0]) ? 44597 : (arr_5 [4] [i_1])))))))));
                arr_8 [i_0] [i_0] = min((((!((min(44597, (arr_6 [i_0] [i_1]))))))), (max((arr_1 [i_0] [11]), 1653242915)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_2 + 3] [i_3] = ((~(!44598)));
                                var_16 *= (((-(((arr_6 [i_3] [7]) ? 2245155076905419297 : (arr_13 [i_0] [i_0] [i_0] [2] [i_0]))))));
                                arr_17 [i_0] [i_1] [i_3] [i_3 - 2] [i_3] = (min((max(44604, 245)), (((!(arr_13 [6] [6] [i_2] [i_3 + 1] [i_2 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
