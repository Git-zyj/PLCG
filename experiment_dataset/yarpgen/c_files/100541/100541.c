/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_0, var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (((arr_3 [16] [16] [16]) ^ 1565506018046043759));
                var_13 = (min(var_7, (((var_5 > var_9) ? (max(var_0, 8583844258119504497)) : (arr_0 [i_0])))));
                var_14 = var_8;
                var_15 = (arr_2 [i_0 + 4] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_16 = var_7;
                arr_9 [i_2] [i_2] [0] = min((arr_8 [i_3] [i_3 - 1] [i_3 - 1]), (arr_8 [i_2] [0] [i_3 - 1]));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 += (max(((max(59535, (!var_4)))), (((!4831739979718698895) * (~2396681923)))));
                            arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (min((min((((28565 ? var_7 : 2396681923))), (arr_15 [i_2] [7] [3] [3] [i_4]))), (((!(~1898285373))))));
                            var_18 = ((((max(((var_5 ? (arr_3 [i_5] [i_3 - 1] [20]) : var_1)), (arr_4 [i_2] [0])))) && ((min(var_6, (~var_1))))));
                            var_19 = (min(var_19, ((((-(arr_12 [i_4] [i_3 - 1] [i_4] [i_3 - 1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
