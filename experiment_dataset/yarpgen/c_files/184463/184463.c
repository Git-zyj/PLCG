/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_1] = (min(var_5, 142));
                        var_11 = (arr_0 [i_1]);
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((max(144, var_5)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_12 = (arr_13 [i_0] [i_4]);
                                var_13 -= (max((arr_3 [i_0 - 1] [i_0 + 1]), (~var_3)));
                            }
                        }
                    }
                    var_14 = 101;

                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_26 [i_0] [i_4] [i_0] [i_0] [i_0] = -var_1;
                            var_15 = -72;
                            var_16 ^= (((((min(72, (arr_25 [i_0] [i_9] [i_9] [i_0]))))) ? (!-255) : (~133693440)));
                        }
                        arr_27 [i_4] [i_4] [i_0] = var_1;
                        var_17 = ((max(-27245, 255)));
                        arr_28 [i_0] [i_4] [i_0] [i_4] [i_0] = (~var_6);
                        arr_29 [i_0] [i_0] [i_4] = (((((var_9 ? 143 : -var_8))) ? ((max((~255), (arr_5 [i_0 - 2] [i_0 - 1])))) : (((arr_12 [i_4]) ? var_3 : 18867))));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            var_18 = arr_6 [i_11 + 1] [i_0 + 1];
                            var_19 = (~var_9);
                            var_20 = (max(var_20, ((max((~28706), var_9)))));
                            var_21 = (min(var_21, (-32767 - 1)));
                            var_22 = ((-(arr_23 [i_4] [i_4] [i_4] [i_4])));
                        }

                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_23 = min((max((-32767 - 1), 255)), (arr_7 [i_0] [i_0 - 1]));
                            arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] = 247;
                            arr_39 [i_0] [i_0] [i_0] [i_4] [i_0] = (((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_7 : (((min(var_2, 9787))))))) ? (arr_32 [i_4] [i_0] [i_0] [i_0] [i_4]) : (max(var_4, (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 1]))));
                            var_24 = var_2;
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            var_25 = var_3;
                            arr_43 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] |= (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_14 = 3; i_14 < 10;i_14 += 1)
                        {
                            var_26 = min(15, (min(var_3, (min(var_1, var_7)))));
                            arr_46 [i_0] [i_0] [i_0] [i_4] = (min(var_2, (min(-var_7, (arr_5 [i_0] [i_0])))));
                            arr_47 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (max(-5858703091606169748, -27215));
                        }

                        for (int i_15 = 2; i_15 < 11;i_15 += 1)
                        {
                            arr_50 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = var_7;
                            var_27 = (~var_7);
                        }
                        var_28 = var_6;
                    }
                    for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                    {
                        var_29 = (~32763);
                        var_30 = ((~var_8) ? (max(var_5, var_9)) : (arr_34 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 1]));
                    }

                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            arr_58 [i_4] [i_4] = ((var_3 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : ((-(arr_54 [i_0] [i_0])))));
                            var_31 = var_4;
                            var_32 = ((var_5 ? (arr_49 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_49 [i_0] [i_0] [i_5] [i_5] [i_0] [i_5])));
                            var_33 ^= var_6;
                        }
                        var_34 = (min(var_34, (arr_54 [i_0] [i_0])));
                        arr_59 [i_4] [i_4] [i_4] [i_4] = ((-((-(arr_22 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_4])))));
                    }
                    /* vectorizable */
                    for (int i_19 = 1; i_19 < 11;i_19 += 1)
                    {
                        arr_62 [i_0] [i_0] [i_0] [i_4] [i_0] = var_5;
                        arr_63 [i_0] [i_0] [i_0] [i_4] = (~var_8);
                    }
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
                        {
                            arr_71 [i_4] = ((var_4 ? var_3 : (arr_0 [i_0])));
                            var_35 = -27245;
                        }
                        for (int i_22 = 0; i_22 < 12;i_22 += 1) /* same iter space */
                        {
                            var_36 = min(9179949733103223446, var_8);
                            var_37 = (max(var_37, -var_2));
                            arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] |= -3428;
                        }
                        for (int i_23 = 3; i_23 < 11;i_23 += 1)
                        {
                            var_38 = ((((((arr_61 [i_4] [i_5]) ? var_2 : 181))) ? ((~(arr_22 [i_0 + 1] [i_0 + 1] [i_5] [i_5] [i_4]))) : var_5));
                            var_39 *= var_5;
                            arr_77 [i_4] [i_4] [i_4] [i_4] = -var_6;
                        }

                        for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                        {
                            var_40 -= var_9;
                            var_41 = (((max((arr_7 [i_0 - 2] [i_0 - 1]), (arr_7 [i_0 - 1] [i_0 - 1])))) ? var_9 : var_1);
                            var_42 = var_9;
                            arr_81 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = max((min(511, var_1)), ((max((~var_8), -1))));
                            var_43 = (((min((arr_3 [i_0] [i_0]), 247))) ? (max((arr_3 [i_0 + 1] [i_0 + 1]), var_1)) : (arr_79 [i_0] [i_0] [i_4] [i_0] [i_0]));
                        }
                        for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
                        {
                            arr_84 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = var_2;
                            var_44 = (arr_79 [i_0] [i_0] [i_4] [i_0] [i_0]);
                        }
                        for (int i_26 = 0; i_26 < 12;i_26 += 1)
                        {
                            arr_87 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] [i_4] = (arr_20 [i_5] [i_5]);
                            var_45 |= (max((max(((var_8 ? var_8 : var_1)), (arr_45 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1]))), (max((max(var_9, var_3)), -32763))));
                        }
                        /* vectorizable */
                        for (int i_27 = 0; i_27 < 12;i_27 += 1)
                        {
                            arr_90 [i_4] [i_4] = var_2;
                            arr_91 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = (arr_14 [i_5]);
                            var_46 = (~(arr_11 [i_0 - 1] [i_0 - 1]));
                            var_47 = var_0;
                            arr_92 [i_0] [i_0] [i_0] [i_4] = (((arr_56 [i_0 - 1] [i_0 - 1] [i_4] [i_0 - 1] [i_0 - 1]) ? (arr_56 [i_0 - 2] [i_4] [i_4] [i_4] [i_27]) : (arr_56 [i_0 + 1] [i_4] [i_4] [i_4] [i_4])));
                        }
                    }
                }
            }
        }
    }
    var_48 = ((min((((var_8 ? var_5 : var_3))), (min(var_7, var_0)))));
    var_49 = ((var_7 ? var_2 : (~var_0)));
    #pragma endscop
}
