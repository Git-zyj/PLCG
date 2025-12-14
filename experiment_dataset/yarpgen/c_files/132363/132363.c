/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_13 = ((+(((arr_0 [i_0]) ? ((((arr_1 [i_0] [i_0]) == var_7))) : var_6))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_14 = (arr_6 [i_0] [i_1 - 2] [i_2]);
                        var_15 = ((((((((arr_9 [i_1] [i_0] [i_1] [i_0]) ^ (arr_1 [i_0] [i_1])))) ? (~var_1) : ((~(arr_10 [i_1] [i_1]))))) % (((((424925441 ? 23 : -2))) ^ (arr_13 [i_1] [i_1 + 1])))));
                        var_16 = ((-(((var_7 + 20) ? (arr_5 [i_0] [i_0] [i_3]) : var_1))));
                    }
                }
            }
        }
        var_17 = (((arr_13 [i_0] [i_0]) ? var_11 : (((arr_13 [i_0] [i_0]) % var_8))));
        var_18 = ((-(((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))));
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        var_19 |= (var_0 + (arr_3 [i_4] [i_4]));
        var_20 = (min(var_20, var_7));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_21 = ((arr_8 [i_4] [i_5] [i_6]) ? var_12 : ((~((1507274718 ? 2532222022 : (arr_4 [i_5] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_25 [i_7] = arr_15 [i_8];
                                var_22 ^= (min(-var_5, (((~(arr_12 [i_4] [i_6] [i_7] [i_6]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_23 = arr_22 [i_4] [i_9] [i_6] [i_6];
                        var_24 = (min(var_24, (arr_5 [i_5 - 1] [i_4 + 2] [i_4 + 1])));
                        var_25 = (arr_17 [i_4 - 1]);
                    }
                    for (int i_10 = 2; i_10 < 7;i_10 += 1) /* same iter space */
                    {
                        var_26 = ((((((arr_30 [i_4 + 1]) - ((((arr_5 [i_6] [i_6] [i_6]) != (arr_0 [i_4]))))))) ? (((arr_1 [i_10 - 2] [i_4 + 2]) % 8)) : (arr_8 [i_5] [i_5] [i_10])));
                        var_27 = (min(((max((arr_23 [i_10] [i_5] [i_5 - 2] [i_10] [i_5] [i_10] [i_10]), (arr_29 [i_4] [i_4 + 2] [i_4 + 1] [i_4 - 2])))), (((arr_30 [i_5 - 3]) ? (arr_23 [i_4] [i_6] [i_5 - 1] [i_10] [i_5 - 1] [i_6] [i_5]) : (arr_30 [i_5 - 3])))));
                    }
                    for (int i_11 = 2; i_11 < 7;i_11 += 1) /* same iter space */
                    {
                        var_28 ^= ((2032 != (((~(arr_5 [i_4 + 2] [i_5 + 1] [i_11 - 1]))))));
                        arr_34 [i_4] = (((((arr_32 [i_4 - 2]) ? 8 : 2424467454)) + var_4));
                    }
                    var_29 = (((arr_14 [i_5]) % (((((arr_28 [i_4]) != (arr_17 [i_6]))) ? (arr_9 [i_4] [i_4] [i_4] [i_6]) : ((3778302917 % (arr_3 [i_6] [i_5])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 9;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 9;i_13 += 1)
            {
                {
                    arr_41 [i_4] [i_12] [i_12] [i_4] = var_10;

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_30 = ((~(arr_7 [i_4] [i_12] [i_14])));
                        var_31 = ((max(1338716341, var_7)));
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_32 = (min(var_32, ((((arr_24 [i_12] [i_13] [i_12]) ? ((var_3 - (arr_17 [i_4 - 1]))) : ((((arr_18 [i_4] [i_12] [i_13]) ? ((42 - (arr_12 [i_4] [i_12] [i_12] [i_15]))) : var_0))))))));
                        var_33 = (min(var_33, (((+(((arr_15 [i_4]) ^ var_10)))))));
                        var_34 = (arr_36 [i_4] [i_13] [i_15]);
                        var_35 &= (((-(arr_12 [i_12 + 1] [i_4] [i_4] [i_4]))));
                    }
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            arr_53 [i_17] [i_16] [i_4] [i_13] [i_12] [i_4] = (((arr_26 [i_13 - 1]) ? (arr_6 [i_12 - 1] [i_4] [i_4 - 2]) : var_6));
                            var_36 = arr_19 [i_13 - 2] [i_13 + 1] [i_13 + 2];
                            arr_54 [i_4] [i_12] [i_13] [i_16] [i_16] [i_17] = var_6;
                            var_37 = arr_46 [i_17] [i_12 + 1] [i_17];
                            arr_55 [i_4] [i_12] [i_12] [i_13] [i_16] [i_17] = (((arr_15 [i_12 + 2]) ? (arr_44 [i_4 - 2] [i_4 - 2] [i_17] [i_4 - 2] [i_4]) : var_4));
                        }
                        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                        {
                            var_38 = ((((((((~(arr_28 [i_16]))) != (arr_30 [i_4 + 2]))))) % (arr_17 [i_16])));
                            arr_58 [i_4] [i_4] [i_13] [i_13] [i_18] = (-(((arr_38 [i_13 - 1] [i_4 + 1]) ? (arr_38 [i_13 + 2] [i_4 - 1]) : (arr_38 [i_13 + 1] [i_4 + 1]))));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
                        {
                            var_39 = (arr_33 [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_40 = (arr_5 [i_19] [i_16] [i_13 + 2]);
                            var_41 = (((arr_6 [i_12] [i_12] [i_12]) != ((((arr_11 [i_16]) && var_12)))));
                        }
                        var_42 -= ((((20 ^ (arr_11 [i_4 - 2])))) ? (arr_11 [i_4 - 2]) : (((((arr_11 [i_4 - 2]) && (arr_11 [i_4 - 2]))))));
                        arr_61 [i_4] [i_12] [i_4] [i_16] [i_16] &= ((-3743212882 ? (arr_7 [i_12 + 1] [i_4 + 2] [i_4 - 1]) : ((-(arr_18 [i_4 + 1] [i_4 - 1] [i_12 - 1])))));
                        var_43 = (((arr_10 [i_4 + 2] [i_4 + 2]) ^ (((~(((arr_37 [i_4] [i_4] [i_16]) ^ (arr_12 [i_16] [i_12] [i_12] [i_4]))))))));
                    }
                }
            }
        }
    }
    var_44 = var_1;
    #pragma endscop
}
