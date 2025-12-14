/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = 32821;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] = (arr_5 [i_0] [i_1 - 2] [i_2]);
                    var_15 = ((((max((1 & 1), (arr_1 [i_0] [i_1])))) & (arr_3 [i_1 - 2] [i_1 - 2])));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_16 = (((arr_12 [i_3] [i_1 - 2]) ? var_8 : (arr_12 [i_1 - 1] [i_1 - 1])));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_3] [i_3] [i_3] [i_0] = 96;
                        arr_18 [i_0] [i_1] [i_1] [i_4] [i_0] = (96 ? ((var_12 ? (arr_14 [i_0] [i_1] [i_4]) : (arr_15 [i_1 + 3] [i_1 - 2] [i_1 + 1] [i_0]))) : (arr_16 [i_0] [i_0] [i_0] [i_0]));

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_17 = arr_5 [i_5] [i_1] [i_0];
                            arr_22 [i_0] [i_1 + 1] [i_0] [i_4] [i_5] = (((arr_21 [i_5] [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1]) && (arr_19 [i_5 - 1] [i_1 - 1] [i_1])));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            var_18 = ((var_9 ? 219 : ((861335121428049943 ? 1 : var_7))));
                            var_19 = 1;
                            var_20 = arr_2 [i_0];
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_21 = (-(arr_5 [i_1 + 2] [i_1 + 2] [i_3]));
                            var_22 = ((((1 ? 0 : 1)) - var_3));
                            var_23 = (!3980);
                            var_24 = (arr_2 [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_33 [i_8] [i_8] [i_8] [i_0] [i_8] [i_8] = (((~1) ? var_11 : (((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_8]) ? (arr_19 [i_4] [i_0] [i_0]) : var_11))));
                            var_25 = ((var_12 ? (arr_8 [i_0] [i_1 + 2] [i_3] [i_0]) : ((~(arr_2 [i_0])))));
                            var_26 = 255;
                        }
                        arr_34 [i_0] [i_1 + 3] [i_1 - 2] [i_1 - 1] [i_0] [i_4] = (((arr_7 [i_1 - 1]) ? 212 : (arr_4 [i_0] [i_0])));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_1 + 3] [i_0] [i_3] [i_9] = -0;
                        var_27 = (arr_9 [i_1 + 3] [i_0] [i_1]);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_28 = (1 * -103);
                        var_29 = (((arr_7 [i_0]) / (arr_9 [i_1 - 2] [i_0] [i_1 + 2])));
                    }
                    arr_42 [i_0] [i_0] [i_0] [i_3] = (((arr_36 [i_1 + 1] [i_1] [i_1 + 1]) ? (arr_26 [i_0] [i_1] [i_3] [i_1] [i_1 - 2]) : ((-(arr_29 [i_0] [i_1 - 2] [i_3])))));
                    arr_43 [i_0] [i_0] [i_3] = (~13004862573556281787);
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_47 [i_0] [i_1] [i_1 - 1] [i_11] = (min((arr_16 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1]), var_12));
                    var_30 = (((((arr_14 [i_0] [i_0] [i_0]) < var_0)) ? ((-(arr_14 [i_0] [i_11] [i_0]))) : ((var_8 % (arr_14 [i_0] [i_0] [i_0])))));

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_51 [i_0] [i_0] = 1;
                        var_31 = (((arr_30 [i_1 + 2] [i_1 - 2] [i_1] [i_1 - 2]) ? (arr_30 [i_1 + 2] [i_1] [i_1 - 2] [i_1 + 3]) : (arr_30 [i_1 + 3] [i_1 - 2] [i_1 - 2] [i_1 + 1])));
                        var_32 = ((var_0 ? var_9 : var_11));
                    }
                }
            }
        }
    }
    var_33 = var_14;
    #pragma endscop
}
