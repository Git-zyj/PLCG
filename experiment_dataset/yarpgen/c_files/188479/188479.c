/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((!((min(var_0, 6759130469717728301)))));
    var_17 = (-11687613603991823314 || var_2);
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-(~var_9)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0] [i_2] [12] [i_0] [i_0] = ((!(((+((max((arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [9] [i_1]), (arr_2 [11])))))))));
                                arr_15 [7] [i_1 - 4] [5] [i_1] [5] [i_0] = var_0;
                                var_19 = ((((var_14 / 1238335260) / (((-(arr_2 [i_4])))))));
                                arr_16 [i_0] = ((~((-(max(-1238335260, (arr_3 [i_0] [i_4 - 1])))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = ((((((var_7 ? var_7 : (arr_2 [i_1]))))) ? (((min(0, 7680)))) : (~-9223372036854775801)));
            }
        }
    }
    #pragma endscop
}
