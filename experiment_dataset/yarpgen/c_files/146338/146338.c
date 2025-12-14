/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_10 *= (((arr_0 [i_0]) >= (max((arr_4 [i_0] [7] [i_0]), ((268434432 / (arr_3 [i_0])))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_12 [i_4] [i_3] [2] [4] [2] = var_1;
                            var_11 = (((((arr_4 [i_1] [i_2] [5]) * (arr_7 [i_4] [i_3] [i_1] [i_0]))) >= 44641));
                            var_12 = -97;
                        }
                    }
                }
                var_13 = (max(var_13, var_5));
                var_14 -= (arr_11 [i_0]);
            }
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_17 [i_0 - 1] [i_0 - 1] [i_5] = ((((min(var_2, (arr_16 [i_0 - 1] [i_5] [i_5])))) % 55750));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] [i_6] = (max(((44641 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))), (arr_0 [i_0 - 1])));
                            arr_26 [i_0] [11] [i_6] [i_7] [i_6] = ((((((((!(arr_9 [i_8] [3] [3] [3] [3]))) && (((arr_7 [i_5] [i_5] [i_6] [i_7]) && var_9)))))) >= (max((arr_24 [i_0 + 1] [i_0 + 1] [i_0] [i_8 - 3] [i_8 + 3]), 54377))));
                            var_15 = ((+(((1 * 20909) ? ((26546 ? (arr_22 [i_0] [i_5] [i_6] [i_6]) : var_8)) : var_9))));
                            var_16 = (max((20897 / -4267), (arr_6 [i_6] [i_5] [i_0])));
                            var_17 = (max(var_17, ((((arr_2 [i_0 - 1]) + (((!(arr_2 [i_8 + 1])))))))));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 3; i_9 < 11;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_18 += (arr_33 [i_0 - 1] [i_11 + 2] [i_11 + 2]);
                            var_19 = (max(var_19, 26536));
                        }
                    }
                }
                arr_35 [i_9] [i_5] [i_5] [i_0 + 1] = ((168 / (arr_32 [i_9 - 3] [i_9 + 1] [i_9])));
                var_20 = (((((74 ? (arr_20 [i_0] [i_5] [i_0]) : -717336684))) ? (arr_19 [7] [i_5] [i_0 + 1] [i_0]) : (((arr_11 [i_9]) ? (arr_3 [i_0]) : (arr_29 [i_0] [0])))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_21 *= ((((!(arr_32 [i_0] [i_5] [i_0])))) >> (((arr_13 [i_0]) - 21729)));

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_22 = var_7;
                    arr_42 [i_0 - 1] [i_5] [i_13] [i_13] [i_13] = 13407190378082312407;
                    arr_43 [i_13] [i_13] [i_13] [i_13] = -1;
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    {
                        arr_49 [i_15] [i_15] = (max((((arr_10 [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14 + 2]) ? (arr_10 [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_14] [i_14]) : var_4)), ((min((arr_10 [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14]), (arr_10 [i_14 + 1] [i_14] [i_14] [i_14 + 1] [10] [i_14]))))));
                        arr_50 [4] [i_5] [i_14] [i_14] &= ((((!(arr_4 [i_5] [i_5] [i_14 + 1]))) ? (((((arr_4 [0] [i_0] [i_14 - 1]) || (arr_6 [7] [7] [i_14 + 1]))))) : (max(var_5, (arr_6 [i_5] [0] [i_14 + 1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 8;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                {
                    arr_57 [i_0 + 1] [i_16 + 1] [i_17] [i_17] = (!-1);
                    arr_58 [i_16] [i_16] [i_16] [i_16] = (((-432154538 | var_8) + var_9));
                    var_23 &= var_9;
                }
            }
        }
        var_24 = (max(var_24, ((min(((var_3 ? (!var_9) : var_7)), ((((arr_29 [i_0] [i_0]) && var_5))))))));
        var_25 = 44631;
    }

    /* vectorizable */
    for (int i_18 = 3; i_18 < 9;i_18 += 1)
    {
        arr_63 [i_18] = (!var_5);
        var_26 = (min(var_26, (((!(((-2147483647 - 1) > (arr_37 [i_18] [i_18] [i_18] [i_18]))))))));
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 9;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 9;i_20 += 1)
            {
                {
                    arr_71 [6] [2] [i_18] [i_20] = -var_2;

                    for (int i_21 = 1; i_21 < 9;i_21 += 1)
                    {
                        var_27 = ((-(arr_53 [i_20] [i_19 + 1] [i_18 - 1])));
                        arr_75 [i_18] [i_19] [i_18] = ((var_7 || (arr_0 [i_18 - 1])));
                        var_28 = 127;
                    }
                    for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
                    {
                        var_29 += (((arr_59 [i_18] [i_20]) ? ((var_4 ? var_1 : (arr_11 [i_18 - 3]))) : (arr_47 [i_20] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_19] [i_19])));
                        var_30 -= (99 || -197);
                        arr_79 [i_18] [9] [i_20 + 1] [i_22] = ((4294967295 || (arr_22 [i_22] [0] [10] [i_18])));
                    }
                    for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
                    {
                        var_31 -= 2;
                        var_32 = (((((6 ? -7484 : var_3)) + 2147483647)) << (((arr_11 [i_20 + 1]) - 1156471481401636597)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_24 = 2; i_24 < 7;i_24 += 1)
        {
            for (int i_25 = 1; i_25 < 9;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 8;i_26 += 1)
                {
                    {
                        arr_89 [i_18] [i_24] [i_18] [i_26] = (-29172 % -341607369314838829);
                        var_33 = (arr_76 [i_18] [i_18] [i_18] [i_18]);
                    }
                }
            }
        }
    }
    for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
    {
        arr_92 [i_27] [i_27] = (arr_91 [i_27]);
        var_34 = (max(var_34, (arr_91 [i_27])));
        arr_93 [i_27] [i_27] = var_3;
        var_35 = (max(var_35, var_8));
    }
    /* vectorizable */
    for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
    {
        arr_96 [i_28] [i_28] = 0;
        var_36 -= 3;
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 14;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 14;i_30 += 1)
            {
                {
                    arr_104 [i_28] [i_29] [i_30] = ((7484 ? (((!(arr_102 [i_28] [i_29] [i_28])))) : (arr_101 [i_28] [i_28])));
                    arr_105 [4] [i_29] [i_30] = -var_0;

                    for (int i_31 = 0; i_31 < 14;i_31 += 1)
                    {
                        var_37 -= (((((arr_97 [i_29] [i_31]) && (arr_100 [1]))) && (((arr_107 [i_29]) || 49544423))));
                        var_38 -= 31;
                        arr_108 [i_28] [i_28] [i_30] [i_31] [i_29] = ((var_8 && (arr_102 [i_28] [2] [i_30])));
                    }
                }
            }
        }
    }
    for (int i_32 = 0; i_32 < 1;i_32 += 1) /* same iter space */
    {
        arr_112 [i_32] |= (max(((max((var_2 % 11171), (arr_101 [i_32] [i_32])))), ((794453318 ? (((max((arr_107 [i_32]), var_0)))) : (arr_90 [13] [i_32])))));
        var_39 = (((((arr_97 [i_32] [i_32]) ? 7496 : (arr_109 [i_32]))) % (((max((!var_8), (min(var_2, var_2))))))));
        arr_113 [3] = ((((((((arr_99 [i_32] [i_32]) ? var_4 : 16))))) * (min(-11159, (arr_100 [i_32])))));
        var_40 += var_4;
    }
    #pragma endscop
}
