/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = 62707;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 += (4323455642275676160 != 62700);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 ^= ((62686 ? (arr_4 [i_1]) : (arr_4 [i_1])));
                        var_15 ^= (arr_5 [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 |= ((-(arr_1 [i_1])));
                        var_17 = (min(var_17, (arr_12 [i_0] [i_1])));
                        var_18 = var_11;
                        var_19 = (((-(arr_4 [i_0]))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_20 = var_7;
                        arr_15 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0] = (((((62720 ? 120 : var_0))) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_5])));
                        var_21 = (((~2829) && var_7));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_22 |= ((62720 ? (arr_1 [i_6]) : (arr_1 [i_0])));
                        var_23 = (((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) / 1077734805))) ? 42795 : (arr_0 [i_0]));
                    }
                }
            }
        }
    }
    var_24 = min(((min(215, (!var_8)))), ((-61375 ? ((255 ? var_9 : var_1)) : ((min(var_7, 22741))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_31 [i_7] = max(((-(var_9 > 44))), (((((min(var_0, 120))) >= ((-119 ? var_10 : (arr_29 [i_8])))))));
                                arr_32 [i_11] [i_10] [i_7] [i_8] [i_8] [i_7] [i_7] = ((!(arr_23 [i_9 - 2])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        arr_35 [i_12 + 1] [i_12] [i_9] [i_8] [i_7] = (((arr_25 [i_9 - 1]) ? var_11 : 215));
                        arr_36 [i_7] [i_7] [i_8] [i_8] [i_9] [i_8] = 122;
                    }
                    for (int i_13 = 1; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        var_25 = ((-(max((!3), var_7))));
                        arr_40 [i_7] [i_7] [i_7] [i_9] = ((((-2073250193 ? -104 : 253))) && 42780);
                        var_26 = (!var_6);
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        arr_43 [i_7] [i_8] [i_9 - 2] [i_14 - 1] [i_9] = ((~((-2667296418529317789 ? var_9 : 15352133038135116309))));
                        var_27 = ((-4181 ? ((243 - (arr_23 [i_14]))) : (arr_25 [i_14 - 1])));
                        arr_44 [i_8] = ((arr_30 [i_7] [i_7] [i_9 + 1] [i_7]) && ((((arr_27 [i_7] [i_8] [i_8] [i_14 - 1] [i_8]) ? (arr_33 [i_7] [i_7] [i_9 - 2] [i_7] [i_9 - 2]) : (arr_42 [i_7])))));
                        var_28 = var_10;
                    }
                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {

                        for (int i_16 = 3; i_16 < 22;i_16 += 1)
                        {
                            var_29 ^= var_7;
                            arr_50 [i_7] [i_7] [i_7] [i_15] [i_15] = ((+((((((arr_26 [i_8]) ? var_0 : var_7)) == var_0)))));
                        }
                        var_30 += ((~(253 + 1)));
                        arr_51 [i_15] = 2839;
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            {
                                var_31 = (arr_56 [i_7] [i_7] [i_8] [i_8] [i_9 - 2] [i_17] [i_18]);
                                arr_57 [i_7] [i_7] [i_8] [i_9] [i_17] [i_9] [i_18] = (arr_45 [i_7] [i_7] [i_8] [i_17]);
                                arr_58 [i_7] [i_8] [i_8] [i_8] [i_8] = 127;
                                arr_59 [i_7] [i_7] [i_8] [i_7] [i_17] [i_17] [i_18] = ((((-(arr_48 [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 2]))) + ((-((max(9795, 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
