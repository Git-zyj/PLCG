/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [4] &= var_12;
        var_18 = var_12;
        arr_3 [i_0] = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = var_1;
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2] = var_8;
                                arr_17 [i_0] [i_0] [i_0] [i_0 - 2] [1] [i_0 - 2] = ((var_4 ? ((var_13 ? var_8 : var_11)) : (((var_1 ? var_1 : var_15)))));
                                var_19 = ((var_9 ? var_7 : var_8));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_20 [i_1] |= var_6;

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_20 = var_16;
                            arr_24 [i_0] [3] [i_5] [i_5] [i_5] [i_5] [5] = var_8;
                            var_21 = ((var_0 ? var_9 : var_0));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_22 = ((var_1 ? var_9 : ((var_9 ? var_4 : var_6))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_23 -= var_10;
                                var_24 *= ((var_0 ? var_4 : var_3));
                                arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 20;i_11 += 1)
    {
        var_25 = var_14;
        var_26 = var_8;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_27 = ((((var_9 ? var_0 : var_5))) ? var_16 : var_4);
        var_28 -= var_7;
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    arr_46 [i_12] [i_13] = ((1 ? 83 : 83));

                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {

                        for (int i_16 = 1; i_16 < 22;i_16 += 1)
                        {
                            arr_51 [i_16] [i_13] [i_13] [19] [i_13] [i_13] [i_13] = var_5;
                            var_29 = var_3;
                            arr_52 [i_13] [i_13] [i_16] [i_13 + 3] [i_13] = ((var_1 ? var_8 : var_9));
                        }
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            arr_55 [i_17] [i_17] [i_14] [i_14] [i_13 + 1] [i_17] [i_12] = (var_2 ? var_7 : var_6);
                            arr_56 [i_12] [i_17] [i_14] [i_14] [i_17] = var_6;
                            var_30 = ((var_15 ? var_2 : var_4));
                        }
                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            var_31 = ((var_6 ? var_2 : ((var_3 ? var_3 : var_8))));
                            var_32 = ((0 ? 9223372036854775807 : 67108863));
                        }
                        for (int i_19 = 0; i_19 < 23;i_19 += 1)
                        {
                            arr_61 [18] = ((var_5 ? var_5 : var_6));
                            arr_62 [i_12] [i_13] [i_14] [i_15] [i_19] = var_5;
                        }

                        for (int i_20 = 0; i_20 < 23;i_20 += 1)
                        {
                            var_33 = ((var_6 ? var_15 : ((var_5 ? var_6 : var_16))));
                            var_34 = var_2;
                        }
                        for (int i_21 = 0; i_21 < 23;i_21 += 1)
                        {
                            var_35 = ((var_6 ? ((var_16 ? var_16 : var_14)) : var_5));
                            var_36 = var_2;
                        }
                        for (int i_22 = 0; i_22 < 23;i_22 += 1)
                        {
                            var_37 = (((((var_8 ? var_7 : var_5))) ? var_2 : var_6));
                            var_38 = (max(var_38, var_17));
                        }
                        arr_71 [i_15] [8] [i_13] [i_12] |= var_0;

                        for (int i_23 = 0; i_23 < 23;i_23 += 1)
                        {
                            arr_74 [i_12] [0] [i_12] [i_12] [0] [i_12] [i_23] = var_13;
                            var_39 = var_13;
                        }
                        for (int i_24 = 1; i_24 < 1;i_24 += 1)
                        {
                            var_40 = (((((var_9 ? var_17 : var_15))) ? (((var_14 ? var_13 : var_3))) : var_11));
                            var_41 = var_0;
                            arr_77 [i_24] = var_4;
                        }
                        for (int i_25 = 3; i_25 < 20;i_25 += 1)
                        {
                            arr_81 [i_14] = var_11;
                            var_42 = ((var_10 ? var_13 : var_12));
                        }
                    }
                    for (int i_26 = 0; i_26 < 23;i_26 += 1)
                    {
                        var_43 -= ((var_1 ? (((-2147483647 - 1) ? 9223372036854775807 : 255)) : (((var_9 ? var_2 : var_1)))));
                        arr_84 [i_26] [i_13] [i_14] [i_26] = ((var_16 ? var_1 : ((var_14 ? var_0 : var_7))));
                    }
                    /* LoopNest 2 */
                    for (int i_27 = 3; i_27 < 22;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 23;i_28 += 1)
                        {
                            {
                                var_44 = var_9;
                                arr_90 [i_12] [i_13] [1] [i_12] [i_28] [1] [i_28] = ((var_16 ? var_6 : var_13));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 23;i_29 += 1)
                    {
                        for (int i_30 = 1; i_30 < 21;i_30 += 1)
                        {
                            {
                                arr_96 [i_12] [i_12] [i_12] [6] [i_12] = var_10;
                                var_45 = ((var_0 ? var_6 : var_15));
                            }
                        }
                    }
                    var_46 = ((var_10 ? var_12 : var_4));
                }
            }
        }
    }

    for (int i_31 = 0; i_31 < 17;i_31 += 1)
    {
        /* LoopNest 2 */
        for (int i_32 = 1; i_32 < 16;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                {
                    arr_105 [i_32] [i_33] = var_14;

                    /* vectorizable */
                    for (int i_34 = 0; i_34 < 1;i_34 += 1)
                    {
                        var_47 = var_17;
                        var_48 = var_10;
                    }
                    arr_110 [i_31] [i_32] [i_33] [i_31] = var_4;
                }
            }
        }
        var_49 = var_1;
        var_50 |= var_9;
        arr_111 [0] = var_11;
        /* LoopNest 2 */
        for (int i_35 = 0; i_35 < 1;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 17;i_36 += 1)
            {
                {
                    var_51 = var_6;
                    var_52 = var_8;
                }
            }
        }
    }
    for (int i_37 = 4; i_37 < 11;i_37 += 1)
    {
        /* LoopNest 3 */
        for (int i_38 = 0; i_38 < 12;i_38 += 1)
        {
            for (int i_39 = 4; i_39 < 10;i_39 += 1)
            {
                for (int i_40 = 1; i_40 < 11;i_40 += 1)
                {
                    {
                        arr_130 [i_40] [i_38] [i_38] [i_38] [i_38] [i_37] = (((((var_3 ? var_14 : ((var_4 ? var_9 : var_5))))) ? var_4 : ((var_8 ? var_7 : ((var_17 ? var_8 : var_3))))));
                        var_53 = var_14;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_41 = 1; i_41 < 1;i_41 += 1)
        {
            for (int i_42 = 0; i_42 < 12;i_42 += 1)
            {
                for (int i_43 = 0; i_43 < 12;i_43 += 1)
                {
                    {
                        arr_139 [i_37] [i_42] [i_37] [i_37] = var_9;

                        for (int i_44 = 0; i_44 < 1;i_44 += 1)
                        {
                            var_54 += ((var_1 ? var_14 : var_13));
                            arr_142 [i_37] [i_41] [i_37] [i_43] [i_42] = var_17;
                            var_55 = var_0;
                            arr_143 [9] [i_41] [i_42] [i_42] [i_44] = var_11;
                        }
                        for (int i_45 = 0; i_45 < 12;i_45 += 1)
                        {
                            var_56 = ((var_8 ? var_8 : var_17));
                            var_57 = ((((var_1 ? var_8 : var_7))) ? (((var_9 ? ((var_4 ? var_14 : var_10)) : var_4))) : ((var_13 ? var_7 : var_11)));
                            arr_147 [i_37] [i_41] [i_42] [i_43] [i_37] = var_16;
                            var_58 = (min(var_58, (((var_7 ? var_12 : (((var_2 ? var_14 : ((var_12 ? var_15 : var_6))))))))));
                        }
                        for (int i_46 = 0; i_46 < 1;i_46 += 1)
                        {
                            arr_151 [i_37 - 1] [1] [i_41] [i_37 - 1] [i_41] [i_42] = var_1;
                            var_59 = var_7;
                        }
                        for (int i_47 = 0; i_47 < 12;i_47 += 1)
                        {
                            arr_154 [i_42] [i_43] [i_42] [i_42] [i_41] [i_42] = var_7;
                            var_60 = var_4;
                            arr_155 [i_37] [i_37] [i_37] [i_37 - 3] [i_42] = var_3;
                        }

                        for (int i_48 = 0; i_48 < 12;i_48 += 1)
                        {
                            arr_158 [i_42] [i_48] [i_42] [i_43] [i_48] [i_42] = var_3;
                            arr_159 [i_48] [i_42] [i_42] [i_42] [i_37] = var_17;
                        }
                    }
                }
            }
        }
    }
    for (int i_49 = 1; i_49 < 20;i_49 += 1)
    {
        var_61 = var_7;
        var_62 = (var_17 ? var_3 : ((var_1 ? var_4 : var_3)));
        var_63 = var_14;
        var_64 = var_14;
    }
    #pragma endscop
}
