/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 -= (arr_2 [i_0] [7] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = (arr_5 [i_0] [i_1]);
                            arr_10 [i_2] [i_0] [i_2] [i_3] [i_2] = ((-(max(var_0, (arr_1 [i_2] [i_3])))));
                        }
                    }
                }
                var_12 += ((var_3 ? (62 / -112) : (arr_3 [i_1])));
            }
        }
    }
    var_13 = (((!var_7) << (var_0 - 4245657507660482549)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                arr_17 [i_4] = ((~var_4) != var_0);
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_14 = ((-65 && ((((arr_12 [i_4]) << ((((min(var_1, 42))) - 42)))))));
                            arr_23 [i_4] [i_5] [i_6] [i_7] = (((arr_20 [13] [i_5] [i_5] [i_4]) ? var_10 : var_4));
                            var_15 = (-((2863698683135294729 / ((9899434242561624156 - (arr_20 [i_4] [i_5] [i_6] [i_4]))))));
                            var_16 = (arr_21 [i_4] [i_5] [1] [i_4]);
                            var_17 += (((((((((arr_20 [i_4] [i_7] [i_6 + 1] [4]) << (var_4 - 127)))) ^ (arr_19 [i_7] [i_6 + 1] [i_5] [i_4])))) ? 77 : var_8));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (((max((min((arr_20 [i_4] [i_8 + 2] [i_8 + 1] [i_4]), var_0)), ((((arr_27 [i_4] [0] [i_9] [i_4] [i_5]) == (arr_15 [i_4] [i_4])))))) - (min((max((arr_27 [i_9] [i_4] [1] [i_4] [i_4]), var_0)), var_2))));

                            for (int i_10 = 0; i_10 < 19;i_10 += 1)
                            {
                                arr_33 [i_4] [i_9] [2] [i_8 + 2] [7] [i_4] [i_4] = (((arr_15 [i_4] [i_4]) ? ((((arr_18 [i_4] [i_8 - 2] [i_4]) ? ((var_6 ? var_3 : var_7)) : var_7))) : ((var_9 / (max(var_0, (arr_31 [i_10] [i_9] [i_8 - 1] [i_4] [i_4] [i_4])))))));
                                arr_34 [11] [i_5] [i_4] [i_9] [i_10] [i_8] = (((arr_16 [i_4] [i_4] [i_9]) % var_1));
                            }
                            for (int i_11 = 0; i_11 < 19;i_11 += 1)
                            {
                                arr_37 [i_4] [i_9] [1] [1] [i_5] [i_5] = (max((((arr_11 [i_8 - 2]) & (arr_32 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [5]))), var_8));
                                arr_38 [i_5] [i_4] [i_8 - 2] [0] = ((((max(var_1, (arr_22 [i_11] [i_9] [i_5] [i_4])))) ? ((max((arr_20 [i_4] [i_4] [i_4] [i_4]), (arr_20 [i_4] [i_9] [12] [i_4])))) : (((arr_20 [i_4] [i_11] [i_11] [i_4]) * (arr_22 [i_8 + 1] [1] [i_8 + 1] [i_5])))));
                            }
                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                            {
                                arr_41 [15] [i_5] [i_4] [i_9] [i_12] = ((var_6 ? (arr_35 [i_8 + 1] [i_8] [i_8 + 1] [1]) : (var_7 / var_10)));
                                var_18 = (max(var_18, var_7));
                                arr_42 [i_12] [i_12] [i_4] [i_4] [i_5] [i_4] = var_6;
                                arr_43 [i_4] [5] [i_8 - 1] [i_5] [18] [i_4] = arr_24 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 2];
                            }
                            for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                            {
                                var_19 = 772774673012279845;
                                arr_48 [i_4] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_5, (~var_10)));
    var_21 = (var_6 > (max(var_2, (var_6 & var_0))));
    #pragma endscop
}
