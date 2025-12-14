/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [i_0] = ((var_3 | ((((arr_2 [i_0] [9] [i_0]) ? 992 : (-2147483647 - 1))))));
                                var_10 = (!(!1));
                                arr_14 [i_0] = (!(!992));
                            }
                            for (int i_5 = 1; i_5 < 15;i_5 += 1)
                            {
                                var_11 = ((65523 ? (((arr_11 [i_0 - 1] [i_1] [i_1] [i_2] [i_0] [i_5] [i_5]) ? (arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]) : (((var_0 ? var_1 : (arr_0 [i_0])))))) : 102));
                                var_12 += ((~(min(((min(var_6, (arr_0 [i_1])))), ((var_7 ? 61536 : var_7))))));
                                var_13 = (min(24360, 98));
                            }
                            var_14 = arr_4 [i_0] [i_0];
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    var_15 = (((~var_6) < var_3));
                    var_16 += 31084;
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_29 [i_0] [i_8] [i_7] [i_7] [1] [i_0] = 1;
                                arr_30 [i_0] [15] [i_1] [i_0] [i_7] [i_0] [i_9] = ((arr_24 [i_0] [i_1] [i_1]) <= ((((16 >= (-2147483647 - 1))) ? var_6 : (arr_24 [i_0] [i_7] [i_7]))));
                                var_17 = ((-((((~var_1) >= ((max(93, var_5))))))));
                                arr_31 [1] [1] [i_7] [i_7] [i_0] = (+(min((~var_9), ((2369113042 ? var_8 : var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_18 ^= var_9;
                                var_19 = (-(min((var_1 && var_8), var_4)));
                                var_20 = (max(var_20, var_6));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_40 [i_0] = var_9;
                    arr_41 [i_0] [i_1] = ((-((((var_0 ? -127555817 : var_5)) * -0))));
                    var_21 = ((~((var_6 ? 1 : var_9))));
                }
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    var_22 = (~1925854242);
                    var_23 += ((1 ? ((((!(!-1285419692))))) : (((4000 && -4877) ? var_3 : 15166))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            {
                arr_53 [i_14] [i_14] = 17350518500330826294;
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            {
                                var_24 = (max(((!(((0 ? 0 : -1871750062))))), 1));
                                arr_62 [i_14] [i_15] [i_15] [i_15] [i_15] = ((var_9 ? (((((var_8 ? var_1 : 39519))) ? (!1925854277) : (min((arr_35 [i_14] [i_14] [i_14] [1] [i_14] [i_14] [i_14]), -15700)))) : ((((-var_3 && ((((arr_48 [i_14]) ? -39 : 0)))))))));
                                var_25 = var_8;
                            }
                        }
                    }
                }

                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    arr_65 [i_14] [i_14] = var_2;
                    arr_66 [i_14] [i_14] [i_14] = var_6;
                }
                /* vectorizable */
                for (int i_20 = 3; i_20 < 15;i_20 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 16;i_22 += 1)
                        {
                            {
                                var_26 |= ((-(arr_12 [i_14 - 1] [i_14] [i_14] [8] [i_14])));
                                var_27 = 8175426923371952102;
                                var_28 = (!var_7);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 16;i_24 += 1)
                        {
                            {
                                var_29 += 12;
                                var_30 = var_4;
                            }
                        }
                    }
                    var_31 = (((~-1669351355) ? ((1669351355 ? var_8 : 4000)) : 1));
                }
            }
        }
    }

    for (int i_25 = 0; i_25 < 11;i_25 += 1)
    {
        var_32 = (((((!1669351351) ? var_1 : ((13252836419023824769 ? var_2 : (arr_20 [i_25] [i_25] [11])))))) ? ((~((1 + (arr_38 [i_25] [i_25] [12] [i_25]))))) : ((-(var_0 - var_5))));
        arr_83 [i_25] [i_25] = var_5;
    }
    #pragma endscop
}
