/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_13 = ((-((1 ? ((10939 ? var_2 : var_6)) : 2084117545))));
                        var_14 = (min((min((arr_11 [i_0 + 3] [i_3 + 1] [i_3 - 4]), (arr_1 [i_0 + 3]))), (((arr_11 [i_0 + 2] [i_3 - 3] [i_3 - 4]) ? var_1 : (arr_11 [i_0 + 1] [i_3 - 3] [i_3 - 1])))));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_15 |= -99;
                        var_16 = var_5;
                    }
                    var_17 = ((1 ? -1024 : 1));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_16 [i_0 + 3] [i_1] [i_1] [i_0] [i_5] = 8487;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_18 = -1444356261;
                            arr_20 [i_0] [i_1] [i_1] [i_5] [i_5] [i_6] &= ((((var_9 ? (min((arr_8 [i_2] [i_5] [i_0]), var_9)) : (arr_0 [i_5]))) / (((((((1 ? var_7 : var_9))) && -61))))));
                            var_19 = var_6;
                            var_20 = var_12;
                            var_21 = ((((((min((arr_11 [6] [1] [i_0]), (arr_0 [i_2])))) || (arr_5 [i_0] [i_0] [i_2] [i_0]))) ? (((((var_12 ? 1 : 36))) ? 10932 : (((arr_19 [i_2] [i_2] [i_2] [i_2]) ? (arr_11 [i_0] [i_0] [i_0]) : var_10)))) : ((min((~var_11), (arr_15 [i_0 + 2]))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_22 = (((((-(arr_8 [i_0] [i_0] [i_0])))) ? (arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 2]) : ((var_3 ? (65528 && var_10) : (10619409549644582297 | var_2)))));
                        var_23 = (arr_8 [i_7] [i_0] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_24 *= (((arr_8 [i_8] [i_8] [i_1]) ? -10619409549644582293 : (((((arr_23 [i_9] [i_9] [i_9] [i_9] [i_9]) ? 1 : 175194903))))));
                                var_25 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (!var_6);
    var_27 = ((var_5 ? var_11 : var_1));
    #pragma endscop
}
