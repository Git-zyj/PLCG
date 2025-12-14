/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, var_6));
        var_19 |= (arr_0 [i_0]);
        var_20 = var_10;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [0] [i_3] [i_0] = var_14;
                            arr_11 [i_0] [i_2] [i_2] [i_3] [i_4] [i_1] = (arr_7 [i_0]);
                            var_21 = ((var_13 ? 2613731547163163479 : var_7));
                            var_22 = 1715129084;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_23 |= ((((((arr_3 [i_6 - 3] [i_5 + 1]) ? ((max(var_9, (arr_5 [i_0])))) : (arr_6 [i_6] [i_1] [3] [i_1] [i_1] [i_0])))) ? (arr_7 [i_1]) : (arr_1 [i_2])));
                            var_24 = (max(var_24, (arr_7 [i_2])));
                        }
                    }
                }
                arr_17 [i_0] = var_1;
            }
            var_25 = (max(var_25, (arr_0 [6])));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            var_26 = (min(var_26, var_14));
                            var_27 = (var_9 ? (arr_9 [i_0] [i_1] [i_0] [7] [i_9] [i_9 - 2] [7]) : (arr_21 [i_0] [i_0] [i_0] [i_0]));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_28 = var_9;
                            arr_30 [i_0] [i_1] [i_0] = (arr_13 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_29 = arr_32 [i_11] [12] [i_7 + 1] [i_8] [i_8];
                            var_30 &= (arr_25 [i_0] [i_8] [i_0] [i_8] [i_8] [i_11]);
                            var_31 += var_6;
                            var_32 = (arr_23 [i_8] [i_1]);
                            arr_33 [i_0] = (arr_29 [i_0]);
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            var_33 = (min((arr_23 [i_1] [i_1 - 1]), (arr_23 [i_0] [i_1 - 1])));
                            var_34 *= (((((var_4 ? (arr_9 [i_12] [3] [i_12] [i_8] [i_1 - 1] [10] [i_12]) : (arr_2 [i_0] [i_12])))) ? var_8 : (max(var_1, (((arr_26 [i_0] [i_1] [i_7] [i_8] [i_12]) ? var_6 : var_3))))));
                        }
                        var_35 = var_13;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_36 = var_9;
                            arr_45 [i_0] [i_1] [i_1] = (arr_35 [i_0] [i_14] [2] [i_0]);
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 4; i_16 < 6;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                {
                    arr_54 [i_16 - 3] [1] [i_18] = var_5;
                    var_37 -= (max(var_13, ((var_13 ? ((var_2 ? (arr_0 [i_16]) : (arr_16 [i_16] [i_17] [i_18]))) : ((max((arr_27 [i_16] [9] [i_16 - 3] [i_18] [i_18]), var_9)))))));
                    /* LoopNest 2 */
                    for (int i_19 = 3; i_19 < 7;i_19 += 1)
                    {
                        for (int i_20 = 4; i_20 < 9;i_20 += 1)
                        {
                            {
                                var_38 = (arr_52 [i_16]);
                                var_39 = ((((min(var_6, (arr_13 [i_18])))) ? -1611270090 : (arr_13 [i_18])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 8;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        {
                            var_40 = (min(var_40, (arr_56 [i_16] [i_21] [i_22] [i_23])));
                            var_41 = (min(var_41, var_5));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 10;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 10;i_26 += 1)
                    {
                        {
                            var_42 = (max(0, 107));
                            var_43 = 1100316862;
                            var_44 = (min(var_44, (((((((arr_48 [i_25] [i_16 + 3]) ? (arr_64 [i_16 - 2] [i_16 - 2] [i_26] [i_25]) : var_2))) ? -82 : (arr_53 [i_26] [1] [1] [i_16]))))));
                            var_45 = (min(var_45, (((0 ? var_0 : var_8)))));
                            var_46 = (min(var_46, var_10));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 10;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 10;i_28 += 1)
                    {
                        {
                            var_47 = (max((min((max(813958161, var_11)), (arr_28 [i_16] [i_21] [i_22] [i_27] [i_28]))), ((max(var_9, ((1 ? 17 : -1715129086)))))));
                            arr_82 [i_28] [i_28] [i_27] [i_16] [i_22] [1] [i_16] |= (arr_62 [i_16] [8] [8]);
                            var_48 = (((((11 ? 239 : var_15))) ? 1038367331 : (((arr_19 [i_16] [i_22] [i_27]) ? ((var_9 ? var_10 : (arr_68 [i_16] [i_21] [6] [i_27] [i_28] [i_21]))) : (arr_67 [i_21] [i_21])))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_29 = 0; i_29 < 10;i_29 += 1)
                {
                    arr_85 [i_21] = var_9;

                    for (int i_30 = 2; i_30 < 6;i_30 += 1)
                    {
                        arr_88 [i_16] [i_21] [i_21] [i_21] [i_29] [i_29] [i_30] = (arr_36 [i_16]);
                        var_49 = (arr_41 [i_21] [i_21] [i_22] [i_29]);
                        var_50 = (arr_42 [8] [i_29] [i_16 - 3] [i_16 - 3] [i_16 - 3]);
                    }
                    arr_89 [i_16] [i_22] [i_16] [i_16] [i_22] [i_22] |= (arr_66 [i_16] [i_16 - 2] [i_16] [i_16] [i_16]);
                }
                for (int i_31 = 0; i_31 < 10;i_31 += 1)
                {
                    var_51 = (arr_20 [i_16] [i_21] [i_21] [i_22] [i_21] [i_31]);
                    arr_92 [i_31] [i_21] [i_21] [i_21] [i_16 + 4] = var_3;
                }
                /* vectorizable */
                for (int i_32 = 2; i_32 < 6;i_32 += 1)
                {
                    var_52 = (arr_27 [i_16 + 2] [7] [i_21] [i_22] [16]);

                    for (int i_33 = 2; i_33 < 7;i_33 += 1)
                    {
                        arr_99 [i_33] [i_21] [i_22] [i_21] [i_16] = (arr_47 [i_16 + 4] [i_16 - 1]);
                        var_53 = (arr_77 [i_16] [i_21] [i_33 - 2] [i_16]);
                        arr_100 [i_16 - 4] [i_16 - 4] [i_21] [i_32] [i_33] = var_16;
                        arr_101 [2] [i_21] [i_22] [i_32] [i_33] = (936997086 ? 1 : 9249);
                    }
                    for (int i_34 = 2; i_34 < 7;i_34 += 1)
                    {
                        var_54 ^= (((arr_87 [1] [i_32] [9] [1] [1]) ? (arr_57 [i_16 - 2] [i_21] [i_22] [i_32]) : (((arr_5 [i_16]) ? var_4 : var_5))));
                        arr_104 [i_22] [i_32 + 3] [i_32 + 3] [i_32 + 4] [2] [i_32] [i_21] = var_3;
                        var_55 = (((arr_12 [i_34 + 2] [i_16 + 3] [i_21] [i_16 + 3]) ? var_5 : 1));
                        var_56 = var_1;
                    }
                    for (int i_35 = 1; i_35 < 8;i_35 += 1)
                    {
                        var_57 = (max(var_57, (arr_14 [i_32] [i_21] [i_22] [i_32] [i_35] [i_21] [i_21])));
                        arr_108 [i_21] [i_21] [i_22] [5] [i_21] = (arr_9 [i_16] [i_21] [i_22] [i_32 + 4] [i_22] [i_32] [i_35]);
                    }

                    for (int i_36 = 0; i_36 < 10;i_36 += 1)
                    {
                        arr_111 [i_16] [i_16] [i_16] [i_16] [i_21] = ((((((arr_35 [i_21] [i_21] [i_21] [i_21]) ? var_0 : (arr_58 [i_36] [5] [i_16] [i_16])))) ? (arr_57 [i_16 - 3] [i_16 - 4] [i_16 + 2] [i_16 - 1]) : (arr_87 [i_16 - 3] [i_21] [i_22] [i_32] [i_36])));
                        var_58 = (min(var_58, (arr_27 [i_16 - 3] [i_16 - 3] [i_22] [i_16 - 3] [i_36])));
                        arr_112 [i_21] [i_21] [i_22] [i_36] [i_21] = ((1 ? -1719237370 : (arr_47 [i_32] [i_32])));
                        var_59 = ((1 ? (arr_105 [i_16 + 4] [0] [i_16] [8] [i_16] [i_21]) : 1));
                    }
                }
                var_60 = (max(var_60, var_1));
            }
            for (int i_37 = 0; i_37 < 10;i_37 += 1)
            {
                var_61 ^= (arr_106 [i_16] [i_37] [8] [i_16] [i_16]);
                arr_117 [i_16] [i_21] = (arr_37 [i_16 - 2] [i_21] [i_21] [i_37]);
            }
            var_62 &= var_10;
        }
        for (int i_38 = 0; i_38 < 10;i_38 += 1)
        {
            arr_121 [i_16] [i_38] [i_16 - 3] = (arr_46 [i_16] [i_38]);
            var_63 &= var_16;
            /* LoopNest 2 */
            for (int i_39 = 1; i_39 < 8;i_39 += 1)
            {
                for (int i_40 = 0; i_40 < 10;i_40 += 1)
                {
                    {
                        var_64 = (max((arr_43 [i_16 - 3] [i_16] [i_38] [i_39] [i_40] [i_40] [i_40]), ((((((-1155537046 ? 29332 : 188))) ? var_1 : 154)))));
                        var_65 = (((((91 ? (arr_124 [i_39] [i_39] [i_39] [7]) : (arr_28 [i_39 + 2] [i_39] [i_39] [i_16] [3])))) ? var_1 : ((var_2 ? (arr_75 [i_16] [i_38] [i_39] [i_40]) : var_10))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_41 = 0; i_41 < 10;i_41 += 1)
            {
                for (int i_42 = 0; i_42 < 10;i_42 += 1)
                {
                    {
                        arr_135 [i_38] [i_38] [i_38] = (arr_2 [i_16] [i_38]);
                        var_66 = var_7;
                        var_67 = (arr_69 [1] [1] [i_16 + 2] [i_16 + 2] [i_16 + 2] [i_16 + 2]);
                    }
                }
            }
        }
        for (int i_43 = 3; i_43 < 8;i_43 += 1)
        {
            var_68 = (min(var_68, (arr_39 [i_16] [i_16] [i_43] [i_16] [i_43])));
            var_69 = 12229;
        }
    }
    /* vectorizable */
    for (int i_44 = 0; i_44 < 18;i_44 += 1)
    {
        var_70 |= var_5;
        arr_142 [i_44] [i_44] = ((1 ? 1 : -3040177571480688881));
    }
    var_71 = var_0;
    #pragma endscop
}
