/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_20 = (min((((max((arr_4 [i_0 - 1] [i_0 - 1] [8]), (arr_0 [i_1]))))), (((arr_5 [i_0]) ? (arr_1 [i_0]) : (((((arr_1 [i_2 - 1]) && (arr_2 [i_0] [i_0])))))))));
                    var_21 = ((var_5 * (arr_3 [i_2])));
                }
                var_22 = var_4;
                var_23 = (((~var_14) ? (min(1, 8220164026986859919)) : (((((arr_1 [i_0 - 1]) || (arr_1 [1])))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_24 = ((1 ? 1 : 1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_25 *= (((arr_14 [i_0] [i_1 + 1] [i_3] [8] [i_5] [i_0 - 1]) ? (arr_14 [i_0] [i_1 + 1] [i_3] [i_4] [1] [i_0 - 1]) : (arr_14 [i_0] [i_1 + 1] [i_3] [i_1 + 1] [i_5] [i_0 - 1])));
                                var_26 = (((arr_10 [i_1 + 1] [i_3] [i_4] [i_5]) ? (arr_13 [8] [i_1 + 1]) : ((var_16 ? var_18 : var_5))));
                            }
                        }
                    }
                    var_27 = (max(var_27, (((var_16 ? (!var_10) : 1)))));
                    arr_15 [i_0] [i_1 + 1] [i_1] [i_0] = -28692;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_22 [i_6] [i_0] [i_6] [i_7] [0] [0] = ((-(((arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) : var_15))));
                            var_28 ^= (arr_4 [i_0 - 1] [i_0 - 1] [i_6]);
                            arr_23 [i_0] [i_1] [i_0] [i_7] [i_7] = ((var_12 ? (max(((((arr_21 [0] [i_1] [i_1] [i_7]) + var_13))), -var_10)) : var_13));
                        }
                    }
                }
            }
        }
    }
    var_29 |= (max(((-var_13 ? var_13 : (1 - var_3))), var_9));
    var_30 = var_3;
    #pragma endscop
}
