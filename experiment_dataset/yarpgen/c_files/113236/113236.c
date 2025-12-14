/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_12 = (max((((arr_5 [i_1] [7] [i_1]) + (18446744073709551595 - 0))), var_8));
                            var_13 -= (max((arr_4 [i_3 - 1] [i_3 + 2] [i_0]), ((max(25196, var_2)))));
                            arr_10 [i_3] [i_2 + 2] [i_1] [i_1] [i_0] [i_0] = -108;
                            arr_11 [i_3 + 1] [i_2 - 1] [i_1] [i_1] [i_0] [i_0] = ((3 + (arr_4 [i_1] [i_3] [i_1])));
                        }
                    }
                }
                var_14 *= (((108 ? (arr_9 [i_1] [i_0] [i_0] [i_0]) : (arr_8 [2] [2] [i_0] [i_0] [6] [2]))));
                var_15 = (arr_8 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_16 = (!((((arr_15 [i_5]) ? (arr_12 [i_5] [i_4]) : -22399))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((max(((-114 / (arr_13 [4]))), ((min(1, 1)))))))));
                                arr_22 [i_8] [4] [i_6] [4] [i_5] [i_8] = (arr_19 [i_8] [i_5] [i_5] [i_4]);
                                var_18 = ((((arr_16 [i_8] [i_6] [i_4] [i_4]) | 393216)) >= (min(var_9, (1 * 17108))));
                            }
                        }
                    }
                }
                arr_23 [i_4] [i_4] = 4249674447;
            }
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_27 [i_9] = ((((127 ? 113 : var_3)) % -65));
        var_19 = 4294967295;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        arr_32 [i_10] = (arr_30 [i_10] [i_10]);
        arr_33 [i_10] [i_10] = (((var_9 ? 1 : var_4)));
        arr_34 [i_10] = 44;
        arr_35 [i_10] [i_10] = (65535 + 1);
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_20 = (((arr_44 [i_14] [i_14] [3] [i_13] [i_11] [i_11]) / var_5));
                        arr_47 [i_11] [i_12] [12] [i_14] = (((arr_41 [i_12 + 3] [i_13]) ^ (arr_41 [i_11] [i_12 - 2])));
                    }
                }
            }
        }
        var_21 ^= ((-(arr_45 [i_11] [i_11] [i_11])));
        var_22 = (!var_1);

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 4; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 19;i_18 += 1)
                    {
                        {
                            arr_58 [i_11] [i_18] = (arr_37 [i_18] [i_11]);
                            arr_59 [i_18 - 2] [i_18] [1] [i_18] [i_18] [i_18 - 1] = (arr_48 [i_18] [i_18] [i_18 - 2]);
                        }
                    }
                }
            }

            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                arr_64 [i_11] [i_11] [i_15] [i_11] = var_8;
                var_23 = var_7;
                arr_65 [i_11] = (((arr_57 [i_15] [i_11]) == (arr_57 [i_11] [i_11])));
            }
            for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
            {

                for (int i_21 = 0; i_21 < 20;i_21 += 1) /* same iter space */
                {
                    arr_70 [i_20] [i_21] [i_11] = (var_0 | -32300);
                    var_24 = ((!(arr_50 [i_15] [i_15] [i_15])));
                    var_25 = (arr_57 [i_15] [i_15]);
                    arr_71 [i_21] [i_15] [i_15] [i_15] = (arr_63 [i_20]);
                }
                for (int i_22 = 0; i_22 < 20;i_22 += 1) /* same iter space */
                {
                    var_26 ^= ((2147483647 >> (((~var_0) + 36))));

                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        arr_78 [i_23] [i_22] [i_20] [i_15] [i_15] [i_11] = arr_68 [i_15] [2] [2] [i_23];
                        arr_79 [i_11] [i_11] [i_11] [i_11] [i_11] = var_7;
                        var_27 = (max(var_27, (1 >= 337334788515896858)));
                    }
                    for (int i_24 = 1; i_24 < 18;i_24 += 1)
                    {
                        var_28 = var_1;
                        arr_83 [1] [1] [i_20] [19] [i_22] [1] = -2663102938029981828;
                    }
                    arr_84 [i_22] [i_20] = (((arr_73 [i_22]) ^ (((arr_72 [i_22] [i_11] [9] [i_15] [i_11] [i_11]) & (arr_46 [i_22] [i_20] [i_11] [i_11])))));
                }
                for (int i_25 = 1; i_25 < 18;i_25 += 1)
                {

                    for (int i_26 = 0; i_26 < 20;i_26 += 1) /* same iter space */
                    {
                        var_29 = var_0;
                        arr_90 [i_11] [i_15] [i_20] [i_25 - 1] [i_26] = 4322658376742432693;
                    }
                    for (int i_27 = 0; i_27 < 20;i_27 += 1) /* same iter space */
                    {
                        var_30 = (max(var_30, (((~(arr_50 [i_25 + 1] [i_25 + 1] [i_20]))))));
                        var_31 = var_9;
                        arr_94 [i_15] [i_20] [i_15] |= (arr_67 [i_15] [i_11]);
                    }
                    var_32 = (min(var_32, 11));
                    var_33 = 16;
                    arr_95 [i_11] [i_11] [4] [i_11] [4] [i_25 - 1] = (((arr_44 [i_25 - 1] [8] [i_25 + 2] [i_25] [i_25 + 1] [i_25 - 1]) && (arr_44 [i_25 - 1] [i_25] [i_25 + 2] [i_25 - 1] [i_25 + 1] [i_25 - 1])));
                    arr_96 [i_11] [i_20] [i_15] [i_11] [i_11] = (((arr_72 [i_25 - 1] [i_25 - 1] [i_25] [i_25 + 1] [i_25] [i_25 + 1]) ? 0 : (arr_72 [i_25 + 2] [i_25 + 2] [i_25 + 2] [i_25 + 2] [i_25] [i_25])));
                }
                for (int i_28 = 0; i_28 < 20;i_28 += 1)
                {
                    var_34 *= (~var_1);
                    var_35 ^= (arr_66 [i_20]);
                }
                arr_99 [i_11] = ((!(arr_73 [i_11])));
            }
            for (int i_29 = 0; i_29 < 20;i_29 += 1) /* same iter space */
            {
                arr_103 [i_11] [i_11] [i_29] = var_0;

                for (int i_30 = 0; i_30 < 20;i_30 += 1)
                {
                    arr_108 [i_29] [1] [4] [i_30] = (arr_36 [i_30]);
                    arr_109 [i_30] [i_29] [i_29] [i_29] [i_11] = (arr_57 [i_11] [i_29]);
                }
                for (int i_31 = 2; i_31 < 18;i_31 += 1)
                {
                    arr_114 [i_29] [i_29] [i_29] [i_29] [i_11] = var_11;
                    var_36 = -127;
                }
                arr_115 [i_29] [i_11] [19] [10] = var_3;
            }
            var_37 = (arr_101 [5] [16] [i_15] [i_15]);
        }
        /* LoopNest 2 */
        for (int i_32 = 0; i_32 < 20;i_32 += 1)
        {
            for (int i_33 = 1; i_33 < 17;i_33 += 1)
            {
                {
                    var_38 = (min(var_38, (arr_119 [i_33 + 1] [i_33 + 1] [i_32])));
                    arr_121 [i_33] [i_32] = var_0;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_34 = 1; i_34 < 12;i_34 += 1)
    {
        var_39 = (min(var_39, (1 * var_0)));
        arr_124 [i_34] = -25;
    }
    for (int i_35 = 0; i_35 < 10;i_35 += 1)
    {
        arr_127 [i_35] = ((!18638) >= (var_1 != var_0));
        arr_128 [i_35] = (~var_3);
        var_40 = (arr_74 [i_35] [i_35]);
        var_41 = (arr_110 [i_35] [i_35]);
    }
    for (int i_36 = 0; i_36 < 18;i_36 += 1)
    {
        var_42 = (arr_112 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36]);
        arr_132 [i_36] [i_36] = ((((min((arr_116 [i_36] [i_36]), (arr_116 [i_36] [i_36])))) - (arr_49 [i_36] [i_36] [i_36])));
        arr_133 [i_36] = min(((min(-1616589260, 18446744073709551615))), -var_4);

        /* vectorizable */
        for (int i_37 = 1; i_37 < 16;i_37 += 1)
        {
            var_43 = (max(var_43, (arr_57 [i_36] [i_37 + 2])));
            /* LoopNest 2 */
            for (int i_38 = 1; i_38 < 17;i_38 += 1)
            {
                for (int i_39 = 0; i_39 < 1;i_39 += 1)
                {
                    {
                        arr_146 [i_39] = -108;
                        var_44 = (var_6 || var_1);
                        var_45 = ((~(arr_142 [i_37 - 1])));
                        arr_147 [i_37 + 1] [i_37 - 1] [i_37] [i_37] [8] [8] = (arr_72 [i_36] [i_36] [i_38 - 1] [i_36] [i_38 - 1] [i_38 - 1]);
                    }
                }
            }
        }
    }
    var_46 -= ((var_5 ? var_6 : (min(var_0, (min(-24560, 268435456))))));
    #pragma endscop
}
