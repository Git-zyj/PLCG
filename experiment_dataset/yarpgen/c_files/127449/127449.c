/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = var_5;

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((max((arr_5 [i_2] [i_2 + 2]), (arr_5 [1] [i_2 + 1]))) ? (max(4294967293, (arr_10 [i_2 + 1] [i_4] [i_2 + 1]))) : (((max((arr_0 [i_0]), var_7)))))))));
                                arr_17 [i_0] [i_2] [i_2] [i_2] [i_4] = (max(((max(0, (arr_13 [17] [i_1] [i_2] [i_2 - 1])))), ((-(arr_10 [i_0] [i_2] [i_2])))));
                                var_13 = ((((((max(4294967276, (arr_14 [i_0] [i_0] [i_3] [i_0])))) || 3)) ? 1 : ((max(var_1, var_0)))));
                                var_14 = (max(var_14, -0));
                                arr_18 [i_4] [i_2] [22] [i_2] [i_0] = ((((arr_11 [16] [i_2 - 1] [i_2 + 2] [i_2]) ? 1 : var_8)));
                            }
                        }
                    }
                    arr_19 [10] [i_2] [i_2] [i_2] = var_8;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_23 [i_0] [i_1] [i_5] = ((var_0 & (arr_5 [i_0] [i_0])));
                    arr_24 [i_5] = (arr_5 [i_0] [i_0]);
                    var_15 = (max(var_15, (arr_22 [i_0])));
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    arr_29 [i_6] [i_1] [i_6] [i_6] = 247;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_16 ^= 145;
                                arr_34 [i_6] [i_0] = (!243);
                                arr_35 [9] [i_1] [9] [i_7 - 1] [i_6] = (arr_6 [i_6 - 1]);
                            }
                        }
                    }
                    var_17 |= 117;
                    arr_36 [i_6] [i_1] = (119 + var_3);
                    var_18 = (min(var_18, var_2));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_19 += ((-(~var_6)));

                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_10] [i_10] [i_9] [i_10] = (((arr_27 [i_1] [i_9]) ? 179 : var_2));
                        var_20 = ((1 ? 119 : 4294967286));
                        var_21 -= ((var_6 ? (arr_16 [i_0] [i_0]) : var_10));
                    }
                    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        arr_46 [i_0] = ((!(arr_1 [i_0])));
                        var_22 = ((!(arr_27 [i_1] [i_1])));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = (~var_10);
                        arr_50 [i_0] [i_0] [i_0] [i_9] [i_0] [i_0] = (~86);
                    }
                }
            }
        }
    }
    var_23 = var_5;
    var_24 = ((!(((max(0, var_9))))));
    #pragma endscop
}
