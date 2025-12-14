/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 += var_5;
        var_17 = (max(var_17, -1651006912632252787));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    arr_11 [i_3 - 1] = var_8;
                    var_18 = (-2 ? -1 : 2046573749839615364);
                }
            }
        }

        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            var_19 = var_4;
            var_20 = (((((((3896029918798497004 ? 242 : 15))) == var_5)) ? (max(((max(var_2, var_7))), (max(var_11, var_12)))) : (((((max(var_3, var_11))) % var_9)))));
            var_21 = ((var_13 > (max(var_6, (-3432846319269083356 & var_6)))));
        }
        var_22 = (max(((var_8 ? var_3 : var_11)), ((var_9 ? var_6 : var_8))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_17 [i_1] = var_9;

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_23 = (max(var_23, ((((var_2 ? var_8 : var_10))))));
                var_24 = var_2;

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_25 &= (var_2 ? var_8 : var_1);
                    var_26 = (min(var_26, var_12));
                }
                var_27 = var_2;
                var_28 = var_12;
            }
            for (int i_8 = 3; i_8 < 10;i_8 += 1)
            {
                var_29 = (var_5 < var_12);

                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_30 = var_10;
                        var_31 = (((((56 ? 28 : 22))) ? var_13 : var_11));
                        var_32 = ((((-3432846319269083344 ? 1 : 0)) + var_7));
                        arr_33 [i_1] [i_5] [i_8 + 2] [i_8] = var_10;
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_36 [i_8] [i_5] [i_8] [11] [i_11] = (10291245475043253614 >= 2741202071922537959);
                        var_33 = (min(var_33, var_2));
                        var_34 |= ((105553116266496 ? 249 : -113));
                        arr_37 [i_8] [5] [i_8] [i_8] [i_11] [i_8] = (var_1 | var_12);
                    }
                    var_35 = ((var_4 ? var_2 : var_3));
                }
                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    arr_41 [i_8] = var_2;

                    for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_36 = var_8;
                        var_37 = var_12;
                        var_38 = (max(var_38, var_1));
                        var_39 = var_3;
                    }
                    for (int i_14 = 2; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_40 = (min(var_40, (((var_13 ? var_3 : var_6)))));
                        var_41 = ((var_0 ? ((var_2 ? var_4 : var_1)) : var_9));
                    }
                    var_42 = (max(var_42, (var_5 < var_6)));
                }
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    var_43 = (min(var_43, var_0));

                    for (int i_16 = 2; i_16 < 12;i_16 += 1)
                    {
                        var_44 ^= (var_13 ? var_13 : var_7);
                        var_45 = ((-113 ? 242 : ((var_13 ? 4067011124677879 : 923973216636519268))));
                    }
                }
                var_46 = (((((var_11 ? var_7 : var_12))) ? var_2 : var_6));
                var_47 = (var_8 < -12);
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
            {
                arr_56 [12] = ((var_11 ? var_13 : var_4));
                var_48 = ((var_13 ? var_3 : var_2));
                var_49 = ((var_7 ? var_3 : var_11));

                for (int i_18 = 2; i_18 < 10;i_18 += 1)
                {
                    var_50 &= ((var_10 ? -3432846319269083356 : 242));

                    for (int i_19 = 2; i_19 < 10;i_19 += 1)
                    {
                        var_51 = ((var_11 ? var_11 : ((var_10 ? var_2 : var_10))));
                        var_52 = ((var_11 ? var_0 : var_1));
                        var_53 = 254;
                        var_54 = var_3;
                    }
                }
            }
            for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
            {
                var_55 = var_1;
                var_56 = var_3;

                for (int i_21 = 0; i_21 < 13;i_21 += 1) /* same iter space */
                {
                    arr_68 [i_1] [i_5] [i_1] [i_21] [i_1] [i_5] = ((var_1 ? var_7 : var_9));
                    arr_69 [i_20] [i_1] [i_20] [i_21] [i_5] = ((var_6 ? var_10 : var_5));
                }
                for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
                {
                    var_57 = (((((var_3 ? var_2 : var_6))) ? var_2 : var_9));
                    arr_74 [i_1] [i_5] [i_1] [i_20] [i_22] [i_5] = (((-127 - 1) ? 17522770857073032348 : -99));
                    var_58 = (max(var_58, (var_3 % var_10)));
                    var_59 = ((((var_10 ? var_8 : var_8)) == ((var_0 ? var_3 : var_8))));

                    for (int i_23 = 1; i_23 < 10;i_23 += 1)
                    {
                        var_60 = ((var_4 ? (var_12 && var_2) : ((var_5 ? var_13 : var_8))));
                        arr_78 [i_1] [i_5] [i_1] [i_1] [i_23] &= ((15 ? 168 : -1419691998580972780));
                    }
                }
                var_61 = ((var_13 ? var_5 : var_6));
                arr_79 [i_20] [3] [i_1] [i_1] = (var_4 & var_1);
            }
            /* LoopNest 2 */
            for (int i_24 = 2; i_24 < 12;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 13;i_25 += 1)
                {
                    {

                        for (int i_26 = 0; i_26 < 13;i_26 += 1)
                        {
                            var_62 = (max(var_62, var_13));
                            var_63 = (((var_12 < var_0) < var_5));
                            var_64 = var_11;
                        }
                        for (int i_27 = 0; i_27 < 13;i_27 += 1)
                        {
                            var_65 = var_13;
                            arr_90 [i_1] [i_1] [i_1] = (var_2 >= var_4);
                        }
                        arr_91 [i_1] [i_5] [i_24 + 1] [i_5] [i_25] [i_25] = (var_0 ? var_1 : var_2);
                        var_66 *= var_3;

                        for (int i_28 = 3; i_28 < 12;i_28 += 1) /* same iter space */
                        {
                            var_67 = var_5;
                            var_68 = ((var_2 ? var_6 : var_4));
                        }
                        for (int i_29 = 3; i_29 < 12;i_29 += 1) /* same iter space */
                        {
                            var_69 = var_6;
                            var_70 = ((var_7 ? var_7 : ((var_13 ? var_13 : var_12))));
                        }
                        for (int i_30 = 3; i_30 < 12;i_30 += 1) /* same iter space */
                        {
                            var_71 = ((var_3 ? ((var_5 ? var_11 : var_12)) : var_0));
                            arr_98 [i_1] [i_1] [i_24] [i_30] [i_30] = (var_2 != var_8);
                        }
                        var_72 = (((var_5 ? var_7 : var_9)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
