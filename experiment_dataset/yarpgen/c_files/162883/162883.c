/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 + 2] [i_0] = (((arr_1 [i_0] [i_4]) ? (min((arr_2 [i_2]), ((220 ? 255 : (arr_2 [i_3]))))) : ((min(var_4, (arr_8 [i_0]))))));
                                var_11 = (min(var_11, var_8));
                            }
                        }
                    }
                }
                var_12 = -var_0;
                var_13 = (arr_2 [i_0 - 2]);

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_14 = ((!(arr_19 [i_5])));
                                var_15 = (!((min(var_9, (arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 4])))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_5] [i_5] = (((max(var_10, -891795870))) ? 1 : (((!(!14)))));

                        for (int i_9 = 4; i_9 < 15;i_9 += 1)
                        {
                            var_16 = ((-var_3 & ((((11 ? var_10 : (arr_12 [1] [i_8] [i_5] [i_0] [i_0]))) | -1))));
                            arr_29 [i_9 - 2] [i_5] [i_8] [1] [i_5] [i_0] = var_8;
                            var_17 = (((arr_17 [i_5] [i_8]) ? (arr_24 [i_9] [i_8] [i_5] [i_5] [i_1] [i_0]) : ((((arr_1 [i_9 - 2] [i_9 + 1]) ? (((~(arr_27 [i_9] [i_8])))) : (~31))))));
                            var_18 = (min((((~2) - (arr_27 [i_1] [i_9]))), -237));
                        }
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (((!(arr_1 [1] [1]))))));
                        var_20 *= (max(var_3, ((-(arr_19 [i_10])))));
                    }
                }
            }
        }
    }
    var_21 = ((((52 ? var_7 : var_5))));
    #pragma endscop
}
