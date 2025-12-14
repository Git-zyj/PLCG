/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min((min((arr_0 [i_0]), var_1)), (((var_11 <= ((min(var_15, var_7))))))));
        var_17 = (min(var_17, (-var_8 * var_12)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (((arr_1 [i_3 - 1] [i_1]) != (arr_1 [i_0] [i_0])));
                        var_19 = (max(-7, var_13));
                        var_20 = (-32767 - 1);
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 = (!var_6);
                        var_22 *= var_10;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 = ((((0 != (arr_12 [i_0] [i_0] [i_2] [i_4] [i_5])))));
                            var_24 = (max(var_24, (((!(arr_14 [i_0] [i_5] [i_5] [i_1 - 2] [i_1 - 2] [i_1] [i_0]))))));
                            var_25 = var_2;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_26 = (arr_0 [i_0]);
                            var_27 = (arr_1 [i_0] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_4] [i_4] [i_2] = var_12;
                            var_28 = (((arr_20 [i_0] [i_2] [i_1 + 1] [i_2] [i_2] [i_2] [i_2]) ? (arr_20 [i_7] [i_7] [i_1 + 1] [i_7] [i_0] [i_2] [i_2]) : var_7));
                            var_29 = (arr_6 [i_2] [i_2] [i_4]);
                            var_30 ^= var_8;
                            var_31 += -11398;
                        }
                        var_32 = (min(var_32, ((((arr_0 [i_0]) < 127)))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = (arr_7 [i_0] [i_1 - 2] [i_0] [i_2]);
                                arr_31 [i_0] [i_1] [i_0] &= ((var_9 / (arr_27 [i_1])));
                            }
                        }
                    }
                }
            }
        }
        var_33 &= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_10 = 4; i_10 < 21;i_10 += 1)
    {
        arr_34 [i_10] [i_10] = 32767;
        var_34 = (min(19291, 0));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 20;i_14 += 1)
                        {
                            {
                                arr_46 [i_10] [i_11] [i_11] [i_10] [i_12] [i_13] [i_14] &= (arr_37 [i_10 - 1]);
                                var_35 = (arr_33 [i_10] [i_10]);
                            }
                        }
                    }
                    var_36 += ((min((min((arr_38 [i_10]), (arr_40 [i_12] [i_11] [i_10]))), (arr_38 [i_12]))));
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_37 = ((var_14 * ((110 ? 0 : -19292))));

        /* vectorizable */
        for (int i_16 = 1; i_16 < 22;i_16 += 1) /* same iter space */
        {
            var_38 = ((~(!18)));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    {
                        var_39 = ((arr_50 [i_16 + 1] [i_16] [i_16 + 1]) <= 19292);
                        var_40 -= (!32767);
                    }
                }
            }
        }
        for (int i_19 = 1; i_19 < 22;i_19 += 1) /* same iter space */
        {
            var_41 = (min((((!(var_15 && 206)))), (arr_52 [i_15] [i_15])));
            arr_60 [i_15] = 11084672119711610525;

            /* vectorizable */
            for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
            {
                var_42 ^= var_2;

                for (int i_21 = 1; i_21 < 20;i_21 += 1) /* same iter space */
                {
                    var_43 -= (arr_59 [i_15] [i_19] [i_21]);
                    var_44 = (arr_51 [i_15]);
                }
                for (int i_22 = 1; i_22 < 20;i_22 += 1) /* same iter space */
                {
                    var_45 = var_13;
                    var_46 -= (((arr_54 [i_20] [i_19 + 2]) % var_4));
                    var_47 = (arr_49 [i_20] [i_20]);
                }
                var_48 += arr_65 [i_19];
                var_49 += var_9;
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 24;i_23 += 1) /* same iter space */
            {

                for (int i_24 = 4; i_24 < 21;i_24 += 1) /* same iter space */
                {
                    var_50 = arr_61 [i_19 + 2] [i_19 + 2];
                    var_51 = (arr_50 [i_19] [i_23] [i_24]);
                    var_52 -= (arr_59 [i_15] [i_15] [i_15]);
                }
                for (int i_25 = 4; i_25 < 21;i_25 += 1) /* same iter space */
                {
                    var_53 = (arr_64 [i_19] [i_19] [i_19] [i_15]);
                    var_54 = (min(var_54, var_15));
                    var_55 = ((var_9 ? -19292 : var_15));
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 24;i_27 += 1)
                    {
                        {
                            var_56 = (((arr_51 [i_15]) / 23844));
                            arr_83 [i_15] [i_23] [i_19] [i_23] [i_26] [i_23] &= (((arr_64 [i_15] [i_19] [i_23] [i_23]) >> (var_5 - 30032)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_28 = 0; i_28 < 24;i_28 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 24;i_29 += 1)
                {
                    for (int i_30 = 4; i_30 < 22;i_30 += 1)
                    {
                        {
                            arr_92 [i_15] [i_15] [i_28] [i_15] [i_28] = 146;
                            arr_93 [i_15] [i_19] [i_19] [i_29] [i_19] = -1;
                            var_57 = ((-79 ? -var_7 : var_0));
                            var_58 = -var_0;
                        }
                    }
                }
                arr_94 [i_15] [i_15] [i_19] [i_15] = var_14;
                arr_95 [i_15] [i_19] [i_15] [i_15] = ((-(((!(arr_77 [i_15] [i_15] [i_19] [i_28]))))));
                var_59 = (~var_0);
                /* LoopNest 2 */
                for (int i_31 = 3; i_31 < 23;i_31 += 1)
                {
                    for (int i_32 = 3; i_32 < 21;i_32 += 1)
                    {
                        {
                            arr_102 [i_15] [i_19] [i_15] [i_15] [i_32] = var_14;
                            var_60 = arr_81 [i_15] [i_19 + 1] [i_28] [i_28] [i_32 + 2] [i_32];
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_33 = 0; i_33 < 24;i_33 += 1)
        {
            var_61 = -39;
            /* LoopNest 2 */
            for (int i_34 = 1; i_34 < 22;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 24;i_35 += 1)
                {
                    {
                        var_62 = (arr_67 [i_34] [i_34 + 1] [i_34 + 2] [i_34 + 1] [i_34 + 2]);
                        var_63 ^= var_14;
                    }
                }
            }
            arr_111 [i_15] = -7404;
            var_64 ^= var_12;
            var_65 = ((-(arr_75 [i_15] [i_15] [i_15] [i_33])));
        }
    }
    /* LoopNest 3 */
    for (int i_36 = 0; i_36 < 25;i_36 += 1)
    {
        for (int i_37 = 1; i_37 < 21;i_37 += 1)
        {
            for (int i_38 = 2; i_38 < 23;i_38 += 1)
            {
                {

                    for (int i_39 = 1; i_39 < 22;i_39 += 1)
                    {
                        var_66 &= (arr_113 [i_36] [i_37]);
                        var_67 = ((((min(-13891, ((127 ? 32750 : 0))))) ? 65535 : 113));
                        var_68 = (arr_119 [i_36] [i_36] [i_36] [i_36]);
                    }
                    /* vectorizable */
                    for (int i_40 = 0; i_40 < 25;i_40 += 1)
                    {
                        var_69 = (i_37 % 2 == 0) ? ((((((arr_114 [i_37 + 2] [i_37 - 1] [i_37]) + 2147483647)) >> (arr_118 [i_37 + 2] [i_37] [i_38 + 1] [i_38 - 1])))) : ((((((((arr_114 [i_37 + 2] [i_37 - 1] [i_37]) - 2147483647)) + 2147483647)) >> (arr_118 [i_37 + 2] [i_37] [i_38 + 1] [i_38 - 1]))));
                        arr_126 [i_37] = ((-7404 ? 31516 : (!1400838272)));
                        arr_127 [i_36] [i_37] [i_37] [i_40] = (~58655);
                        var_70 -= -var_7;
                        var_71 &= var_14;
                    }
                    arr_128 [i_36] &= ((4294967295 ? 65535 : -7404));
                    var_72 = (max(var_72, (~var_9)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_41 = 2; i_41 < 11;i_41 += 1)
    {
        for (int i_42 = 0; i_42 < 13;i_42 += 1)
        {
            {
                var_73 = ((((min((arr_12 [i_41] [i_41] [i_42] [i_42] [i_42]), var_4)) ^ (((0 ? -23 : -18))))));
                /* LoopNest 2 */
                for (int i_43 = 2; i_43 < 11;i_43 += 1)
                {
                    for (int i_44 = 0; i_44 < 1;i_44 += 1)
                    {
                        {
                            var_74 &= ((((max(((31516 ? var_1 : 523866909)), -var_11))) ? ((~(min((arr_41 [i_44]), -523866909)))) : (((arr_6 [i_42] [i_43] [i_43 + 2]) ? (arr_122 [i_41] [i_41 - 2] [i_43 - 2] [i_43]) : (arr_53 [i_42] [i_41 + 1])))));
                            var_75 = ((-(((!(arr_20 [i_41] [i_42] [i_42] [i_42] [i_42] [i_43] [i_44]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
