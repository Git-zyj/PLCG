/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 += var_9;
        arr_3 [i_0] = (max((((((arr_1 [i_0]) != (arr_2 [i_0]))) ? var_3 : 164)), (((((var_11 ? (arr_1 [i_0]) : (arr_2 [i_0])))) ? ((min((arr_1 [i_0]), var_16))) : ((252 ? var_9 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 += (max(((var_16 ? (arr_2 [0]) : (((arr_4 [i_2]) * (arr_8 [i_1] [i_1]))))), ((-(arr_4 [i_1])))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                arr_11 [17] [i_3] [i_3] [i_3] = arr_6 [i_1 - 1] [8] [8];
                arr_12 [i_1] [2] [i_2] [12] |= min((arr_6 [i_1] [5] [i_1]), (((((((arr_0 [14]) % (arr_8 [i_1] [i_3])))) && var_2))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                var_22 *= arr_0 [14];
                var_23 = (min(var_23, (((var_9 ? var_7 : var_15)))));
                var_24 = (min(var_24, (arr_8 [i_1 + 1] [i_2])));
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_25 = (min(var_25, ((((((var_18 ? 28 : (arr_0 [i_5])))) ? ((var_16 ? 0 : var_0)) : ((62 | (arr_1 [i_5]))))))));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_26 ^= var_3;
                var_27 = (max(var_27, (arr_13 [i_1] [i_5] [i_5] [i_6])));
            }
        }
        var_28 *= arr_2 [i_1 - 1];
        var_29 &= ((var_10 ? var_5 : ((((arr_8 [i_1 + 1] [i_1 - 1]) || (arr_8 [i_1 - 1] [i_1 + 1]))))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            arr_26 [i_7] [i_7] [i_8 - 1] = arr_15 [i_7] [i_7] [i_8];
            arr_27 [i_7] = ((var_6 && ((((arr_4 [i_7]) ? (arr_2 [10]) : var_16)))));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_30 = (min(var_30, (arr_33 [i_7] [i_8] [i_8] [i_8 - 1] [i_11] [i_10] [i_7 - 1])));
                            arr_35 [i_7] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7] = var_18;
                            var_31 += var_3;
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            arr_38 [i_7] [i_7] = (((var_19 | var_10) - ((var_5 ? 223 : 46))));
            var_32 &= (((arr_9 [i_12] [10] [14]) ? var_6 : 255));
        }
        var_33 = (((arr_0 [i_7]) | (arr_0 [i_7])));
    }
    for (int i_13 = 1; i_13 < 17;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 4; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 17;i_15 += 1)
            {
                {
                    arr_46 [i_13] [i_14] [i_15] = ((!((((arr_40 [i_13 - 1]) * var_18)))));
                    var_34 = (max(var_34, (((-(arr_41 [3]))))));
                }
            }
        }
        arr_47 [i_13] [i_13] = (((((var_16 ? ((var_1 ? var_12 : var_17)) : var_5))) ? ((((max(var_13, (arr_23 [i_13 + 1] [10])))) ? ((max(132, var_11))) : (((arr_2 [i_13 - 1]) ? var_18 : (arr_28 [i_13 - 1] [10] [i_13]))))) : ((36 ? 248 : (var_16 && var_6)))));
        var_35 |= (((255 ^ var_4) / (((arr_45 [i_13] [i_13] [i_13] [i_13]) ? (arr_16 [i_13] [10] [i_13 + 1]) : (arr_41 [i_13])))));
    }

    for (int i_16 = 1; i_16 < 15;i_16 += 1)
    {
        var_36 = ((((((arr_13 [i_16 + 3] [i_16] [i_16] [i_16]) ? (~2) : (arr_1 [i_16])))) ? (min((((arr_7 [i_16] [i_16] [4]) ? 239 : 250)), 201)) : ((255 << (252 - 241)))));
        arr_50 [16] &= arr_49 [i_16 - 1];
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
    {
        var_37 |= arr_52 [i_17];
        var_38 = ((var_9 != (arr_53 [i_17])));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
    {
        arr_57 [i_18] = ((var_2 ? ((var_12 ? var_17 : (arr_51 [0]))) : var_9));
        var_39 = (((-var_14 + 2147483647) << (((arr_53 [i_18]) - 98))));
        var_40 -= ((var_14 / ((var_4 ? var_14 : 201))));
        /* LoopNest 3 */
        for (int i_19 = 3; i_19 < 22;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 22;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 24;i_21 += 1)
                {
                    {

                        for (int i_22 = 1; i_22 < 21;i_22 += 1)
                        {
                            var_41 += ((~(((arr_61 [20] [i_18] [i_20]) << (var_7 - 138)))));
                            var_42 += (((arr_60 [i_18] [i_18] [i_20 + 1]) >> (((arr_60 [i_18] [i_19 - 3] [i_20 - 1]) - 54))));
                            arr_69 [i_20] [i_20 - 1] [20] [i_20] [i_20 + 2] [9] = (((arr_60 [i_20 - 1] [8] [i_22 + 1]) ? var_11 : (arr_64 [i_18] [i_18] [i_20 - 1] [i_19 + 1] [i_18] [i_18])));
                            var_43 += 62;
                            arr_70 [i_20] [21] = var_8;
                        }
                        arr_71 [i_20] [i_19] [i_20] [i_21] [i_20] = 21;
                    }
                }
            }
        }
    }
    var_44 = ((+(((var_12 + var_4) / (var_10 << var_11)))));
    var_45 = (~var_1);
    #pragma endscop
}
