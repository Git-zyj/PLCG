/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((31 ? 16598535970396850779 : 6213129345815581545)));
        arr_3 [i_0] = (arr_0 [i_0]);
        var_18 = (arr_1 [i_0]);
        arr_4 [i_0] &= ((var_12 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])));
    }
    var_19 = ((((max(((var_10 ? var_3 : var_3)), var_9))) ? var_15 : ((((((var_14 ? var_1 : var_15))) ? var_9 : ((var_16 ? var_14 : var_14)))))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_12 [i_2] [18] [i_1] = (((arr_0 [i_1 + 1]) ? (min((arr_0 [i_1 + 1]), var_6)) : ((max((arr_8 [i_1 + 1] [i_1] [i_3]), (arr_8 [i_1 + 1] [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_4] [i_2] [i_3] [i_4] [i_5] = ((min((max(var_3, var_12)), var_8)));
                                var_20 = (min(var_20, (((((max(var_0, (arr_2 [i_4 - 3] [i_1 + 2])))) ? ((min(3026443515, -623368543))) : (((((var_14 ? var_11 : var_2))) ? (((arr_11 [i_1] [i_1] [i_1] [i_1 + 3]) ? var_15 : var_5)) : (((var_0 ? var_2 : (arr_13 [i_2] [10] [i_3] [i_3] [i_2] [i_2])))))))))));
                            }
                        }
                    }
                }
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_21 -= (((arr_5 [i_1 + 1]) ? (arr_18 [i_6 + 2]) : var_13));
                            var_22 = (min(var_22, (((~(!var_3))))));
                        }
                        var_23 = (((arr_14 [i_6]) ? (arr_14 [i_6]) : (arr_14 [i_6])));
                        arr_26 [i_1] [i_2] [i_6] [i_6] = var_3;
                    }
                    var_24 *= ((((min(var_6, (arr_25 [i_1 - 1] [i_6 - 2] [i_6 - 2] [1] [i_2])))) ? ((~(arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((arr_7 [i_1 + 3]) ? var_5 : (arr_13 [i_2] [i_2] [i_1] [i_1] [i_1 - 1] [i_6 + 1])))));
                    var_25 = (min(var_25, ((min((((arr_19 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_6 - 1]) ? (arr_24 [1] [i_1] [i_2] [i_1] [i_6 - 3]) : var_12)), (((!(((var_10 ? var_13 : (arr_19 [i_1] [i_2] [i_6] [16]))))))))))));
                    arr_27 [i_6] [i_6] [i_6] [i_1] = (min((((((var_11 ? var_2 : (arr_13 [i_6] [i_6] [i_2] [i_2] [i_6] [i_6])))) ? (max((arr_14 [i_6]), var_2)) : (arr_21 [i_1 + 2] [i_2] [i_6 + 2]))), ((((min(var_14, var_7))) ? (min(var_11, var_2)) : ((max(var_1, var_12)))))));
                    var_26 = (max(var_26, ((min(((((((arr_10 [i_1] [i_2] [i_6] [i_1 - 1]) ? var_4 : (arr_18 [1])))) ? ((max(var_7, (arr_23 [i_1] [i_2] [i_6] [2] [i_6])))) : (min((-9223372036854775807 - 1), -1994016969)))), var_7)))));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        var_27 |= ((((max(-9070452863174543336, 1251478669))) ? 12233614727893970070 : -8351503038115621032));
                        var_28 = max(((((((arr_24 [i_1] [i_1 + 2] [i_2] [i_9] [i_10]) ? var_8 : (arr_0 [i_2])))) ? (min(var_5, (arr_13 [i_10] [i_2] [i_9] [i_10] [i_9] [i_10]))) : var_6)), (((min(var_4, (arr_14 [i_10]))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_1] [i_1 + 3] [i_1] [i_11] = -var_16;
                        arr_36 [i_1] [i_9] [i_9] [i_2] [i_9] [i_11] |= (((arr_15 [i_11] [i_2] [i_1] [i_2] [i_1]) ? (arr_15 [i_11] [i_2] [1] [i_2] [i_1]) : (arr_15 [i_2] [i_2] [i_1] [i_2] [i_1])));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                    {
                        arr_40 [i_1] [i_2] [i_9] [i_12] = (max(((var_7 ? (arr_15 [i_1 + 2] [i_12] [i_1] [i_12] [i_1 + 3]) : (arr_15 [i_1 + 2] [i_12] [i_1 + 2] [i_12] [i_1 - 1]))), (((arr_15 [i_1 - 1] [i_12] [i_1] [i_12] [i_1 + 2]) ? (arr_15 [i_1 + 1] [i_12] [i_1] [i_12] [i_1 + 2]) : (arr_15 [i_1 + 3] [i_12] [i_1] [i_12] [i_1 + 2])))));
                        var_29 = (min(var_29, (arr_6 [i_12] [i_2])));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_44 [i_12] [i_13] = (((arr_8 [i_13] [i_9] [i_2]) ? var_5 : (arr_33 [4] [i_1 + 1] [i_2] [i_9] [11] [i_13])));
                            var_30 = ((-(arr_16 [i_1 + 3] [i_1] [i_1] [i_1 - 1] [i_1 + 2] [i_13] [i_13])));
                        }
                        for (int i_14 = 1; i_14 < 19;i_14 += 1)
                        {
                            var_31 = (((arr_28 [i_1 + 1] [i_1 + 1] [i_14 - 1] [i_14 + 1]) ? (max((arr_38 [i_1] [i_2] [i_9] [i_12] [i_14 - 1]), var_16)) : ((+(min((arr_2 [i_1] [i_14 + 1]), var_6))))));
                            var_32 = ((((min((arr_23 [i_1] [i_1 + 2] [i_9] [i_12] [i_14 - 1]), ((min(var_2, var_7)))))) ? (min(((min((arr_13 [i_12] [i_2] [i_9] [i_12] [i_14] [i_2]), var_1))), (max((arr_20 [i_1] [i_1] [i_1]), var_11)))) : var_1));
                        }
                    }

                    for (int i_15 = 2; i_15 < 17;i_15 += 1)
                    {

                        /* vectorizable */
                        for (int i_16 = 3; i_16 < 18;i_16 += 1)
                        {
                            var_33 |= ((var_8 ? (arr_33 [i_16] [i_16] [i_16 + 1] [i_16 - 3] [i_16 - 2] [i_16 + 2]) : (arr_50 [i_1] [i_1] [i_1] [i_1 - 1])));
                            arr_54 [i_1] [i_1] [i_1] [i_15] [i_16] [i_16] = ((var_0 ? var_15 : (arr_1 [i_2])));
                            arr_55 [i_1] [i_2] [i_9] [i_15 + 1] [i_16 - 2] = (arr_25 [i_1 + 3] [i_2] [i_16] [i_15] [i_16 + 1]);
                        }
                        var_34 *= var_10;
                        var_35 = min(var_7, (((var_10 ? var_12 : var_8))));
                    }
                    for (int i_17 = 2; i_17 < 19;i_17 += 1)
                    {
                        var_36 = (min(var_36, ((min(((((max(var_13, var_7))) ? var_13 : var_11)), (max(var_15, var_16)))))));
                        arr_59 [i_1] = var_16;
                        var_37 = var_16;
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_64 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (min((min((min(var_11, var_1)), (arr_53 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 2] [i_2]))), (((-((var_0 ? var_0 : var_3)))))));
                        arr_65 [i_1] [i_1 - 1] [i_1 + 1] [i_1] = (((arr_9 [i_9] [i_2] [i_1]) ? ((~(arr_25 [i_1 + 3] [i_1 - 1] [i_1] [i_1] [i_1 + 2]))) : (max((min(var_5, (arr_53 [i_1 + 3] [i_1] [i_2] [i_9] [i_9] [i_18]))), ((max((arr_50 [i_18] [i_9] [i_1] [i_1]), var_9)))))));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {

                        for (int i_20 = 2; i_20 < 19;i_20 += 1) /* same iter space */
                        {
                            arr_72 [i_1] [i_1 + 3] [16] [i_1 - 1] = var_7;
                            var_38 = (255 ? -41 : 15651372300620026267);
                            var_39 = (arr_61 [i_20] [i_2] [16] [i_19] [i_1]);
                            var_40 = ((-var_0 ? (arr_11 [i_1] [i_20 - 1] [i_9] [i_19]) : (((-23644 ? 241 : 394382262)))));
                            arr_73 [i_1 + 2] [i_2] [i_9] [i_20] [i_20 + 1] = ((arr_41 [i_20 - 2] [i_1 + 2]) ? (arr_41 [i_20 + 1] [i_1 + 2]) : (arr_41 [i_20 - 1] [i_1 + 2]));
                        }
                        for (int i_21 = 2; i_21 < 19;i_21 += 1) /* same iter space */
                        {
                            var_41 |= ((-((var_11 ? var_4 : var_7))));
                            arr_78 [9] [i_2] [i_2] [i_19] [i_21] = (arr_48 [i_1 + 3] [i_2]);
                            var_42 = (arr_6 [i_1 + 3] [i_19]);
                            arr_79 [i_1] [i_2] [1] [i_19] [i_21] = (((arr_71 [2] [i_1 - 1] [i_1] [i_1 - 1] [i_2] [i_21 + 1]) ? ((((arr_52 [i_1] [i_2] [i_9] [i_19] [i_21]) ? var_9 : var_8))) : (arr_20 [i_9] [i_2] [i_1 + 2])));
                            arr_80 [i_2] [i_19] = ((arr_20 [i_1] [i_2] [i_21]) ? var_13 : var_9);
                        }
                        for (int i_22 = 2; i_22 < 19;i_22 += 1) /* same iter space */
                        {
                            var_43 &= (((!var_2) ? (arr_50 [i_2] [i_2] [i_9] [i_19]) : (((arr_0 [i_22]) ? var_4 : var_9))));
                            var_44 = var_14;
                        }
                        for (int i_23 = 1; i_23 < 18;i_23 += 1)
                        {
                            arr_86 [i_1 + 1] [i_1] [i_1] [i_1] = var_15;
                            var_45 = (arr_18 [i_1]);
                            var_46 = (((arr_63 [2] [8] [i_19] [i_9] [i_2] [i_1 - 1]) ? var_12 : ((var_13 ? (arr_74 [i_1 + 2] [i_1] [i_1] [i_1 + 3] [i_1]) : (arr_66 [i_19] [i_9])))));
                        }
                        arr_87 [i_1 + 2] [i_1] [i_1] [i_1] = (arr_11 [i_1 + 1] [i_1] [i_1] [i_1 - 1]);
                        arr_88 [i_19] [i_19] [i_9] [i_9] [i_2] [i_1] = var_13;
                        var_47 ^= -var_0;
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 20;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 20;i_25 += 1)
                        {
                            {
                                arr_94 [i_1] [i_1] [i_2] [i_9] [i_24] [i_24] [i_24] = (~var_7);
                                arr_95 [i_24] [i_2] [i_2] [i_2] [i_2] = (906 ? -394382262 : (min(-38, 3)));
                            }
                        }
                    }
                }
                arr_96 [i_1] [i_1] [10] = ((!((((((var_12 ? var_4 : var_16))) ? (((arr_28 [i_1] [i_2] [i_2] [i_2]) ? var_9 : (arr_42 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1]))) : (min((arr_76 [i_1] [i_2] [i_2]), var_5)))))));
            }
        }
    }
    #pragma endscop
}
