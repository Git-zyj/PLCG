/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (var_11 ? ((var_13 ? 2512799564 : 4520492195639231991)) : ((((((var_6 ? var_1 : var_9))) ? var_6 : var_2))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 *= (((((var_9 ? var_11 : var_2))) ? var_9 : var_6));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_18 = ((var_3 ? ((var_10 ? var_15 : var_2)) : var_15));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_19 = var_6;
                arr_7 [i_0] [i_0 + 4] [i_1] [i_2] = var_15;
                arr_8 [i_0] [1] [i_2] = var_6;
            }
            var_20 = var_8;
        }
        var_21 = var_10;

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_22 = var_8;
            arr_11 [i_0] [i_0 - 1] [i_3] &= (var_13 ? ((var_11 ? var_11 : var_2)) : (((var_5 ? var_1 : var_13))));
            arr_12 [i_0 - 1] [i_0] [i_3] = ((var_9 ? var_1 : var_8));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_16 [i_4] = ((var_4 ? ((var_5 ? var_3 : var_10)) : var_11));
            var_23 = (((((3826431546 ? 468535761 : 5247841574839760893))) ? var_9 : var_10));
            var_24 = (((((var_11 ? var_4 : var_7))) ? ((var_9 ? var_12 : var_6)) : var_5));
            var_25 = (max(var_25, ((((((var_15 ? var_2 : var_6))) ? ((var_9 ? var_3 : var_2)) : var_3)))));
        }

        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_26 = var_8;
                var_27 &= ((var_2 ? (((var_5 ? var_8 : var_10))) : ((var_3 ? var_3 : var_2))));

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        var_28 = (min(var_28, ((((((var_2 ? var_14 : var_6))) ? ((var_13 ? var_8 : var_12)) : ((var_4 ? var_14 : var_12)))))));
                        arr_25 [i_8] [i_5 - 1] [11] [i_6] [i_7] [i_8] = var_10;
                        arr_26 [i_8] [i_8] = var_6;
                        var_29 = var_11;
                    }
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_30 = var_14;
                        arr_29 [i_0] [i_5 + 1] [i_6] [i_7] [i_6] [i_9] = var_1;
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_32 [i_0] [i_10] = (((((var_8 ? var_14 : var_3))) ? (((5247841574839760893 ? 468535772 : -12534))) : var_2));
                        arr_33 [i_0] [i_5] [i_5] [i_6] [i_7] [i_10] [i_10] = var_6;
                    }
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        var_31 = (max(var_31, ((3462701641 ? 13926251878070319614 : 13926251878070319625))));
                        var_32 = (((((var_12 ? var_13 : var_11))) ? var_15 : ((var_7 ? var_1 : var_13))));
                    }

                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        var_33 = var_12;
                        arr_38 [i_0 + 1] [8] [i_6] [i_7] = var_10;
                        var_34 = (min(var_34, var_3));
                        var_35 = var_12;
                    }
                    var_36 = (var_5 ? var_4 : ((var_13 ? var_11 : var_11)));
                }
                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_13] [i_14] [6] [i_14] = var_13;
                        var_37 -= var_8;
                        var_38 = ((var_0 ? var_12 : var_13));
                        var_39 &= (((((var_6 ? var_15 : var_12))) ? var_14 : var_7));
                    }
                    arr_45 [i_0 - 1] [6] [i_6] [i_13] [i_13] = (((((var_1 ? var_0 : var_14))) ? var_12 : ((var_3 ? var_11 : var_12))));
                }
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    var_40 &= (((((var_4 ? var_6 : var_1))) ? var_15 : var_8));
                    var_41 = (((((var_8 ? var_1 : var_13))) ? ((var_7 ? var_2 : var_1)) : (((var_10 ? var_0 : var_15)))));
                }
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                arr_51 [i_0] &= var_14;
                arr_52 [i_0 + 3] &= (((((var_2 ? var_10 : var_6))) ? ((var_0 ? var_8 : var_14)) : var_14));

                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    var_42 ^= var_2;
                    arr_55 [i_17] = var_2;
                    var_43 &= ((var_15 ? var_15 : var_12));
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    arr_60 [i_0] [i_0] [i_16] [i_18] = (((((var_0 ? var_2 : var_6))) ? var_12 : var_4));
                    var_44 = var_8;
                }
                for (int i_19 = 3; i_19 < 11;i_19 += 1)
                {
                    var_45 ^= var_9;

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_46 &= var_14;
                        var_47 = ((var_13 ? ((var_8 ? var_15 : var_9)) : var_4));
                    }
                    for (int i_21 = 1; i_21 < 11;i_21 += 1)
                    {
                        var_48 = ((var_10 ? var_14 : var_6));
                        var_49 = (var_5 ? ((var_8 ? var_0 : var_13)) : var_6);
                    }
                }
                var_50 = ((var_12 ? var_5 : (((var_1 ? var_10 : var_8)))));
                var_51 ^= ((((var_8 ? var_12 : var_1))) ? ((var_10 ? var_8 : var_5)) : var_10);
            }
            for (int i_22 = 1; i_22 < 12;i_22 += 1)
            {
                arr_72 [i_0 + 2] [i_5] [i_22] = (((((var_1 ? var_15 : var_14))) ? ((var_15 ? var_2 : var_3)) : ((46207 ? var_15 : 4520492195639231975))));
                var_52 = var_12;
            }
            for (int i_23 = 1; i_23 < 12;i_23 += 1)
            {
                arr_76 [i_0] [i_5] [i_0] = (var_7 ? var_7 : var_12);
                arr_77 [i_5] [i_5] [i_5] [i_5] = var_3;
                arr_78 [i_0] [i_5] [i_0] = ((var_4 ? var_15 : ((var_13 ? var_13 : var_11))));
                var_53 = (min(var_53, ((((((var_7 ? var_7 : var_7))) ? ((var_3 ? var_3 : var_3)) : var_12)))));
            }
            var_54 = (var_0 ? var_5 : ((var_6 ? var_7 : var_3)));
        }
        for (int i_24 = 2; i_24 < 11;i_24 += 1) /* same iter space */
        {
            var_55 = (max(var_55, var_10));
            var_56 = (((((var_9 ? var_7 : var_1))) ? var_6 : ((var_8 ? var_7 : var_7))));
            var_57 ^= var_14;
            arr_81 [i_0] = var_6;
        }
        for (int i_25 = 2; i_25 < 11;i_25 += 1) /* same iter space */
        {
            arr_84 [i_0] [i_0] [i_25] = var_2;
            var_58 = var_2;
        }
        for (int i_26 = 2; i_26 < 11;i_26 += 1) /* same iter space */
        {
            arr_87 [i_0] [i_26 - 2] [i_26 + 1] = var_2;
            var_59 = var_2;

            for (int i_27 = 1; i_27 < 11;i_27 += 1)
            {
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 13;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 13;i_29 += 1)
                    {
                        {
                            var_60 = var_7;
                            arr_96 [i_0] [i_26 + 1] [i_29] [i_27] [i_0] |= var_13;
                        }
                    }
                }
                var_61 |= var_10;
            }
            var_62 -= var_6;
        }
    }
    for (int i_30 = 2; i_30 < 8;i_30 += 1)
    {
        /* LoopNest 2 */
        for (int i_31 = 0; i_31 < 12;i_31 += 1)
        {
            for (int i_32 = 1; i_32 < 11;i_32 += 1)
            {
                {
                    var_63 = var_5;

                    for (int i_33 = 1; i_33 < 9;i_33 += 1)
                    {
                        var_64 = (max(var_64, ((var_13 ? var_10 : (((((2767628330 ? var_4 : var_7))) ? var_0 : ((var_5 ? var_13 : var_3))))))));
                        var_65 ^= (((((var_2 ? ((var_5 ? var_13 : var_9)) : ((var_0 ? var_1 : var_9))))) ? var_5 : (((((var_15 ? var_6 : var_13))) ? var_7 : var_13))));

                        for (int i_34 = 1; i_34 < 8;i_34 += 1)
                        {
                            arr_108 [i_32] [i_30] [i_30] [i_31] = var_11;
                            var_66 -= var_3;
                            var_67 = ((var_11 ? var_0 : var_9));
                            arr_109 [i_30] [i_32] [i_31] [i_32 - 1] [i_33] [i_34 - 1] = var_14;
                            var_68 = var_1;
                        }
                        /* vectorizable */
                        for (int i_35 = 0; i_35 < 12;i_35 += 1)
                        {
                            var_69 = var_7;
                            arr_112 [i_32] [i_31] [1] [11] [i_35] = var_13;
                        }
                    }
                    var_70 = var_7;
                }
            }
        }
        var_71 = ((var_8 ? var_12 : (((var_14 ? var_13 : (((var_2 ? var_6 : var_7))))))));
        var_72 = (min(var_72, (((((((((var_7 ? var_8 : var_2))) ? ((var_11 ? var_3 : var_4)) : var_15))) ? var_6 : (((((var_14 ? var_12 : var_11))) ? (((var_10 ? var_10 : var_6))) : var_9)))))));
        var_73 = (var_11 ? var_8 : var_1);
    }
    var_74 = ((var_15 ? var_12 : var_11));
    var_75 = var_1;
    #pragma endscop
}
