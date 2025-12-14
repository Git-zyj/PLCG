/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_3] = (min((arr_4 [i_2 + 1]), (arr_4 [i_2 + 1])));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_20 &= (min(((min(var_2, ((((arr_9 [i_0]) == var_9)))))), (min((min(var_18, var_11)), var_19))));
                            var_21 = (max((((var_19 / (max(var_1, (arr_3 [i_0] [14] [i_4])))))), (max((~var_11), var_7))));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            arr_19 [i_3] = var_7;
                            var_22 = (max(var_22, ((((min(var_14, (((arr_3 [i_1] [i_2] [i_2]) - var_13)))) + (((((max(var_16, var_10))) ? var_5 : 4416939843855902584))))))));
                        }
                        var_23 = (max(var_23, (((((!(((var_19 ? var_10 : var_19))))) ? (var_11 < var_8) : var_7)))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 = (((var_15 + var_7) >> (var_0 + 78)));
                        arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (max(133, 4416939843855902584));
                    }
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        arr_27 [12] [i_7] [9] [i_2] [i_1] [9] = (min(var_6, var_15));
                        arr_28 [i_0 + 2] [i_1] = ((var_1 * (min(((var_13 ? var_10 : (arr_15 [i_0] [i_1] [17] [i_7 - 2] [i_2]))), var_14))));
                        arr_29 [i_0 - 2] [i_0 - 2] [i_0 - 2] = var_14;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_25 = ((-(max(((var_6 ? (arr_31 [12] [i_1] [12] [12] [i_9]) : var_5)), (var_7 >= var_10)))));
                            arr_36 [i_0] [i_0] [4] [i_2] [i_2] [i_0] = (min(-4416939843855902593, 112));
                            var_26 = (min(((((arr_10 [i_2 + 1] [i_0 + 1]) == (arr_6 [i_0 + 2] [i_2 + 1])))), var_3));
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            var_27 = (((~96) ? -var_14 : var_11));
                            arr_40 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1] [2] [4] = (((var_15 ? var_16 : var_10)));
                            var_28 = ((var_0 ? (((arr_2 [i_0 - 2] [i_1] [i_0 - 2]) ? var_12 : (arr_22 [i_0] [i_1] [i_2] [8]))) : -var_12));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_29 = var_15;
                            arr_43 [i_11] = var_7;
                            var_30 += ((var_12 ? var_1 : var_8));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_31 = var_2;
                            arr_47 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_1] |= (min((arr_8 [i_0] [i_0] [i_2 - 1] [6] [i_12]), (min(var_14, (max(var_18, var_4))))));
                            arr_48 [i_12] [i_12] [i_12] [i_2 + 1] [i_8] [i_8] [i_12] = (((max(var_12, (arr_7 [i_0]))) % (arr_25 [i_0 - 1] [i_1] [i_2 + 1] [i_0 + 2])));
                            var_32 ^= (((var_4 || var_11) << (var_14 - 1515682553)));
                            arr_49 [i_12] = ((min((arr_42 [16] [16] [i_12] [i_8]), var_15)));
                        }
                        var_33 ^= ((var_18 ? ((4416939843855902595 ? 6852 : 4416939843855902593)) : var_5));
                        var_34 = (((((min(var_13, var_19))) ? var_0 : ((min(var_19, var_19))))));
                        var_35 |= (((((max(var_10, var_11)) <= (((((arr_4 [i_8]) && var_11)))))) ? ((31 ? -6061542055322963824 : 122)) : (((min(var_5, var_12)) * (min(var_5, var_14))))));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_36 = (arr_34 [i_2] [i_14]);
                                arr_55 [i_0 + 2] [2] [i_0 - 2] [i_0 + 2] [i_0 - 2] = (((((max(var_11, var_14)))) % (((var_11 / var_4) - var_7))));
                                var_37 |= ((((var_11 ? var_12 : var_16))));
                                arr_56 [i_13 + 1] [i_1] [i_2] [i_13 + 1] [i_2] = (min((min(((var_19 ? (arr_38 [i_0 - 2] [i_1] [i_0 - 2] [i_1] [i_14] [i_0 - 2] [i_1]) : (arr_32 [1]))), (arr_41 [i_0 + 1]))), var_14));
                                var_38 = ((((((var_13 - var_14) ? (((var_17 ? var_2 : var_9))) : (arr_7 [i_0])))) || (((var_2 ? var_0 : ((var_19 ? var_13 : (arr_3 [i_0] [i_0] [i_2]))))))));
                            }
                        }
                    }
                    var_39 -= ((((((max(var_12, var_3))) << (((min(var_11, var_19)) - 1647694859))))) ^ (min((arr_38 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 2]), var_18)));
                }
            }
        }
    }

    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        var_40 = var_12;
        arr_59 [i_15] = var_18;
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 9;i_18 += 1)
                {
                    {
                        arr_69 [i_15] [i_15] [i_17] = (min((((((-1883560530142673491 ? 4416939843855902581 : 0))) ? (((min(var_6, var_12)))) : var_18)), ((max(((((arr_67 [6] [i_16] [2] [i_18]) < var_19))), var_4)))));
                        var_41 *= var_16;
                        arr_70 [i_15] [i_16] [i_16] [i_15] |= (min(var_11, ((~(arr_50 [i_18 + 1] [i_18] [i_18 - 1] [i_18] [i_18] [i_18])))));
                    }
                }
            }
        }
    }
    var_42 = 6859;
    #pragma endscop
}
