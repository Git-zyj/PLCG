/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((113 ? 47 : 1))) && var_0));
                arr_5 [i_0 + 4] [i_0 + 2] [i_0 + 4] = arr_2 [i_0] [i_0];

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 = max(-2512, (min((max(21265, 1)), (arr_7 [i_1 + 1] [i_1 - 1] [i_1] [i_1]))));
                                var_13 = (max((((var_7 ? 1880721556 : var_7))), (((((1 ? 1 : var_1))) ? 1 : ((254 ? var_3 : var_6))))));
                                var_14 += 1;
                            }
                        }
                    }
                    var_15 = (max((var_5 == 60), (min(1, 1))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_16 += ((((1 ? (arr_7 [i_0] [i_1 - 2] [i_0] [i_0]) : var_1)) >= ((1 ? var_10 : (arr_10 [i_0 + 4])))));
                    arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((((1 ? 8423 : var_3))));
                }
                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_17 += (min(var_5, (((!(arr_0 [i_0]))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] = (((min((arr_10 [i_0 + 2]), (((arr_20 [i_0] [i_1] [i_6 - 1] [i_7]) ? var_8 : (arr_13 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3])))))) ? ((((var_2 <= ((var_7 ? var_8 : 209)))))) : ((var_2 * (max(var_4, var_5)))));
                                var_18 += (((((min(var_0, (arr_11 [i_0] [i_7] [i_7]))))) ? var_4 : ((((var_5 ? 58 : 1))))));
                                arr_24 [i_8] [i_0] [i_0] [i_1] [i_0] = (min(216, (max(1, ((-24485 ? 1432859247 : 252))))));
                            }
                        }
                    }
                    var_19 = var_5;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_20 += 3855153751;
                    var_21 = (((arr_6 [i_0] [i_1 - 2] [i_0 + 3]) == (arr_20 [i_0] [i_1 + 1] [i_9] [i_1 - 1])));
                    var_22 += (var_5 ? (arr_9 [i_0] [i_1] [i_9] [i_9]) : 1);
                    arr_27 [i_0] [i_1] [i_0] [i_1] = ((-27585 ? var_5 : 37033));
                    var_23 = (!var_10);
                }
            }
        }
    }
    var_24 = (((!var_8) ? (((((max(var_8, 21305))) && -18060))) : (((!((min(var_2, 1))))))));
    #pragma endscop
}
