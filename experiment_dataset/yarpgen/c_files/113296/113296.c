/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            var_16 = -var_12;
                            var_17 = 1985840939;
                            var_18 = (((1238129215 & 3029927738) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (!var_4)));
                            var_19 = 5;
                            var_20 ^= (arr_4 [i_0] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 = (~((var_12 ? (arr_12 [i_3] [i_1]) : var_0)));
                            var_22 = (~var_5);
                            var_23 = ((var_6 ? (((var_1 ? 0 : 2720649326))) : ((-(arr_7 [i_5] [7])))));
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            var_24 = 1278009641;
                            var_25 = arr_4 [i_0] [0];
                        }
                        var_26 ^= ((6606934814895390634 ? -13886 : 14));
                        var_27 = var_14;
                        var_28 = var_14;

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_29 = (var_3 && -3641293951377494215);
                            var_30 = 12120434413150070385;
                        }
                    }
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        var_31 = (arr_0 [i_0] [7]);
                        var_32 = 13143;
                    }
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        var_33 = (arr_2 [i_0] [i_0]);
                        var_34 = var_1;
                        var_35 = (arr_13 [i_1] [i_1]);
                        var_36 -= 187;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_37 = var_7;
                                var_38 = (((((var_9 ? var_3 : var_6))) ? var_14 : (arr_10 [i_0 + 2] [i_1] [i_0 + 2] [i_10])));
                            }
                        }
                    }
                    var_39 = var_12;
                }
            }
        }

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_40 = var_7;
            var_41 = (((arr_13 [i_12] [i_0 + 2]) >= (arr_13 [i_12] [i_0 + 2])));
        }
    }
    for (int i_13 = 2; i_13 < 8;i_13 += 1)
    {
        var_42 = (arr_19 [i_13] [i_13] [i_13] [i_13]);
        var_43 = ((((11839809258814160989 < (arr_6 [i_13 - 2])))));
    }
    var_44 = (!var_2);
    /* LoopNest 2 */
    for (int i_14 = 3; i_14 < 10;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            {
                var_45 = (min((arr_10 [i_14] [i_15] [i_14 + 1] [i_14]), (max(18446744073709551603, (arr_8 [i_14 + 2] [i_15 + 2])))));
                var_46 = ((-45 ? 14911375794705914762 : (!1265039559)));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {

                            for (int i_18 = 2; i_18 < 8;i_18 += 1)
                            {
                                var_47 = (~((((0 + (arr_24 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14 + 2]))) - ((min(43767, 7992))))));
                                var_48 = arr_36 [i_16] [i_14] [i_18];
                            }
                            for (int i_19 = 0; i_19 < 1;i_19 += 1)
                            {
                                var_49 = arr_26 [i_14] [i_15 - 1] [i_16] [i_14] [i_19] [i_15 - 1];
                                var_50 = ((((min((arr_44 [i_14] [i_15 + 3] [i_16]), (arr_2 [i_14 + 1] [i_15 + 2])))) ? (((arr_5 [i_14 - 2]) ? (arr_2 [i_14 - 1] [i_15 + 2]) : (arr_5 [i_14 + 1]))) : (arr_5 [i_14 - 3])));
                            }
                            for (int i_20 = 0; i_20 < 12;i_20 += 1)
                            {
                                var_51 = (((((((max(var_15, 211))) ? ((min(-32760, (arr_52 [i_14] [1] [i_16 + 1] [i_14] [i_20])))) : (21 > 2762014048)))) || (((~(arr_9 [i_14] [11] [i_14]))))));
                                var_52 = (((max((arr_31 [i_14 - 2] [14] [i_15 + 3] [i_14]), 21768))) ? ((231 / (arr_31 [i_14 - 2] [i_17] [i_15 + 3] [i_14]))) : ((min(var_11, 62752))));
                            }
                            var_53 = -var_13;
                            var_54 = ((!((((arr_34 [i_15 + 1] [i_15 + 2] [i_14 + 1] [i_14 + 2] [i_14 - 2] [i_14 - 2]) ? (arr_34 [i_15 - 1] [i_15 - 1] [i_14 - 2] [i_14 + 1] [i_14 - 1] [i_14 + 1]) : (arr_34 [i_15 + 2] [i_15 - 1] [i_14 - 3] [i_14 - 1] [i_14 + 2] [i_14 - 3]))))));
                            var_55 = arr_43 [i_15 - 1] [i_16];
                            var_56 &= var_7;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_21 = 1; i_21 < 9;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        for (int i_23 = 3; i_23 < 11;i_23 += 1)
                        {
                            {
                                var_57 = (arr_41 [i_22] [i_22]);
                                var_58 = (((max((arr_42 [i_14 + 2]), 13284205592719100569)) + ((((arr_42 [i_21 + 3]) ? (arr_42 [i_14 - 1]) : 4294967295)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_59 = (min(var_4, ((-((var_8 ? var_3 : var_10))))));
    #pragma endscop
}
