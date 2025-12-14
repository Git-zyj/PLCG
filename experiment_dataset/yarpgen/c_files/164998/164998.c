/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(((!((min(var_7, (arr_1 [i_0])))))), (arr_6 [i_0] [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_4] [i_2] [i_3 - 2] [i_0] [i_1] [i_2] = var_5;
                                arr_17 [i_0] [i_2] [i_2] [i_0] [i_4] = (((arr_0 [i_0]) || var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (arr_5 [i_0] [17]);
                                var_15 = (arr_18 [i_0] [5] [16] [1] [i_6] [5]);
                            }
                        }
                    }
                    var_16 = ((~(arr_2 [i_2] [i_1])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_27 [i_0] [i_0] [i_7] = var_3;
                    arr_28 [i_7] [i_0] [i_0] = (16150 || -2357);
                    var_17 = (arr_5 [i_0] [i_1]);
                }
                for (int i_8 = 4; i_8 < 15;i_8 += 1)
                {
                    var_18 = (arr_14 [i_1] [i_1] [1] [i_1] [i_0]);

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_19 = arr_15 [i_8 - 1] [i_8 + 1] [i_8] [1] [i_8] [i_8 - 1] [i_8];
                        var_20 = (((((-2367 + (arr_3 [i_0] [i_0])))) ? (((!(arr_26 [i_1] [i_0] [1])))) : (arr_33 [i_8] [i_8 + 1] [i_8] [i_8])));
                        arr_34 [i_0] [i_8] [9] [i_0] = var_2;
                        var_21 = (var_0 || var_11);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_22 = (min(var_5, -128562162));
                                var_23 = (((((!((var_9 || (arr_25 [i_0])))))) + ((var_1 ? var_2 : (((arr_9 [i_0] [i_1] [i_8 - 1] [i_0]) ? var_3 : var_6))))));
                                var_24 = (((arr_31 [i_8 - 1] [i_8 - 3] [i_8] [i_8 + 3]) + ((-(arr_31 [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_8 + 3])))));
                            }
                        }
                    }
                    var_25 = (var_4 > var_6);
                }

                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    var_26 = (((arr_11 [i_0] [0] [4] [i_12] [i_12] [i_0]) + (arr_40 [16] [16] [14] [i_12])));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_50 [5] [i_1] [i_12] [i_13] [i_14] [6] [i_0] = (((1 > -561136955) || (-2367 || var_12)));
                                arr_51 [i_0] = (arr_46 [i_13]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 17;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_17 = 1; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 16;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 18;i_19 += 1)
                        {
                            {
                                var_27 = ((((arr_5 [i_15] [i_15]) || var_2)));
                                var_28 = (var_0 || -7198);
                                var_29 = var_7;
                                var_30 = (max(var_30, (((max(var_3, (!var_10)))))));
                                var_31 = ((min(var_9, var_8)));
                            }
                        }
                    }
                }
                arr_64 [i_15] [i_16] = (min(var_3, ((max((max(var_0, -2337)), 18093)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 4; i_20 < 11;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            {
                var_32 = ((((((((arr_14 [i_20] [i_20 - 3] [i_20] [i_20 - 3] [i_20 - 3]) ? 2367 : var_10)) + (arr_59 [i_20] [i_20] [1])))) || var_10));
                var_33 = ((((arr_3 [i_20 - 3] [i_21]) || (arr_25 [i_21]))) || ((!(arr_45 [i_20] [i_21] [i_20] [i_20] [i_21] [8]))));
                arr_72 [i_21] [i_21] = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 11;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 11;i_23 += 1)
        {
            {
                arr_81 [i_23] = 5;
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 11;i_25 += 1)
                    {
                        {
                            var_34 = ((max((arr_45 [i_22] [i_22] [i_23] [i_24] [1] [1]), var_3)));
                            var_35 = (var_5 || var_2);
                        }
                    }
                }
                var_36 = ((((max((((arr_8 [3] [12] [6] [i_23]) || (arr_23 [2] [i_23] [1] [i_23] [i_23]))), (var_5 || 1)))) + (arr_57 [i_22])));
            }
        }
    }
    #pragma endscop
}
