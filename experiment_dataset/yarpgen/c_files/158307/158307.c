/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_12 = (arr_1 [i_0]);

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_13 = (max(var_13, ((((arr_2 [4] [i_2]) - ((-634254121 ? ((49398 ? (arr_6 [i_2] [i_2] [i_1] [i_0 + 1]) : 16137)) : (((arr_8 [i_0] [i_1 + 1] [i_2] [i_2]) ? (arr_2 [i_1] [i_1]) : -13451)))))))));
                var_14 = var_1;
                var_15 = (min(var_15, (((!((min(((((arr_1 [8]) != var_6))), (arr_5 [i_2] [14] [2])))))))));
            }
        }
        var_16 = (max(var_16, var_11));
        var_17 = (arr_1 [i_0]);
    }
    var_18 ^= var_10;

    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_19 = (((arr_11 [i_3 + 2] [i_3 + 2]) ? var_10 : (arr_11 [i_3 - 2] [i_3 + 1])));
        var_20 = (34372 % var_8);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    var_21 = (((arr_5 [i_3] [i_3] [i_5]) / var_5));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_22 = (((arr_18 [i_4] [i_4] [i_5] [5]) ? (arr_23 [i_4 + 1] [i_7 + 2] [i_5 + 1] [2] [0]) : (arr_1 [i_4])));
                                var_23 = 34372;
                                var_24 = 16137;
                                var_25 += var_11;
                            }
                        }
                    }
                    var_26 = (((arr_12 [i_4 + 2] [i_3 + 1]) ? (arr_12 [i_4 + 2] [i_3 + 1]) : (arr_17 [i_3 + 1])));
                    var_27 = ((!(arr_17 [i_4])));
                    var_28 = (arr_3 [i_5] [i_5 + 2] [i_5]);
                }
            }
        }

        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            var_29 |= (((var_1 * var_1) ? ((var_0 ? (arr_16 [i_3] [i_8 - 1]) : (arr_2 [i_3] [8]))) : var_8));

            for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_30 = var_9;
                var_31 = (arr_23 [8] [8] [8] [10] [8]);
                var_32 = (min(var_32, (((~(arr_12 [i_8] [i_8 + 1]))))));
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_33 = var_3;
                var_34 = (arr_15 [i_3 - 1] [i_10] [4]);
                var_35 = var_3;
            }
            var_36 = ((1161 + (arr_34 [i_3 - 2] [i_8] [4] [i_3])));
        }
        for (int i_11 = 4; i_11 < 11;i_11 += 1)
        {
            var_37 += (var_0 ? var_0 : (arr_29 [i_3 - 2] [i_3 - 2] [i_3]));
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 9;i_14 += 1)
                    {
                        {
                            var_38 = (var_7 ? var_9 : var_1);
                            var_39 = (min(var_39, (((-(arr_24 [i_3] [10] [i_12] [0] [i_3]))))));
                            var_40 = var_5;
                            var_41 = var_6;
                        }
                    }
                }
            }
        }
        for (int i_15 = 1; i_15 < 10;i_15 += 1)
        {
            var_42 += var_3;
            var_43 = ((((var_11 == (arr_18 [i_3] [i_15] [i_15] [4]))) ? 16122 : ((2390400869416265967 ? var_0 : var_9))));

            for (int i_16 = 3; i_16 < 8;i_16 += 1)
            {
                var_44 = (((arr_15 [i_16 - 1] [i_16] [i_16 + 2]) | (arr_15 [7] [7] [i_16 + 3])));
                var_45 = arr_31 [i_16];

                for (int i_17 = 1; i_17 < 10;i_17 += 1) /* same iter space */
                {
                    var_46 += var_1;
                    var_47 = (arr_50 [i_17 - 1]);
                    var_48 = (min(var_48, ((((arr_50 [i_16]) ? (!var_7) : (~-2147483645))))));
                    var_49 = ((23 ? (-32767 - 1) : 16144));
                    var_50 = (arr_9 [i_3] [i_16]);
                }
                for (int i_18 = 1; i_18 < 10;i_18 += 1) /* same iter space */
                {
                    var_51 = (max(var_51, ((((arr_20 [i_3 - 2] [10]) ? 14166 : (arr_20 [i_3 + 1] [i_15 - 1]))))));
                    var_52 = var_3;
                    var_53 -= var_6;
                    var_54 = var_3;
                    var_55 = (max(var_55, ((((arr_51 [3] [3] [i_18 - 1]) != (49403 / var_10))))));
                }
            }
            for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
            {
                var_56 = (var_5 - var_9);
                var_57 = (((arr_8 [i_15 + 2] [i_3 - 1] [i_3 + 2] [6]) == 3267));
            }
            for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
            {
                var_58 += (arr_43 [i_3] [i_3] [i_20]);
                var_59 = var_8;
            }
            for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 12;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        {
                            var_60 = ((((((arr_11 [i_22] [i_23]) ? (arr_2 [i_22] [5]) : (arr_47 [i_3] [i_21] [i_21])))) && (arr_3 [i_3 - 2] [i_22] [i_23])));
                            var_61 = (max(var_61, ((((!32767) ? (-2147483647 - 1) : -1118762829)))));
                            var_62 = var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 12;i_24 += 1)
                {
                    for (int i_25 = 2; i_25 < 11;i_25 += 1)
                    {
                        {
                            var_63 = ((~(arr_48 [i_25 + 1] [i_21] [i_3 + 2])));
                            var_64 = var_11;
                            var_65 = ((1223844746 ? 30613 : 7202399367787398480));
                            var_66 = var_7;
                        }
                    }
                }
                var_67 = (arr_77 [i_21] [i_21] [i_3 + 1]);
            }
            var_68 = ((var_0 ? (var_3 || 33554431) : (arr_11 [3] [3])));
            var_69 &= 18446744073675997184;
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 20;i_26 += 1)
    {
        var_70 = var_9;
        var_71 = -1223844746;
        var_72 = (var_1 - (arr_80 [i_26]));
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 20;i_27 += 1)
        {
            for (int i_28 = 2; i_28 < 17;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    {
                        var_73 = (var_11 ^ 16144);
                        var_74 = (((arr_78 [i_28 - 1]) ? var_5 : (arr_90 [i_26] [i_27])));
                    }
                }
            }
        }
    }
    for (int i_30 = 2; i_30 < 13;i_30 += 1)
    {
        var_75 = ((var_6 ? (((min(var_9, var_0)))) : ((31163 ? (!var_3) : ((min((arr_81 [5] [i_30 - 1]), (arr_83 [i_30] [i_30 - 2]))))))));
        var_76 = (((arr_85 [i_30 + 2]) && ((min((arr_89 [i_30 - 1] [i_30 + 4] [i_30 - 1] [0]), (arr_85 [i_30 + 4]))))));
        var_77 = (min(16132, var_11));
    }
    for (int i_31 = 0; i_31 < 23;i_31 += 1)
    {
        var_78 ^= ((((min(var_5, 195310673)) & 19131)));
        var_79 += var_5;

        /* vectorizable */
        for (int i_32 = 1; i_32 < 21;i_32 += 1)
        {
            var_80 ^= ((-var_7 ? (((arr_96 [i_31] [12] [22]) ? (arr_96 [i_31] [8] [0]) : (arr_94 [i_32 + 2]))) : (arr_94 [i_31])));
            var_81 = ((43610 >= (arr_97 [i_32 + 2])));
            var_82 = arr_96 [i_31] [i_31] [i_32];
        }
        /* vectorizable */
        for (int i_33 = 3; i_33 < 19;i_33 += 1)
        {
            var_83 = (var_9 | (arr_100 [i_31]));
            var_84 = var_4;
            var_85 = var_7;
            var_86 = (arr_99 [i_33]);
        }
    }
    #pragma endscop
}
