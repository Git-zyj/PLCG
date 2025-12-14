/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((-(!var_5)))), (((((63647 ? 8 : 0))) / -1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (((arr_4 [i_0] [i_1]) < ((((arr_4 [i_0 - 2] [i_0 - 1]) < (arr_4 [i_0 + 2] [i_0 + 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((max(((18359713028491909525 ? var_5 : -9)), (1 | var_3))))));
                                var_15 *= -9;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_16 *= arr_1 [i_0];

                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_17 = ((((((((arr_20 [i_5] [i_0] [i_5] [i_5]) ? 8 : var_4))) ? (((var_10 && (arr_1 [1])))) : (arr_1 [i_0]))) == var_4));
                                var_18 = 1440;
                                var_19 = (((((((arr_0 [i_0 + 1] [i_0 + 1]) < 7)))) + ((((min((arr_23 [i_0] [i_1] [i_5] [i_6] [i_1] [i_1]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 2])))) ? (arr_17 [i_5] [i_1]) : (((arr_13 [i_0] [i_0] [i_5] [i_6] [i_5]) ? (arr_13 [i_0] [i_1] [i_5] [i_1] [i_7]) : -4776383345491623286))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 25;i_8 += 1)
                            {
                                var_20 = (max(var_20, var_5));
                                var_21 += (((((arr_19 [i_1] [i_5] [14] [i_8]) || (arr_19 [i_0] [i_0] [i_5] [i_6]))) && ((!(arr_25 [i_0] [i_0] [i_0] [i_0])))));
                                var_22 = (arr_25 [i_0] [i_1] [i_5] [i_5]);
                                var_23 = (((((16 >> (((arr_16 [i_0 - 1] [i_0 - 1] [i_0]) - 64571))))) | (var_6 + -25)));
                            }
                            for (int i_9 = 3; i_9 < 24;i_9 += 1)
                            {
                                var_24 = (max(var_24, ((((arr_26 [i_9] [i_9 + 1] [i_0 + 2] [i_0] [i_0]) ? ((-(((arr_19 [i_1] [10] [10] [11]) ? (arr_15 [i_1] [2] [i_1] [2]) : 8)))) : ((((((-(arr_29 [5] [13] [i_6] [i_5] [i_5] [i_1] [i_0])))) ? ((min(var_2, var_8))) : var_0))))))));
                                var_25 = (((((66 ? (arr_9 [i_1] [i_1] [i_6] [i_6] [i_1] [i_9]) : 1))) ? (min(-4776383345491623275, (arr_12 [i_5] [i_1] [i_0 - 2] [i_5] [i_9 - 1] [i_1] [i_0 - 2]))) : (!var_9)));
                                var_26 = 27766;
                                var_27 = ((!(((arr_27 [i_9 - 2]) || 18446744073709551610))));
                            }
                            var_28 = (min(var_28, (-127 - 1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
