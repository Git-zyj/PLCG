/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_13 = (-(arr_2 [i_0] [i_0] [i_0]));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2] [i_2] [i_2] = ((95802122 ? var_5 : (arr_8 [i_0] [i_1] [i_2] [i_3])));
                        arr_10 [i_0] [i_2] [i_0] [i_0] = (!379792198);
                        arr_11 [i_2] [i_1] = ((~(arr_4 [i_0] [i_0])));
                    }
                    arr_12 [i_0] [i_2] = (0 / 16384357761406812254);
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_22 [i_5] = ((1 <= 811746475) >> (((((((2789651221 ? var_12 : var_3))) ? (~var_7) : -114)) + 255)));
                                arr_23 [i_0] [i_0] [i_4] [i_5 - 1] [i_6] = (arr_4 [i_6] [i_6]);
                            }
                        }
                    }
                    var_14 += ((~((~(max(-1712587144, 129))))));
                    var_15 = (~0);
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_7] [i_8] = (8 > 734138716);
                        arr_29 [i_0] [i_1] [i_7] [i_8] = ((((var_7 ? var_8 : (~-1712587128))) == var_0));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_9] [i_7] [i_0] [i_10] = (((((var_4 + ((max(-1712587134, 1)))))) ? var_12 : (max((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_12))));
                                var_16 = var_1;
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_0] [i_11] [i_12] [i_13] = (!(((-25461 ? var_11 : 0))));
                            arr_44 [i_13] [i_1] [i_11] [i_12 + 1] [i_13] = 535818208;
                            var_17 = ((var_8 ? 25460 : 3398556933));
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_14] = ((~((var_6 | (!15750)))));
                            var_18 = (max(var_18, ((max((1363562208 & 5299432506106047470), 2836)))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                        {
                            var_19 = (min(var_19, var_5));
                            var_20 = ((var_2 / (arr_7 [i_15] [i_12] [i_11] [i_1] [i_0])));
                            arr_50 [i_0] [i_1] [i_11] [i_11] = ((32767 ? var_7 : 35053));
                            var_21 = (max(var_21, 13157092967041900770));
                            var_22 = ((!(((896410362 | (arr_1 [i_0]))))));
                        }
                        arr_51 [i_0] [i_1] [i_1] [i_12] = -1867696510;

                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            arr_54 [i_0] [i_1] [i_11] [i_11] [i_16] = ((!((((arr_7 [i_12] [i_12] [i_12 - 1] [i_12] [i_12]) + ((19861 ? (arr_26 [i_1] [i_1] [i_12] [i_12]) : 2283747795)))))));
                            var_23 = ((((((524160 ? var_3 : var_8))) ? var_12 : (var_6 ^ 268304384))));
                        }
                        arr_55 [0] [i_1] [0] [i_12] [i_12] [i_12] = (((((arr_26 [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]) ? var_1 : 2164282148)) < (max(var_6, 2164282143))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 9;i_18 += 1)
                        {
                            {
                                var_24 = 524163;
                                arr_60 [10] [10] [i_11] [i_17] [i_18 + 2] = (min((((25461 != ((var_11 ? 19202 : (arr_37 [i_0] [i_0] [2])))))), 117825230));
                            }
                        }
                    }
                    var_25 = (~2836);
                }
                var_26 = (min(((max(0, var_10))), var_5));
                arr_61 [i_1] [i_0] = (max(var_8, (min(9149, 2673235375))));
            }
        }
    }
    var_27 = ((-(((var_5 != (~var_3))))));
    #pragma endscop
}
