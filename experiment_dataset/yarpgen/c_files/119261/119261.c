/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_10 = (min(var_7, -350));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_11 = (~-350);
                        var_12 = (8727242976905121660 ? (((!((((arr_7 [i_2] [i_1] [i_0]) ? var_1 : var_6)))))) : ((var_8 | (arr_2 [i_0]))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_13 = (min(((((arr_1 [i_2]) ? (arr_10 [i_0]) : 2621))), ((var_6 - (arr_10 [i_3])))));
                            var_14 *= ((62934 ? 46539 : 118));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_15 = var_4;
                            var_16 = var_1;
                        }

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_18 [i_6] [i_3] [i_2] [i_2] [i_0] [i_1] [i_0] = ((!(((!var_5) < (arr_1 [i_0])))));
                            arr_19 [i_3] [i_6] [i_0] [i_3] [i_2] [i_1] [i_0] = (max((min(((-6289083436478743516 ? var_0 : var_0)), (arr_0 [i_0]))), ((var_3 ? -26169 : (arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_6])))));
                            var_17 = var_8;
                            var_18 = (arr_14 [i_3]);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_23 [i_7] [i_7] [i_7] [i_7] [i_7] = ((((((arr_8 [i_7] [i_3] [19] [i_1] [i_0]) ? -26169 : (arr_21 [20] [i_1] [i_1] [i_3] [1])))) | (((4630754650464740092 / -15148) % 26173))));
                            var_19 *= ((~var_4) ? ((((62934 / var_6) || -1728274754602924635))) : ((((arr_21 [i_0] [i_0] [i_2] [i_3] [i_7]) || (arr_3 [i_1])))));
                        }
                    }
                }
            }
        }
        arr_24 [i_0] = 2601;
    }
    var_20 = ((-var_0 == (((((var_9 ? var_4 : var_7)) >= ((var_0 << (926808068 - 926808059))))))));
    #pragma endscop
}
