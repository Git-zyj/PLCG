/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_17 -= ((4395899027456 ? ((((max(var_1, (arr_1 [i_0])))) << var_10)) : (arr_4 [i_1] [i_1] [i_0])));
                var_18 = (max((((-(arr_4 [13] [i_1] [i_1])))), (min((arr_0 [i_1]), (min(var_6, var_5))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] &= (max(var_5, ((max(-4395899027459, (((var_2 << (((arr_5 [i_1 + 1] [i_2]) - 9447004641408930971))))))))));
                    var_19 &= (4395899027456 - 3847130773);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 = var_7;
                            var_21 = ((!((((arr_2 [i_0]) ? var_15 : (arr_0 [i_0]))))));
                            var_22 = var_5;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 &= 3093;
                            var_24 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_25 = (((arr_0 [i_3]) ? 536866816 : ((((arr_4 [23] [23] [i_1 - 3]) / (arr_3 [i_1 - 3]))))));
                        var_26 |= var_6;
                        var_27 &= ((((max(((max(var_9, var_2))), (arr_13 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] [i_3])))) ? ((min(((((arr_5 [23] [i_2]) <= (arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] [i_3] [i_2])))), var_8))) : (max((arr_9 [i_1] [i_1 + 1] [i_1 - 1]), ((~(arr_9 [i_3] [i_2] [i_1])))))));
                        var_28 = -3847130764;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_29 |= -var_7;
                        var_30 = (arr_1 [12]);

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_31 = (1 < 0);
                            var_32 = (arr_16 [i_1 - 3] [i_1 + 1] [i_1] [i_1 - 2]);
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_33 |= ((((((var_5 >= (arr_20 [i_2]))))) & (((arr_4 [i_0] [i_0] [i_0]) / 288212783965667328))));
                            arr_22 [i_8] [i_6] [i_6] [i_1] [i_0] = (arr_13 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_6]);
                            var_34 = (((arr_3 [i_1 - 1]) ? (arr_13 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 2] [i_1 - 2] [i_6]) : var_6));
                            var_35 = -var_2;
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_2] [0] = 447836526;
                        var_36 = (((arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_9]) < (~7)));
                        var_37 = var_12;
                        var_38 = ((-(arr_16 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2])));
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    var_39 = (((((1 ? var_0 : (arr_12 [i_0])))) ? ((((arr_11 [i_0]) ? (arr_14 [i_0] [i_10] [i_10] [i_1] [i_10] [i_10]) : (arr_12 [i_0])))) : (arr_16 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 3])));
                    var_40 = (1283361770 & 68);
                    var_41 = (arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_42 = arr_6 [i_0];

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 22;i_12 += 1)
                    {
                        var_43 = (((arr_32 [i_1 - 3] [i_12] [i_12] [i_12 - 1] [i_12 - 2] [i_12 - 2]) ? ((((arr_21 [8] [1]) | (arr_8 [i_12] [i_11] [i_1] [i_0])))) : (((arr_26 [i_12] [i_11] [i_0] [i_0]) >> (((arr_9 [i_12] [i_11] [i_1]) - 607557455248385249))))));
                        var_44 = (arr_10 [i_12 - 1] [i_12 - 2] [i_1 + 1] [i_1 - 3]);
                        var_45 = (arr_29 [i_1 - 2] [i_12 - 1]);
                        var_46 -= var_8;

                        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_13] = (arr_4 [i_1] [i_12 + 1] [i_1 - 2]);
                            arr_37 [i_13] [i_12] [i_11] [i_1] [i_0] &= (arr_27 [i_0] [i_1 - 1] [8]);
                            var_47 = (arr_6 [i_0]);
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                        {
                            var_48 *= (((arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_14] [i_14]) | (arr_14 [i_0] [i_0] [i_1 - 1] [i_1] [i_11] [i_11])));
                            arr_40 [i_0] [i_0] [i_14] [i_0] [i_14] [i_12] = (arr_31 [i_0] [i_0]);
                            var_49 = (arr_18 [i_0] [i_1] [i_12 - 2] [i_1] [i_14]);
                            var_50 &= var_0;
                        }
                    }
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_51 = (arr_11 [i_0]);
                    arr_43 [i_15] [i_1] [i_1] = (arr_35 [i_15] [i_1] [i_1 - 3] [i_1 + 1] [i_15]);
                }
            }
        }
    }
    var_52 = var_7;
    #pragma endscop
}
