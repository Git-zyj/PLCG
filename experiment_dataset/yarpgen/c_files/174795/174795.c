/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((max(131071, 7642)) - ((((-131072 * -131071) ? (336888262 * var_9) : (((var_7 ? -1 : 158)))))))))));
                                var_13 += ((((-(min(3958079033, var_3)))) - -29780));
                                var_14 = (max(var_14, var_9));
                                var_15 = var_3;
                            }
                        }
                    }
                    var_16 = ((((((min(var_6, var_6))) - (max(0, var_10))))));
                    var_17 = (max(var_17, (arr_10 [i_0] [i_0] [i_0] [i_1 + 2] [i_2])));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_18 = (min(var_5, var_1));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_19 = (min(var_7, (((1 * 14932563650191051937) * ((14932563650191051955 ? 5593433538719692696 : 131070))))));
                            var_20 = ((min(65535, var_2)));
                            var_21 = 3524977187;
                            var_22 = (min(var_22, ((min(((var_0 ? var_10 : var_11)), ((min(var_5, (min(var_7, var_2))))))))));
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_23 = (((((2139095040 / (~117440512)))) ? (max(var_3, (-62 ^ 14932563650191051937))) : (((~(arr_5 [i_8 - 1] [i_8 + 1] [i_6] [i_6 - 1]))))));
                            var_24 -= (!37);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            var_25 = ((var_3 ? ((((arr_0 [7]) ? 0 : -58))) : 3514180423518499679));
                            var_26 = (arr_21 [i_6] [i_6] [i_6] [i_8 - 1]);
                            var_27 = (~0);
                            var_28 = (min(var_28, ((((~28998) * ((var_2 ? var_8 : var_11)))))));
                        }
                        var_29 ^= (max((((arr_21 [i_5] [i_6] [i_7] [i_6]) - var_11)), ((max((arr_21 [i_8] [i_7] [i_6 + 1] [i_5]), -8206)))));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    var_30 = ((var_0 - ((min(((min(1, var_8))), (var_4 * var_1))))));
                    var_31 = (min(var_31, (((((max(14, var_1))) ? ((4294967295 - (arr_32 [i_12]))) : (!2069913604))))));
                    var_32 = (max(var_32, (((((max(var_11, 13564083816812388113)) - -117))))));
                }
            }
        }
        var_33 |= ((((min(-var_0, (var_7 * var_5)))) ? (min((arr_37 [i_12] [i_12]), -1)) : (((((var_0 ? var_2 : var_9))) ? (~101) : ((0 * (arr_33 [i_12])))))));
    }
    for (int i_15 = 4; i_15 < 19;i_15 += 1)
    {
        var_34 = (((var_2 * 1) - (arr_35 [i_15] [i_15 - 4] [i_15])));
        var_35 = ((((((arr_35 [i_15 + 1] [i_15] [i_15]) * (arr_39 [i_15 - 2])))) - ((14932563650191051937 ? var_8 : var_2))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 3; i_19 < 19;i_19 += 1)
                        {
                            {
                                var_36 = (((((((3514180423518499661 ? 14 : var_3)) / (~var_0)))) ? (min(((var_4 ? 18446744073709551613 : var_3)), (18446744073709551609 * var_3))) : -var_2));
                                var_37 = -1387719745505879421;
                                var_38 = ((~(((!(!5771014415527922694))))));
                                var_39 = (max(var_39, (!var_5)));
                            }
                        }
                    }
                    var_40 = -1654;
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        for (int i_21 = 2; i_21 < 21;i_21 += 1)
                        {
                            {
                                var_41 = (var_8 - 424228625);
                                var_42 = ((((1 ? 14932563650191051945 : 2216615441596416)) * ((max((arr_37 [i_15 - 3] [i_15 - 3]), (min(var_6, 4294967295)))))));
                                var_43 ^= ((((max(var_7, var_1))) - (min(var_3, (arr_51 [i_17 - 1] [3] [i_17 - 1])))));
                                var_44 = (((((-1387719745505879421 ? (((min(28269, var_1)))) : 18444527458267955199))) ? ((var_6 ? -1012701189 : 14526195904710017295)) : ((87 ? var_1 : 7))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
