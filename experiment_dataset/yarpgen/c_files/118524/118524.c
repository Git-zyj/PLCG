/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_1) / ((var_8 ? -1 : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 ^= (((arr_5 [i_0 + 2] [i_1] [i_2] [i_0 + 2]) <= (((min((arr_2 [i_3] [i_0]), -1)) % var_9))));
                            var_14 = (min(var_14, ((((~15) && ((((arr_3 [i_0 + 2]) * var_2))))))));
                            arr_11 [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2] = (arr_8 [i_3] [i_2] [i_1]);
                        }
                    }
                }
                var_15 = (min(var_15, ((min(0, (((!(((~(arr_6 [i_1] [i_1] [i_0 + 1] [i_0 + 1]))))))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_16 ^= ((var_9 || var_7) != (((min((arr_6 [5] [i_1] [i_4] [i_5 - 1]), (arr_9 [i_0] [i_0] [i_0] [13]))) - -var_2)));
                            var_17 = (max(var_17, 255));

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_18 *= (min(((min((arr_4 [i_5 + 2] [14] [i_0 + 2]), var_9))), (min((arr_4 [i_5 + 2] [i_1] [i_0 - 1]), var_7))));
                                arr_18 [i_0] [i_0] [i_5] [i_5] [i_6] = var_10;
                                arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [i_5] = (arr_14 [i_1] [i_1]);
                            }
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_19 = (min(var_19, (arr_1 [i_0 - 2])));
                                arr_22 [i_0 + 2] [i_5] [i_0 + 2] [i_0 + 2] [i_5] = (arr_1 [i_0]);
                                var_20 = (min((((!(arr_7 [12] [i_4])))), (arr_6 [2] [i_1] [i_1] [i_1])));
                            }
                            var_21 = ((var_1 ^ (min(((var_3 & (arr_20 [i_0] [i_0 + 2] [i_1] [i_4] [i_5] [i_5]))), var_3))));
                        }
                    }
                }
                var_22 = ((~((~(((!(arr_14 [i_0] [i_1]))))))));
            }
        }
    }
    var_23 = (max((max((~var_4), var_5)), ((min(18446744073709551615, var_3)))));

    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        var_24 = (((arr_23 [i_8 - 1]) && ((min((arr_23 [i_8]), var_2)))));
        var_25 = (min(var_25, (((3 / ((max(((min(7, 1006))), (arr_23 [i_8 + 1])))))))));
        var_26 = (max(var_26, ((((min(var_8, ((16421626116125239792 + (arr_25 [i_8]))))) < (arr_25 [i_8]))))));
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {

        for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
        {
            var_27 = (min((min((arr_24 [i_9 + 4] [i_9 + 2]), (arr_25 [i_9 + 4]))), ((~(arr_25 [i_9 + 4])))));
            var_28 = (-(arr_25 [i_10]));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        var_29 = (min(6322488676445435229, 1));

                        for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
                        {
                            var_30 = (min(var_30, ((max((arr_23 [i_9 + 1]), (1681720242 / -5635668225652998119))))));
                            var_31 = (max(var_31, ((((-(arr_30 [i_9 + 4] [i_10 - 1] [i_13 + 3])))))));
                        }
                        for (int i_14 = 1; i_14 < 19;i_14 += 1) /* same iter space */
                        {
                            var_32 = var_5;
                            var_33 = (arr_29 [i_14 + 1] [i_14 + 2] [i_14 + 1]);
                        }
                        var_34 |= (arr_39 [i_9] [i_9 + 4] [i_10 - 1] [i_9 + 4] [i_10] [i_11] [i_9]);
                        var_35 = (arr_43 [i_10 + 3] [i_10 - 1] [i_10 - 2] [i_10] [i_9 + 3] [i_9 + 2] [i_9]);
                    }
                }
            }
            var_36 ^= (((((((max(var_11, (arr_32 [i_9 + 3] [i_9 + 3] [i_10])))) ? (arr_43 [i_10] [i_10] [i_10 - 2] [i_10] [i_10] [i_10] [i_9]) : 9636702802955118755))) && ((((!46257) * ((((arr_32 [i_9] [i_9 - 1] [i_9]) > (arr_28 [i_9])))))))));
        }
        for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
        {
            var_37 = ((-((((arr_24 [i_9] [i_9]) > 620648895959203505)))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    {
                        var_38 = (((arr_41 [i_17] [i_16] [14]) >= (arr_26 [i_9])));

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 22;i_18 += 1)
                        {
                            var_39 = (max(var_39, var_6));
                            var_40 = (!var_9);
                            var_41 = arr_28 [i_9 - 1];
                            var_42 ^= (arr_28 [i_9]);
                            var_43 = (max(var_43, (arr_29 [i_9 + 2] [i_15] [i_15 + 1])));
                        }
                    }
                }
            }
        }
        var_44 = (min(var_44, var_10));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_45 &= (arr_53 [i_19]);
        var_46 |= ((((((arr_31 [i_19] [i_19] [i_19]) ? (((min(var_2, (arr_41 [i_19] [i_19] [i_19]))))) : var_1))) - (min(((-(arr_31 [i_19] [i_19] [1]))), ((4294967291 | (arr_10 [i_19])))))));
        /* LoopNest 3 */
        for (int i_20 = 2; i_20 < 14;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 13;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 15;i_23 += 1)
                        {
                            arr_66 [13] [i_20 - 1] [13] [i_21 + 1] [i_22] [i_23] [i_23] = (var_7 - (max((arr_5 [i_20 - 2] [i_20 - 2] [i_22] [i_23]), (arr_0 [i_19]))));
                            var_47 += (min(((min(var_0, (arr_46 [4] [i_21] [i_22] [8])))), (((!((max(var_1, -1))))))));
                            var_48 ^= (max((!var_1), ((var_5 ? (arr_47 [14] [i_20 - 1] [14] [i_22]) : (arr_50 [i_19] [i_20 - 2] [i_21 + 1] [i_22] [i_20])))));
                            var_49 = arr_65 [i_19];
                            arr_67 [i_22] [i_22] [i_22] [i_22] [i_23] = ((~((var_9 + (arr_41 [i_20 - 2] [i_22] [i_23])))));
                        }
                        /* vectorizable */
                        for (int i_24 = 2; i_24 < 11;i_24 += 1)
                        {
                            var_50 ^= (arr_12 [i_19] [i_19]);
                            var_51 = (min(var_51, (arr_13 [12] [12] [12])));
                            arr_71 [i_19] [i_20 - 1] [i_22] [i_22] [i_24 + 2] = (arr_24 [i_20] [i_19]);
                        }
                        for (int i_25 = 0; i_25 < 15;i_25 += 1)
                        {
                            var_52 = var_7;
                            arr_75 [i_19] [i_20] [i_21] [i_22] [i_25] = (arr_59 [i_19] [i_20] [i_21] [10] [i_25]);
                            arr_76 [i_19] [i_20] [i_20] [i_22] [i_20] = var_3;
                        }
                        arr_77 [12] [i_22] [6] [i_22] [i_19] = (((((min(var_7, 15008)))) * (max((arr_31 [i_19] [2] [i_22]), (arr_58 [i_19] [i_20] [i_21] [i_19])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
