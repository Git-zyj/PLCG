/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-(~-1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_13 [i_3] [i_1] [i_2] [i_3] = 2518152300317096631;
                                var_12 |= min(5, -1);
                                var_13 = ((63 ? (arr_7 [i_0] [i_1] [i_2] [i_4]) : -0));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                arr_16 [i_3] [i_3] = (~13924981435235626174);
                                var_14 = -18446744073709551602;
                                arr_17 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [i_3] = (((((((13 ? 0 : -31179))) ? 9223372036854775807 : 65535)) >> ((255 ? 1 : 65535))));
                                arr_18 [i_3] [i_1] [i_3] = ((17296237288157358306 ? 0 : 0));
                                var_15 |= (~var_3);
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_3] [i_0] [i_0] |= (((((-7 ? 46950 : 18446744073709551615))) ? (((((65281 << (var_1 - 44255)))) ? 1 : ((0 ? -29339 : 4786653279934418106)))) : 65535));
                                arr_23 [i_1] [i_1] [i_2] [6] [i_6] [i_2] [i_3] = ((1 | 0) & (((-1906884542679485849 ? 1 : (arr_1 [i_2])))));
                            }
                            arr_24 [i_2] [i_2] [i_3] [i_2] = ((((((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? var_9 : (arr_4 [i_1 + 1] [i_1])))) || -7752));
                            arr_25 [i_3] [i_1] = ((-((399971791680707076 ? ((max(38563, 11270))) : 3))));
                            var_16 = (min(var_16, var_6));
                            arr_26 [i_0] [i_3] [i_0] [i_0] [1] = 149084831;
                        }
                    }
                }
                arr_27 [i_1 - 2] [i_0] [i_0] = ((((!(arr_15 [i_1 - 2])))));
            }
        }
    }
    var_17 = ((((max(65515, 92))) ? var_5 : var_7));
    var_18 = ((((((2718002998 ? var_5 : var_4)))) ? (min(-1, 1906884542679485849)) : (((((max(var_7, 23500))) ? 255 : (65515 | var_10))))));
    var_19 = ((~((var_0 ? (3 | var_6) : 25))));
    #pragma endscop
}
