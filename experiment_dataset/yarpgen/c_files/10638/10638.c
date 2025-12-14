/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((2942 ? var_5 : 1)))));
        arr_2 [i_0] [i_0] = 1141769853;
        var_20 = ((!(arr_0 [i_0 - 1])));
        var_21 = ((!(var_11 | 2190409082)));
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_22 = 3935000957;
        arr_7 [i_1] = (min((arr_5 [i_1] [i_1]), var_11));
        var_23 = (1 ? ((0 ? (max(var_16, var_14)) : var_0)) : 1);
        arr_8 [i_1] = ((((((arr_0 [i_1 - 1]) ? var_0 : (arr_6 [i_1])))) ? (18 == var_9) : ((max(-22683, 1)))));
        arr_9 [i_1] = var_8;
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (((var_4 - (1 - var_0))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                arr_17 [i_3] [i_3] [i_3] = (~var_10);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_23 [i_2] [3] [i_3] [i_2] [i_6] = ((((min((arr_13 [i_4 - 1]), 117))) || ((((var_11 & var_1) ? (max(var_15, (arr_13 [i_2]))) : ((max(var_11, var_13))))))));
                            arr_24 [i_2] [i_2] [i_3] [i_2 + 3] [i_2] = (max((~var_9), ((2190409082 ? 2104558207 : 18))));
                            arr_25 [i_2] [i_2] [i_3] [i_2 + 4] = -19137;
                            var_25 = ((var_3 << (!var_2)));
                            var_26 = ((!((min(var_1, ((max(-98, 26))))))));
                        }
                    }
                }
                var_27 += (1 > var_0);
            }

            for (int i_7 = 3; i_7 < 23;i_7 += 1)
            {
                var_28 = 1;
                arr_28 [i_3] = ((((((arr_20 [i_7 - 2] [i_7] [i_3]) ? 174 : (arr_20 [i_7 - 2] [i_3] [i_3])))) ? 2104558197 : var_2));
            }
            for (int i_8 = 3; i_8 < 22;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {

                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        arr_36 [8] [i_3] [i_8] [i_3] [i_2] = ((((max(((var_17 ? 14 : var_11)), (1740476885 && var_2)))) || (var_12 | var_3)));
                        arr_37 [i_3] [2] [8] [i_9 - 3] [i_10] = var_18;
                    }

                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        arr_41 [i_9] [i_3] = (max(((var_4 ? ((max(var_5, 60753))) : var_18)), ((((max((arr_38 [i_2] [i_9 + 3] [i_8 + 2]), 726282462)) != 1)))));
                        arr_42 [i_2] [i_2] [i_3] [i_8] [i_9] [i_11] = (min((((max(65520, -816785807)))), (max(var_11, (max(var_7, var_1))))));
                    }
                    arr_43 [i_2 - 1] [i_3] [i_3] [i_9 - 2] = ((~(min(((max(var_10, var_5))), var_1))));
                }

                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    arr_46 [i_3] [i_8] [i_2] [i_3] = var_5;
                    var_29 *= (min(1636108956, var_11));
                    arr_47 [i_12] [i_3] [i_3] [i_2] = ((1636108956 ? (min(var_10, (max(var_2, var_16)))) : 0));

                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        arr_50 [i_3] [i_12 + 1] [i_3] [i_8] [i_3] [i_3] = (+-22683);
                        var_30 -= (min(var_15, ((var_15 ? var_17 : var_16))));
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        arr_55 [i_3] [i_12] [5] [i_3] = (!-19);
                        arr_56 [i_2] [i_3] [i_8 - 1] [i_12] [i_14] = ((0 || (((-(arr_21 [i_2] [i_2 + 4] [i_8 + 2] [7] [11] [i_8] [i_12 + 1]))))));
                    }
                }
                var_31 = ((!((((~(arr_31 [i_8] [16] [i_2])))))));
            }
            /* vectorizable */
            for (int i_15 = 1; i_15 < 21;i_15 += 1)
            {
                arr_59 [i_2 + 3] [i_3] [i_15] [i_3] = ((-5624 ? var_2 : var_18));
                var_32 = 1;
                var_33 -= (!-213127723);
                arr_60 [i_3] = var_5;
                var_34 = var_6;
            }
        }
        arr_61 [i_2 + 1] = (~1);
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
    {
        arr_65 [i_16] = (var_11 || var_6);
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    {

                        for (int i_20 = 3; i_20 < 23;i_20 += 1) /* same iter space */
                        {
                            arr_78 [i_16] [i_16] [i_18] [i_19] [i_20] = 63;
                            var_35 *= 1;
                        }
                        for (int i_21 = 3; i_21 < 23;i_21 += 1) /* same iter space */
                        {
                            var_36 -= 2108178347091432976;
                            arr_81 [i_16] [i_16] [i_18 + 1] [i_18 + 1] = (var_2 ? var_18 : 583634462);
                            var_37 = (max(var_37, var_8));
                            var_38 = (arr_64 [i_17]);
                            arr_82 [i_16] [i_17] [i_18] [i_19] [i_16] = -41;
                        }
                        arr_83 [i_16] [3] [i_17] [i_16] = 1;
                        var_39 = ((var_18 & (!var_13)));

                        for (int i_22 = 3; i_22 < 22;i_22 += 1)
                        {
                            arr_86 [i_17] [i_16] = var_9;
                            arr_87 [i_16 - 1] [i_18] [i_16] [i_19] [i_22] [i_17] [i_18] = 66;
                            arr_88 [i_16] [22] [i_16] [22] [i_19] [i_17] [i_16] = var_13;
                        }
                        for (int i_23 = 2; i_23 < 22;i_23 += 1)
                        {
                            var_40 *= (((var_11 ? var_7 : var_2)));
                            var_41 = var_5;
                            arr_92 [3] [i_19] [i_16] [i_17] [0] = (~(arr_48 [i_16 - 1] [i_17] [7] [i_16 - 1] [i_18 - 2] [i_17 + 3]));
                        }
                    }
                }
            }
        }
        arr_93 [i_16] = var_1;
    }
    var_42 ^= var_11;
    var_43 ^= ((((max(255, 1))) ^ var_13));
    var_44 |= var_11;
    var_45 = (max((((var_17 ? var_13 : ((max(var_10, 122)))))), (((((1 ? var_10 : 4194303))) % (max(var_9, var_15))))));
    #pragma endscop
}
