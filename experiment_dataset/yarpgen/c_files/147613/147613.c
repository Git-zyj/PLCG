/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = var_0;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 |= (arr_2 [i_1] [i_1] [i_0]);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_18 = (arr_6 [i_0] [i_0 - 1] [i_0 - 1]);
                            var_19 = var_0;
                        }
                    }
                }
                var_20 = ((-3363365826809631207 ? 4194048 : 61661));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_21 -= (arr_9 [3] [i_0 - 1] [i_0 - 1] [i_0] [i_0]);
                    var_22 = (((((arr_13 [i_0] [i_2]) ? var_4 : (arr_9 [i_0] [i_0] [i_2] [i_5] [i_0])))) ? ((var_1 ? (arr_10 [i_0] [i_0] [i_5] [i_2] [i_1] [i_1] [i_0]) : var_6)) : var_3);

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_23 = (((arr_5 [5] [i_0]) ? (arr_3 [i_0] [i_0 + 2] [i_0 + 1]) : (arr_5 [i_0 + 2] [i_0])));
                        arr_18 [i_0] [i_1] [i_2] [i_0] [i_0] [i_6] = (((arr_3 [i_0] [i_1] [i_0 + 2]) ? (arr_3 [i_0] [i_1] [i_0 + 2]) : var_7));
                        var_24 = arr_1 [i_0];
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 |= (arr_12 [i_0 + 2]);
                        var_26 -= (var_6 ? (arr_5 [i_0] [i_2]) : (arr_5 [0] [i_2]));
                        var_27 |= ((9485333175609516390 ? 1 : 1567367237));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_28 = var_5;
                        var_29 = ((!(arr_3 [i_0] [i_1] [8])));
                        var_30 = (max(var_30, -var_6));
                        var_31 = (max(var_31, var_7));
                    }
                }
                var_32 ^= (arr_17 [i_0] [i_2] [i_0 - 1]);
                arr_24 [i_0 - 1] [i_0 - 1] [i_0] = ((-(~var_4)));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_33 = (max(var_33, ((((arr_29 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_10]) ? var_1 : (arr_16 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 1]))))));
                        var_34 = var_1;
                        var_35 -= var_5;
                        arr_31 [i_0] = var_7;
                        var_36 = (arr_30 [i_10] [i_10] [4] [2] [i_0]);
                    }
                    var_37 = (min(var_37, (((!(arr_1 [i_10]))))));
                }
                var_38 = (-(arr_6 [7] [i_0] [i_0]));
            }
        }
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    {
                        arr_40 [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((var_8 == (arr_34 [i_0])));

                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            arr_45 [6] [i_0] [11] [i_14] [i_15] = var_8;
                            var_39 = (~var_1);
                            var_40 = (min(var_40, (min((arr_44 [i_12 - 1] [i_12 + 1] [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_12]), var_1))));
                            arr_46 [i_0] [i_12] [i_12 + 1] = (arr_43 [i_15] [i_14] [i_13] [i_12] [i_0]);
                        }
                        var_41 = (-1567367222 ^ 3872);
                        var_42 = (arr_11 [i_0] [i_12 + 1] [i_0] [i_0] [i_0]);
                    }
                }
            }
            arr_47 [i_0 + 2] [i_0] = var_8;
            var_43 = ((!var_3) ? (arr_21 [i_0] [i_12 - 1] [i_12] [i_12] [i_0 + 2] [i_0 - 1]) : (arr_25 [1] [i_0 + 2]));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        {
                            var_44 = var_12;
                            var_45 = (((((~(arr_20 [i_0 + 1])))) ? (arr_15 [i_0 + 1]) : (((var_7 ? (((!(arr_15 [i_16])))) : var_7)))));
                        }
                    }
                }
            }
            var_46 = (arr_50 [i_0] [i_16] [i_0 - 1] [i_16]);
        }
        for (int i_20 = 2; i_20 < 8;i_20 += 1)
        {

            for (int i_21 = 4; i_21 < 10;i_21 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 10;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        {
                            arr_69 [i_0] [i_0] = (-((min((arr_7 [i_22 + 1] [i_21 - 2] [i_20 - 1] [i_0]), var_10))));
                            var_47 = (!var_8);
                            var_48 = (((arr_34 [i_0]) ? (~var_12) : (((((var_3 ? var_1 : var_11))) ? var_1 : ((~(arr_14 [7] [5] [i_21 - 4] [i_22 + 1] [i_23])))))));
                            var_49 = (((((var_8 ? var_11 : ((max(var_2, var_2)))))) ? (arr_38 [1]) : var_8));
                        }
                    }
                }
                var_50 = (((((arr_26 [i_0] [i_21 - 2] [i_0] [i_21 - 2]) ? ((var_3 ? var_3 : var_5)) : (arr_62 [i_0] [i_0])))) ? (var_7 - var_8) : (arr_62 [i_0] [i_0]));
                var_51 = var_13;
            }
            for (int i_24 = 4; i_24 < 10;i_24 += 1) /* same iter space */
            {
                var_52 ^= (!var_13);
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 9;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        {
                            var_53 = ((+(((arr_7 [5] [i_26] [i_0 - 1] [i_0]) ? var_13 : (arr_7 [2] [i_0 + 2] [i_0 + 1] [i_0])))));
                            var_54 = (min(var_54, ((((arr_51 [i_20 + 3] [i_24 - 2]) ? (arr_51 [i_20 + 3] [i_24 - 4]) : (((arr_51 [i_20 - 1] [i_24 + 2]) ? (arr_51 [i_20 + 4] [i_24 + 1]) : (arr_51 [i_20 - 2] [i_24 - 3]))))))));
                        }
                    }
                }
                var_55 = (min(var_55, ((max(var_5, (((arr_54 [i_0 + 1] [i_24 + 1]) && (arr_10 [i_0] [i_24 + 1] [i_24 - 3] [i_24] [i_24 - 3] [i_20 - 2] [i_24 - 3]))))))));
            }
            var_56 = ((((((arr_56 [i_0 + 2]) ? (arr_56 [i_0 - 1]) : var_3))) ? ((-(arr_56 [2]))) : (((!(arr_56 [i_20]))))));
        }
        var_57 = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);

        for (int i_27 = 0; i_27 < 12;i_27 += 1)
        {
            arr_79 [i_0 - 1] [i_0] = (max(((((max((arr_13 [i_0] [1]), var_5))) ? ((var_0 | (arr_20 [i_0]))) : ((((!(arr_59 [i_0] [i_0]))))))), (61664 && -32)));
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 12;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 12;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 12;i_30 += 1)
                    {
                        {
                            var_58 -= var_9;
                            var_59 = var_4;
                            var_60 = (arr_71 [i_0 + 2] [i_27] [0]);
                        }
                    }
                }
            }
            var_61 = ((165 || (arr_54 [i_0 + 2] [i_0 - 1])));
        }
        for (int i_31 = 0; i_31 < 12;i_31 += 1)
        {
            arr_90 [i_31] [i_31] &= (~(arr_21 [i_31] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1]));
            var_62 = (min((var_10 && var_12), (arr_34 [i_0])));
            var_63 = arr_16 [i_31] [3] [i_31] [i_0 + 2] [i_0];

            for (int i_32 = 0; i_32 < 12;i_32 += 1) /* same iter space */
            {
                var_64 = (max(var_64, ((((((((arr_86 [i_0] [i_0] [i_0 + 2] [8] [i_31] [i_31] [2]) ? var_10 : (arr_82 [i_0 + 2] [i_32] [i_32] [i_32]))))) ? ((((!(arr_78 [i_32] [i_0] [i_32]))))) : (arr_53 [i_31] [i_31]))))));
                arr_93 [i_0] = var_12;
            }
            for (int i_33 = 0; i_33 < 12;i_33 += 1) /* same iter space */
            {
                arr_96 [i_0] [i_31] = (arr_12 [i_0]);
                var_65 = (min(var_65, ((((((arr_72 [i_33] [i_0 - 1] [i_33] [i_31] [i_0 - 1]) != (arr_72 [i_31] [i_31] [i_0 - 1] [i_0 + 2] [i_0 + 2]))) ? var_13 : ((min(var_1, (arr_88 [i_0 - 1] [i_0 - 1] [i_0 + 2])))))))));
                var_66 = ((var_13 ? var_10 : ((((!(arr_49 [i_0] [i_31]))) ? (max(var_7, (arr_2 [i_0] [i_31] [i_33]))) : ((var_7 ? (arr_2 [i_0 + 1] [i_31] [i_0 + 1]) : var_3))))));
                var_67 = (max(var_67, var_8));
                var_68 = var_13;
            }
            var_69 = ((((((arr_78 [i_0] [i_0] [i_0]) ? ((var_4 ? (arr_68 [i_0]) : var_10)) : var_3))) ? (arr_43 [i_0 + 1] [i_0 + 2] [i_31] [i_31] [i_31]) : -var_8));
        }
        for (int i_34 = 2; i_34 < 10;i_34 += 1)
        {
            var_70 = (min(var_70, ((((!(arr_10 [i_0 - 1] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 1])))))));
            var_71 = (min(var_71, (arr_29 [i_34] [i_34 + 2] [i_0 - 1] [i_34 + 1] [i_0 - 1] [i_34])));
            var_72 ^= (((!(~3872))));
            var_73 = (((arr_92 [i_0] [i_0 + 1] [i_0]) ? (arr_22 [i_0] [i_0 - 1] [i_34 - 1] [i_34 + 1] [i_34 + 1] [1] [i_0]) : (((arr_92 [i_0] [i_34 + 1] [i_0]) ? (arr_92 [i_0] [i_0 - 1] [i_0]) : (arr_92 [i_0] [i_0 + 1] [i_0])))));
        }
    }
    /* vectorizable */
    for (int i_35 = 0; i_35 < 16;i_35 += 1)
    {
        var_74 = (max(var_74, (arr_101 [i_35])));
        var_75 -= (var_9 ? ((var_13 ? var_11 : var_13)) : var_1);
    }
    var_76 *= var_2;
    #pragma endscop
}
