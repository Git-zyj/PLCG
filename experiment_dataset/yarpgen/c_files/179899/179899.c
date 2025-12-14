/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 6182165281847743541;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (min(var_14, 0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 |= ((var_0 ? var_0 : 1));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_16 = (min(var_16, (((arr_2 [i_3 + 1] [i_3 + 1] [i_2 - 3]) ? ((var_2 ? var_9 : -1456672402)) : var_8))));
                        var_17 = (min(var_17, (--155)));
                        arr_10 [i_0] [i_1] [i_0] [5] = -var_10;

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            var_18 = (max(var_18, -1162161181));
                            var_19 -= var_12;
                            arr_13 [i_0] [i_1] [6] [14] [i_1] |= ((7365098852212395554 ? (arr_12 [i_4 + 1] [i_4 + 1] [i_3 + 1] [9] [i_3] [i_2 + 1]) : var_7));
                            var_20 = (~8);
                            var_21 -= 7365098852212395555;
                        }
                        var_22 = var_10;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, var_8));
                            var_24 = ((-var_0 != ((var_8 ? var_9 : var_4))));
                            arr_19 [0] [1] [i_2] [16] [i_1] [1] [i_0] |= (1250444133 / 255);
                            arr_20 [i_0] [i_0] [i_2] [10] [16] |= var_2;
                            arr_21 [10] [i_0] |= ((((var_0 ? 2173718129 : var_4)) != var_4));
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_25 -= ((((((arr_3 [i_2]) ? var_1 : var_0))) ? (var_2 < 2173718129) : 1338622076));
                            var_26 = (min(var_26, (((var_4 ? 11081645221497156048 : 2121249166)))));
                            var_27 = (var_6 | -var_7);
                            var_28 = (min(var_28, (((var_8 ? var_11 : 0)))));
                        }
                        var_29 -= 2121249167;
                    }
                    var_30 -= ((arr_14 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2]) ? (var_6 < 23172) : ((0 * (arr_14 [i_2] [i_1] [i_1] [i_1] [6] [6]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                {
                    var_31 -= ((var_10 ? 4644598946662855113 : var_7));
                    arr_29 [i_0] = 13802145127046696503;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_32 = (((arr_31 [i_11] [i_9 + 1] [i_9 - 1] [i_0]) != (arr_31 [i_10] [i_9 - 1] [i_9 - 1] [i_9])));
                                var_33 = ((var_3 ? var_7 : var_9));
                                var_34 = (min(var_34, (((((-13523 ? 1 : var_11)) / var_5)))));
                                arr_35 [i_0] [i_10] [i_0] = 1354;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_35 = (max(var_35, -185));
                                arr_40 [i_0] [i_8] [i_9] [i_13] = ((45119 ? var_11 : var_2));
                                var_36 -= ((var_3 ? ((var_0 ? 134217726 : -625608804)) : -2022583699));
                                var_37 = (min(var_37, -var_8));
                                var_38 = (max(var_38, (((var_0 ? var_5 : ((var_2 ? var_7 : var_8)))))));
                            }
                        }
                    }
                }
            }
        }
        var_39 = (4644598946662855117 != (((var_7 << (64188 - 64186)))));
    }
    var_40 = (min(var_40, var_10));

    /* vectorizable */
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        arr_43 [i_14] = var_2;
        var_41 = var_7;

        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            arr_47 [i_14] [i_15] [i_14] = 3527173512;
            var_42 = (min(var_42, ((((-7 != 136) ? var_0 : var_11)))));
            arr_48 [i_15] [i_15] = 4644598946662855111;

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                arr_53 [i_14] [i_16] [i_15] [13] = var_6;
                var_43 = ((3585031665 ? var_5 : ((var_5 ? var_11 : 54))));
            }
            var_44 = (max(var_44, (((1354 ? var_9 : -1342)))));
        }
    }
    for (int i_17 = 1; i_17 < 21;i_17 += 1) /* same iter space */
    {
        var_45 = ((((((arr_54 [i_17]) ? ((var_3 ? (arr_54 [i_17]) : 4290772992)) : var_4))) ? -4644598946662855110 : 40));
        var_46 = 0;
    }
    for (int i_18 = 1; i_18 < 21;i_18 += 1) /* same iter space */
    {

        for (int i_19 = 2; i_19 < 22;i_19 += 1)
        {
            arr_61 [i_18] [i_18] = (max(var_6, -16));
            var_47 = var_6;
        }
        /* vectorizable */
        for (int i_20 = 1; i_20 < 22;i_20 += 1)
        {
            var_48 = ((-(var_12 <= var_0)));

            for (int i_21 = 1; i_21 < 21;i_21 += 1)
            {
                arr_66 [i_20] [18] [i_20] [8] |= (((1452923298 + 64181) ? (var_5 <= var_6) : 10523));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 23;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        {
                            arr_72 [i_18] = ((var_5 ? (((var_8 ? 62201 : var_10))) : var_2));
                            var_49 -= (((arr_71 [i_18] [i_18] [20] [i_18 + 2] [i_18] [0] [i_18]) != 1354));
                            var_50 = (min(var_50, ((-68 ? 30400 : 625608803))));
                        }
                    }
                }
            }
            for (int i_24 = 0; i_24 < 23;i_24 += 1)
            {

                for (int i_25 = 3; i_25 < 21;i_25 += 1)
                {
                    var_51 = (min(var_51, (((33554400 ? var_5 : var_12)))));
                    var_52 = (max(var_52, 0));

                    for (int i_26 = 0; i_26 < 23;i_26 += 1)
                    {
                        arr_81 [i_18 - 1] [i_18 - 1] [i_24] [i_18] [i_26] [i_18] [8] = ((~(arr_76 [i_25 + 2] [i_18] [i_18] [i_18])));
                        arr_82 [i_26] [18] [i_18] [i_20] [i_18 - 1] = (((arr_74 [i_26] [i_25 - 2] [i_24] [i_20 + 1]) ? 0 : var_7));
                        var_53 = -3284541952737290803;
                        var_54 = 2121249166;
                    }
                    var_55 |= ((~(arr_74 [i_18] [i_18] [i_18] [i_18 - 1])));
                }
                for (int i_27 = 3; i_27 < 20;i_27 += 1)
                {

                    for (int i_28 = 0; i_28 < 23;i_28 += 1)
                    {
                        var_56 = (min(var_56, var_0));
                        arr_88 [i_18] [i_18] [i_18] = var_1;
                        var_57 = (min(var_57, -13802145127046696498));
                    }
                    for (int i_29 = 0; i_29 < 23;i_29 += 1)
                    {
                        var_58 = (((arr_69 [i_20 - 1] [i_18] [i_20] [i_20 + 1]) ? var_11 : (arr_69 [1] [i_18] [i_20] [i_20 + 1])));
                        arr_91 [i_18] [i_24] [i_27] [20] = var_5;
                    }
                    for (int i_30 = 0; i_30 < 23;i_30 += 1)
                    {
                        var_59 = (max(var_59, ((((var_12 && var_12) | -26994)))));
                        var_60 = ((var_2 ? var_8 : var_12));
                        var_61 = (min(var_61, ((-((0 ? var_2 : var_11))))));
                        var_62 = (max(var_62, var_1));
                    }
                    var_63 = ((var_10 ? var_8 : 1));
                }
                /* LoopNest 2 */
                for (int i_31 = 3; i_31 < 21;i_31 += 1)
                {
                    for (int i_32 = 1; i_32 < 19;i_32 += 1)
                    {
                        {
                            var_64 = (min(var_64, var_5));
                            var_65 -= 285978576338026496;
                        }
                    }
                }
            }
            var_66 |= ((var_11 ? (2173718129 < 2173718129) : 16384));
        }
        arr_99 [i_18] [i_18] = (((((var_4 ? (var_9 & var_5) : ((225 ? var_1 : 33554391))))) * var_2));
        arr_100 [i_18] = ((((512 ? 0 : 1)) - (max((var_8 - var_3), 47426))));
    }
    for (int i_33 = 2; i_33 < 9;i_33 += 1)
    {
        var_67 = ((2001264991 & ((~((var_8 ? var_1 : -126))))));
        var_68 = (max(var_68, (((~1) ? ((min(var_1, var_6))) : -var_4))));
        var_69 = ((((((((var_12 ? var_12 : var_3))) ? (max(5410806111376892360, 74)) : var_8))) ? (((2 - (512 & -37)))) : 130048));
    }
    var_70 |= (((((75 ? ((var_12 ? var_11 : 3)) : var_9))) ? (max((max(var_2, 81)), ((var_9 ? 2230471209 : var_12)))) : (((((max(64504, var_12))) ? ((1 ? var_0 : var_3)) : ((5902241101359053518 ? var_8 : var_5)))))));
    #pragma endscop
}
