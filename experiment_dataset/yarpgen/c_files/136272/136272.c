/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                var_16 = 122;
                                arr_13 [i_4] [i_1] [i_2] [i_1] [3] = ((-1 || ((max(var_7, (arr_11 [i_0] [i_0 + 1] [i_0 + 3] [14] [9]))))));
                                arr_14 [i_1] [i_1] = (((arr_9 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1]) ? (min((arr_9 [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_0 - 1]), 367143421)) : (min((arr_9 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1]), (arr_9 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                var_17 = ((var_4 ? var_14 : (arr_4 [11] [i_1])));
                                arr_17 [i_2] [i_3] [i_1] = ((1285116999237678351 ? 1285116999237678342 : -130471688));
                                arr_18 [i_0 - 1] [13] [i_1] [5] [i_1] [i_3] [i_5] = var_3;
                            }
                            var_18 = (max(17161627074471873265, 62));
                        }
                    }
                }
                arr_19 [i_0] [i_1] [i_1] = (arr_6 [i_0 + 3] [i_1] [i_1]);
                arr_20 [12] [i_1] = ((((min((var_2 ^ var_10), (arr_1 [i_0 - 1])))) ? ((-((2073364411160038822 ? var_5 : 1118027516)))) : (max(38334122, (min(var_13, var_6))))));

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_23 [i_0] [i_1] = (min(var_6, (min((((var_6 ? 0 : var_9))), (arr_11 [i_0] [i_0 + 3] [i_0] [i_1] [i_0 + 3])))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_19 = ((((min(var_0, (max(17161627074471873265, var_12))))) ? ((max(var_15, (var_5 && var_4)))) : (min(var_7, (((38520 ? var_14 : var_3)))))));
                                var_20 = (1285116999237678323 ^ 32767);
                                arr_31 [i_1] [i_1] [i_1] [i_0] [i_6] [i_1] [i_0] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, var_5));
    var_22 = var_1;
    var_23 = ((var_6 ? (max(1285116999237678339, 3)) : ((max(var_4, (-2147483647 - 1))))));
    #pragma endscop
}
