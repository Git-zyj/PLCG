/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((((min((var_4 < var_4), var_4))) ? var_10 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((arr_2 [i_1 - 1]) < ((-((8347289429865439141 ? 71 : (arr_4 [i_2])))))))));
                            var_16 *= ((((((var_1 ? var_8 : 65535))) ? (arr_9 [i_0] [i_1] [i_2 + 3] [i_2] [i_2 + 3]) : ((1 ? 1 : var_0)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_17 = (var_12 < 15200122565623220566);
                                arr_17 [i_4] = ((~((var_10 ? (var_11 / -1558851130913906469) : 31))));
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_18 = var_10;
                                var_19 = (!var_0);
                                var_20 = ((var_0 ? (30 - 65520) : 1));
                                var_21 = ((var_2 ? (((!(arr_18 [i_0] [i_0] [i_8 + 1])))) : ((((min(1, var_8))) ? (1 * var_2) : var_11))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_22 = (((3671073073 ? ((-(arr_5 [i_0] [i_1] [i_10] [i_11]))) : (arr_15 [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))) / var_9);
                                arr_31 [i_7] [i_10] [i_7] [i_1 + 1] [i_7] = var_8;
                                var_23 = -1279601646;
                                var_24 = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_25 = (max(((((((var_1 ? 65524 : var_8))) ? ((102 ? var_1 : var_1)) : (((arr_5 [i_1 - 2] [i_12 - 4] [i_0] [i_1 - 2]) ? 58443 : -12486))))), var_7));
                                var_26 = (max(var_26, (((1 ? 0 : ((-47569 ? 536870911 : ((1770526078 ? 41 : 0)))))))));
                                var_27 = 8781869788801039372;
                            }
                        }
                    }
                }
                arr_38 [i_1 - 3] [i_1 - 4] [i_0] = var_3;
            }
        }
    }
    #pragma endscop
}
