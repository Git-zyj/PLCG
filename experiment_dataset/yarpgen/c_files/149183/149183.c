/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_0;
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 &= (arr_12 [i_2 - 2] [i_1] [i_1]);
                                var_16 = (((min((min((arr_0 [i_4]), var_1)), var_4))) ? ((((!((min((arr_2 [1]), var_5))))))) : (252 ^ 3213531183));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = (((min((arr_1 [i_2]), 37675)) / (arr_2 [i_1])));
                                arr_15 [i_3] [i_3] |= (-30904 >= 315601726);
                                arr_16 [10] [i_1] [i_0] [2] [i_4] = 35184372088830;
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_1] = (var_10 ? (((((max(-30909, 1081436123)) < (arr_3 [i_1]))))) : (((arr_1 [i_1]) ? (arr_8 [i_0] [i_1] [i_1]) : (((arr_8 [i_0] [i_1] [i_1]) ? 315601730 : 0)))));
            }
        }
    }
    #pragma endscop
}
