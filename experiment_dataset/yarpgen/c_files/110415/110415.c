/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = ((arr_2 [i_0]) ? (arr_2 [i_0]) : var_15);
        arr_3 [i_0] = 4377689914120801326;
        var_19 = (arr_1 [i_0]);

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_20 = ((var_14 ? var_9 : 9269659914251572304));
            var_21 = ((~(arr_1 [10])));
            arr_6 [i_0] [i_1] [i_0] = var_11;
            arr_7 [i_0] = (~0);
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_22 = ((~(!-32)));
            var_23 *= (((arr_5 [i_2 + 1] [i_2] [i_2]) / var_12));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_24 = (max(var_24, (arr_2 [i_0])));
                        var_25 = 17228143656779018987;
                        arr_19 [i_3] [2] [i_4] [i_3] [i_3] = (!var_13);
                        var_26 = var_0;
                    }
                    arr_20 [i_3] = var_5;
                    var_27 -= (15 ? (10644595476037473365 | var_13) : var_15);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            {
                var_28 = (((arr_25 [i_6]) / (~var_1)));

                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_29 &= (~82);
                                var_30 = var_4;
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_31 -= (((((min(var_9, var_5)) < (((min(var_1, -106)))))) ? (11471714726144516424 | -2147483646) : (((-((max(1, var_8))))))));
                            var_32 = (min(var_32, var_5));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            var_33 = 12;
                            var_34 = (min(var_34, (arr_41 [i_6] [0] [i_11] [i_11] [10])));
                            var_35 = ((-(var_6 - var_8)));
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                        {
                            var_36 = (arr_46 [i_6] [i_7] [1]);
                            arr_48 [i_6] = var_9;
                        }
                        arr_49 [i_6] [i_7] [i_8] [i_11] = var_14;
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        var_37 += var_14;
                        arr_54 [i_6] = (!var_7);
                    }

                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        var_38 *= var_8;
                        var_39 = (!9177084159457979326);
                        arr_57 [i_6] [i_7] [i_6] [i_16 - 1] [10] [i_6] = (min(var_0, (min((arr_53 [i_16] [i_6] [i_6] [i_16]), 17228143656779018986))));
                        arr_58 [i_6] [i_6] = (((((~(arr_39 [15] [i_7] [i_6] [i_7] [15])))) | (min(var_10, (min(var_10, var_17))))));
                        arr_59 [i_6] [1] [4] [i_6] = 104;
                    }
                }
                var_40 &= var_6;
            }
        }
    }

    /* vectorizable */
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        var_41 = (-1807190541 ? 14 : (!1));
        var_42 = arr_40 [7] [4] [9] [i_17] [7] [i_17];
    }
    for (int i_18 = 0; i_18 < 17;i_18 += 1)
    {
        var_43 = var_14;
        var_44 = (1 & var_13);

        for (int i_19 = 3; i_19 < 16;i_19 += 1)
        {
            arr_66 [i_19] [0] = (((((max((arr_62 [i_18]), 10565039849362889938)))) ? ((min(var_9, 3840))) : (max((min(-32763, 1218600416930532629)), (((1 | (arr_63 [0]))))))));
            var_45 = (max((~7168), var_16));
        }
        for (int i_20 = 0; i_20 < 17;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {
                var_46 = ((((var_15 - (min(var_10, (arr_63 [i_18]))))) | ((((min(7159, 576451956210401280))) ? (arr_63 [i_18]) : -7169))));
                var_47 = ((var_3 && (((min(var_12, 9371))))));
            }
            for (int i_22 = 4; i_22 < 14;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    var_48 = (min(var_48, ((min((min(var_15, -7523796723115372499)), ((max((((var_9 ? var_1 : 778908254))), var_17))))))));

                    for (int i_24 = 1; i_24 < 14;i_24 += 1)
                    {
                        var_49 = (min(var_49, var_2));
                        arr_79 [i_18] [i_20] [i_20] = 63909;
                    }
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        var_50 = (min(var_50, var_17));
                        var_51 = var_2;
                        var_52 = (max(var_52, (min(var_6, (((-13 < (!var_7))))))));
                        var_53 = (min(((max((arr_75 [i_20] [i_22 + 3]), (arr_64 [i_22 + 2])))), (min(var_11, 1073741824))));
                    }
                }
                arr_83 [i_20] [i_20] [4] = (min(var_1, (min((var_6 && 192), (arr_81 [15] [i_22 + 3] [i_20] [i_22] [i_22 - 2] [i_22])))));
            }
            /* vectorizable */
            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                /* LoopNest 2 */
                for (int i_27 = 3; i_27 < 15;i_27 += 1)
                {
                    for (int i_28 = 2; i_28 < 16;i_28 += 1)
                    {
                        {
                            arr_90 [i_20] [i_20] = var_14;
                            var_54 ^= var_14;
                        }
                    }
                }
                var_55 = (max(var_55, var_6));
                var_56 = ((var_2 ? var_7 : 3530095408720884841));
                var_57 = (67 || 9974408850503319248);
            }

            for (int i_29 = 0; i_29 < 17;i_29 += 1)
            {
                var_58 ^= (min((!-0), (min(67, ((2105118607 >> (((arr_89 [i_18] [i_18] [i_18] [i_18] [i_18]) + 8705081721504038681))))))));
                arr_94 [i_20] = 31;
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 17;i_30 += 1)
                {
                    for (int i_31 = 2; i_31 < 16;i_31 += 1)
                    {
                        {
                            arr_99 [10] [4] [i_20] [i_30] = (144115188075855872 ? var_1 : (arr_98 [i_31] [i_31 - 2] [i_20] [i_31 + 1] [i_20] [i_31 - 1] [i_31]));
                            var_59 -= (((arr_98 [i_31 - 1] [i_31] [i_30] [i_31] [i_31] [0] [i_31 - 1]) % (((arr_98 [i_31 - 1] [0] [i_30] [i_31] [i_31] [i_31] [i_31 - 1]) * (arr_80 [i_31 + 1] [11] [12] [i_31] [i_31 + 1] [i_31])))));
                        }
                    }
                }
            }
            for (int i_32 = 4; i_32 < 14;i_32 += 1)
            {

                /* vectorizable */
                for (int i_33 = 0; i_33 < 17;i_33 += 1)
                {
                    var_60 = 4194304;
                    arr_104 [i_18] [i_32] [i_20] [i_20] [i_18] |= ((arr_71 [i_32 - 3] [12] [4] [i_18]) == var_13);
                    var_61 -= (!(((var_13 - (arr_67 [i_18])))));
                    arr_105 [15] [i_20] [15] = -20939;
                }
                for (int i_34 = 0; i_34 < 17;i_34 += 1) /* same iter space */
                {
                    arr_108 [i_18] [16] [i_20] [i_18] [i_18] [12] = (min(((((arr_63 [i_18]) <= var_17))), (min(1, 4194316))));
                    arr_109 [i_18] [i_20] [2] [i_32 - 4] [8] [i_18] |= (min(-32, 16711680));
                    var_62 = (max(var_62, (((1073741820 ? 7197358516239104587 : 20938)))));
                }
                for (int i_35 = 0; i_35 < 17;i_35 += 1) /* same iter space */
                {
                    var_63 = ((((min(-14194, (~17)))) ? 7 : var_17));
                    var_64 = (min(((2844934352 & (min(-64, 8935141660703064064)))), ((max((var_0 <= 211), (max((arr_100 [i_20] [i_20] [i_20] [8]), var_1)))))));
                }
                arr_113 [i_32] [i_18] [i_32 - 1] |= var_14;
            }
            arr_114 [i_20] [i_20] = var_3;
            var_65 = ((((var_3 ? (((min(var_2, -9)))) : var_5)) - ((((var_7 | (arr_74 [i_20] [4] [i_20] [i_18])))))));
        }
        var_66 *= ((var_6 ? ((((((55 ? 8139278895310292709 : 65524)) == 8139278895310292709)))) : (!49152)));
        var_67 = var_8;
    }
    /* vectorizable */
    for (int i_36 = 0; i_36 < 24;i_36 += 1)
    {
        var_68 ^= ((65518 >> (-6559273458595741558 + 6559273458595741577)));
        /* LoopNest 2 */
        for (int i_37 = 0; i_37 < 24;i_37 += 1)
        {
            for (int i_38 = 0; i_38 < 0;i_38 += 1)
            {
                {
                    arr_123 [1] [8] [i_38] [i_38 + 1] = var_5;
                    var_69 = var_1;
                    var_70 = (~var_11);
                    arr_124 [i_36] [i_36] [i_36] [5] = -1283782015941155047;
                    var_71 = (38 > 32);
                }
            }
        }
        var_72 |= -9;
        arr_125 [10] [1] = 20318;
    }
    /* vectorizable */
    for (int i_39 = 0; i_39 < 22;i_39 += 1)
    {
        var_73 = ((36 ? var_10 : (arr_119 [i_39] [i_39] [i_39])));
        var_74 = var_7;
    }
    var_75 -= 120;
    var_76 = var_9;
    #pragma endscop
}
