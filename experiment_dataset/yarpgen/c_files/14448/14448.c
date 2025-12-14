/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_10 ? ((var_5 ? 2807210636849957472 : var_3) : ((min(var_12, var_2)))))));
    var_16 = (min(var_16, (((((((min(-9135, 0))) || (((var_0 ? -1 : var_1))))) ? ((max((max(4317464683329212448, var_13)), (var_4 > var_5)))) : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1] = (arr_1 [i_0]);
                var_17 = (arr_7 [i_0] [i_1] [i_0]);

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    var_18 = (((arr_4 [2] [i_0]) ? (((var_13 ? (arr_11 [i_0] [i_1]) : (((((arr_11 [i_0] [i_0]) <= 0))))))) : var_11));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = ((!((max(var_10, (-32767 - 1))))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] [i_4] = (max(((min((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_13 [i_0] [i_1 - 1] [i_1] [i_1] [i_1])))), (arr_9 [i_0 + 2] [1])));
                                arr_20 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 4] = var_0;
                                var_20 = ((((min((arr_10 [i_1] [i_3] [i_1] [i_0]), (arr_10 [i_0] [i_2] [i_2] [i_4])))) ? (arr_10 [i_0 + 4] [i_0 + 4] [i_3] [i_4]) : (((arr_10 [i_4] [i_3] [i_2] [i_0 + 3]) ? var_3 : (arr_10 [i_0] [1] [0] [i_4])))));
                            }
                        }
                    }
                    var_21 = (min(((((max(126976, 2))) ? 126976 : (((arr_4 [i_0] [i_0]) ? var_9 : (arr_0 [8]))))), ((min((arr_11 [i_0] [i_0]), (((1 ? (arr_9 [i_0] [i_1]) : (arr_0 [i_1])))))))));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_22 += (((arr_15 [i_0] [i_5] [i_5] [16]) * ((((arr_11 [i_5] [i_1]) ? (((((arr_10 [i_0 + 3] [i_0 + 3] [17] [i_0]) == var_5)))) : (arr_7 [i_5] [i_1] [i_5]))))));
                    var_23 += (((((arr_0 [i_0 + 3]) - (arr_0 [i_0 + 2]))) * (arr_0 [i_0 + 4])));
                }
            }
        }
    }
    var_24 = (((((max(var_12, var_6))) ? var_10 : (min(var_6, var_14)))));
    #pragma endscop
}
