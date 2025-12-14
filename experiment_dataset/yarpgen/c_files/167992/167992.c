/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [1] [i_1] [i_2] [i_2] [i_3] [i_2] = (((var_5 < var_5) || ((var_11 == (((var_13 < (arr_1 [3] [9]))))))));
                                var_18 = (arr_1 [i_3] [i_3]);
                                var_19 = 35;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_16 [i_0] = (arr_10 [i_0] [i_0] [1] [i_5] [i_5] [i_5]);
                    var_20 = ((29327 ? (((((var_2 / (arr_9 [i_0] [i_0] [8])))) ? var_15 : var_4)) : var_8));
                    arr_17 [i_0] [i_1] [i_1] = var_15;
                    arr_18 [10] = ((((((arr_9 [i_1] [i_1] [i_1 + 2]) ? (arr_9 [i_5] [i_0] [i_1 - 2]) : (arr_9 [i_1 - 1] [i_1] [i_1 + 3])))) && var_5));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] [8] [i_6] = (min(118, var_15));
                    arr_23 [i_0] [i_1] = min((((-2083385592 ? 35411 : 112))), var_12);
                    var_21 = (((((arr_21 [i_1] [i_1 + 4] [i_1 + 4] [i_1]) + (arr_15 [2] [i_1 - 2] [i_0] [i_0]))) ^ (1 | var_3)));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_27 [i_1] [i_1 + 1] [0] [i_1] = (((~var_9) ? (((arr_20 [i_0] [i_0] [i_1] [i_0]) | (arr_8 [i_1 + 3] [i_1 + 2] [i_7] [i_7] [i_7]))) : (((var_2 ? var_0 : ((0 + (arr_9 [i_0] [i_0] [i_0]))))))));
                    var_22 = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [1]) ? (min((arr_10 [i_0] [i_0] [1] [i_7] [i_7] [i_0]), (arr_10 [i_0] [i_1 + 4] [i_7] [i_1 + 4] [i_0] [i_1 + 3]))) : (arr_10 [i_0] [i_1 - 2] [i_7] [i_1] [i_1 + 4] [i_1 + 3])));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_23 = (min(var_23, ((min(18446744073709551610, ((min(-4799018694719645243, 482779950))))))));
                        var_24 = (~(~var_5));
                        var_25 *= ((!(5588801800975133404 - 2710852028)));
                    }
                }
            }
        }
    }
    var_26 = ((var_16 ? var_9 : (((var_14 + 8249540628064811319) ? var_9 : var_16))));
    #pragma endscop
}
