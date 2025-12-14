/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [14] = 1;
                    arr_7 [i_0] [i_1] [2] [i_2] = (arr_0 [i_0]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_12 = 11162865201490693175;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_13 = (arr_14 [i_5] [i_4]);
                                var_14 = -6074;
                                arr_18 [i_0] [i_3] [i_4] [i_5] [i_6] &= ((7283878872218858442 * (arr_15 [i_0] [4] [4] [i_6 + 1])));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_15 = (max(var_15, ((((arr_21 [i_0] [3] [i_3] [i_3] [i_3] [i_7] [i_8]) ? 1 : 1)))));
                            var_16 = var_0;
                            var_17 = var_5;
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, 125));
                            var_19 = (max(var_19, (~-8411)));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, (arr_14 [i_3] [i_10])));
                            arr_27 [i_0] [i_0] [6] [i_0] [i_7] [i_7] [i_10] |= 17261;
                        }
                        var_21 = var_9;

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_22 -= var_3;
                            var_23 = (min(var_23, (-32767 - 1)));
                            var_24 = 8398;
                            var_25 = (min(var_25, -1407506268));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_26 = -8943504588074586825;
                            arr_33 [8] [i_3] [8] [i_7] [i_12] = var_11;
                        }
                    }
                    for (int i_13 = 3; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_27 = (~10044389760894523899);
                        var_28 &= ((32748 / (arr_14 [i_0] [i_0])));
                        var_29 = -32755;
                    }
                    for (int i_14 = 3; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        arr_38 [i_14] &= (((!(arr_30 [i_0] [i_3] [i_3] [i_4] [i_0]))));
                        var_30 = (var_4 <= -117);
                    }
                    var_31 &= (arr_37 [i_0] [i_3] [i_3] [i_4] [i_3]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            {
                                arr_44 [i_0] [i_3] [i_4] [2] [i_15] [i_16] [15] = ((7283878872218858429 <= (arr_11 [i_16] [i_3] [i_0])));
                                var_32 |= 3513;
                                var_33 = var_11;
                                var_34 = (32757 * var_1);
                                arr_45 [i_0] [i_3] [i_4] [i_4] [i_15] [i_16] = ((~(arr_24 [i_16] [i_3] [1] [1] [i_16])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                {
                    var_35 = (arr_34 [i_0] [i_17] [i_18] [i_17] [i_18] [i_18]);
                    var_36 = ((~(arr_19 [i_18])));
                    var_37 = (max(var_37, (~var_4)));
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                {
                    arr_57 [i_19] [i_20] [i_21] |= var_4;
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 18;i_23 += 1)
                        {
                            {
                                arr_63 [i_19] [i_20] [i_21] [i_22] [i_19] = 24;
                                var_38 = (max(-var_8, ((((max(var_6, 2340758326))) ^ -7993308506594473881))));
                                arr_64 [i_23] [6] [i_21] [i_21] [i_21] |= (min((((4598 < ((max(var_3, 54)))))), (min(45, (arr_48 [i_19] [i_19] [i_21] [i_22])))));
                            }
                        }
                    }

                    for (int i_24 = 0; i_24 < 18;i_24 += 1)
                    {
                        arr_68 [i_19] [i_21] [i_20] [i_19] = (max((min(65531, ((max(-6807, -5))))), 122));
                        var_39 &= (((min((var_4 % 74), (~var_1))) - -var_1));
                    }
                    for (int i_25 = 4; i_25 < 16;i_25 += 1)
                    {
                        arr_71 [i_19] [i_20] [i_21] [i_19] = var_6;
                        var_40 |= -118;
                        var_41 = (max(3288239393984124171, ((max(var_11, (!var_2))))));
                    }
                    var_42 = (max(var_42, (!68)));
                }
            }
        }
        arr_72 [6] |= -31;

        for (int i_26 = 0; i_26 < 18;i_26 += 1)
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 18;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 18;i_28 += 1)
                {
                    {
                        var_43 = (((min((max(8287576569485176297, -61)), 4294967271)) / (((((arr_62 [i_26] [i_27] [i_28]) || var_3))))));
                        arr_80 [i_19] [1] [i_19] [2] = ((-((min((arr_75 [i_27] [i_27] [i_26] [i_19]), (((!(arr_21 [0] [i_19] [i_26] [i_27] [i_27] [i_28] [i_27])))))))));
                        arr_81 [i_19] = 4180621590998239621;
                        arr_82 [i_19] = 0;
                    }
                }
            }
            arr_83 [i_19] [i_26] [i_19] = (-(~4307));

            /* vectorizable */
            for (int i_29 = 0; i_29 < 0;i_29 += 1)
            {
                arr_86 [i_19] [i_19] [i_29] [i_19] = var_5;
                arr_87 [i_26] [8] [i_26] &= (((-(arr_41 [i_26] [i_26] [i_26] [i_19] [i_26]))));
            }
            for (int i_30 = 0; i_30 < 18;i_30 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 18;i_31 += 1)
                {
                    for (int i_32 = 1; i_32 < 16;i_32 += 1)
                    {
                        {
                            var_44 = ((-4152308324995566226 != (((((126 / var_8) >= (arr_84 [i_31] [i_30] [i_26] [i_19])))))));
                            var_45 = (min(((((min((arr_47 [i_26]), (arr_61 [i_19] [i_26] [i_31])))) / var_11)), ((~(((arr_79 [i_32] [i_19] [i_19] [12]) % 84))))));
                        }
                    }
                }

                for (int i_33 = 1; i_33 < 1;i_33 += 1)
                {
                    var_46 = (min(-47813, 6932127581717812030));
                    var_47 = (arr_91 [i_19] [i_26] [16] [i_33 - 1] [i_33]);
                }
                var_48 = (-34 || 360157321);
            }
            for (int i_34 = 0; i_34 < 18;i_34 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 18;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 18;i_36 += 1)
                    {
                        {
                            arr_107 [i_26] [i_19] = ((-((min(var_8, (1329 && 43082))))));
                            var_49 = (max(var_49, ((min(((min((arr_0 [i_34]), (arr_0 [i_36])))), (arr_0 [i_36]))))));
                            arr_108 [i_19] [i_26] [i_34] [i_36] = var_11;
                            var_50 &= var_3;
                        }
                    }
                }
                arr_109 [1] [1] [i_19] = (min((min(179, (arr_13 [i_19] [i_19] [i_26] [i_34]))), (((arr_13 [i_19] [i_26] [i_34] [i_34]) | (arr_13 [i_19] [i_19] [i_34] [14])))));
            }
        }
    }
    var_51 = var_11;
    #pragma endscop
}
