/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~2147483647);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((((!var_7) ? ((var_2 ? var_1 : (arr_0 [i_0 + 1] [i_1]))) : (((!(arr_1 [i_0]))))))) ? ((((!var_2) && (!var_8)))) : ((((arr_3 [i_0] [i_1]) || 1))))))));
                arr_6 [i_0] [i_1] [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 -= (((~3456) ? (arr_3 [i_0] [i_3]) : var_8));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_15 = (min(var_15, ((max((((((-(arr_5 [11])))) / (((arr_10 [i_0] [i_1 - 1] [i_2] [i_3 + 1] [i_4]) ? var_8 : var_3)))), ((((var_5 * var_6) ? (((arr_1 [i_1]) * (arr_7 [i_0] [i_1 - 2] [i_3]))) : ((var_11 + (arr_9 [i_3] [i_1 + 1] [5] [i_1])))))))))));
                                arr_15 [i_0] = (arr_8 [i_1 - 4] [i_1 - 4] [i_3] [i_4]);
                                var_16 = (min(var_16, ((((((var_7 + (min(var_9, var_11))))) ? (arr_5 [i_3]) : ((((var_9 | var_6) ? (arr_8 [0] [i_0 + 2] [i_2 + 3] [i_0 + 2]) : ((var_0 << (var_6 + 15956)))))))))));
                                var_17 = (max(var_17, var_7));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                var_18 = (max(var_18, (arr_3 [i_0] [13])));
                                var_19 = (max(var_19, ((min((((!(((arr_1 [i_5]) && (arr_19 [i_3] [i_1 - 2])))))), (((((arr_7 [i_0] [i_2] [i_5]) / var_1)) << (((arr_1 [i_0 + 1]) - 30490)))))))));
                                var_20 = ((((((4294967295 ? -4794122231638699852 : var_9)) / ((min((arr_14 [i_0] [1] [i_0] [i_0] [i_2 + 4]), (arr_19 [6] [10]))))))) ? ((var_10 ? (var_4 && var_6) : (arr_8 [i_3] [i_3] [i_3 - 2] [i_3]))) : -var_2);
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                var_21 = (min(var_21, (((-((((((arr_16 [i_0] [i_0] [i_0] [i_0 + 1] [13] [7]) | (arr_11 [i_0] [1] [i_2] [i_3] [i_6])))) ? (!var_0) : (((arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) | var_5)))))))));
                                var_22 = (min(var_22, -var_4));
                            }
                        }
                    }
                }
                var_23 *= ((((~((var_11 ? (arr_5 [1]) : (arr_5 [13]))))) == (((((var_8 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0 - 1] [i_1 - 1])))) ? (arr_2 [i_1]) : (arr_10 [i_0] [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_1 - 4])))));
            }
        }
    }
    var_24 = var_5;
    var_25 = (((((var_7 - ((var_5 ? var_9 : var_0))))) ? var_8 : (!127)));
    #pragma endscop
}
