/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (((arr_5 [i_0 - 1]) - (-2147483647 - 1)));
                    var_12 = (arr_3 [i_2]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 = ((0 >> (354214023770318732 - 354214023770318671)));

                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            var_14 = var_4;
                            var_15 = (((-2147483647 - 1) >= (arr_10 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0])));
                        }

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_16 -= (arr_5 [i_0 - 2]);
                            var_17 = (arr_9 [i_0 - 1] [i_0 - 1] [i_5]);
                        }
                        var_18 -= (arr_2 [i_0 - 2]);
                    }
                }
            }
        }
        var_19 &= (arr_7 [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 18;i_9 += 1)
                {
                    {
                        var_20 += ((var_1 != (arr_19 [i_6] [i_6] [i_6])));
                        var_21 -= ((1750868251 << (((arr_18 [i_6]) - 12085162812918616807))));
                        var_22 += 1310712830238656049;
                        var_23 -= (((arr_23 [i_8 + 4] [i_8 + 2] [i_8 - 1]) == (arr_23 [i_8 + 1] [i_8 + 2] [i_8 + 3])));
                    }
                }
            }
        }
        arr_25 [i_6] = ((-780207574 ? 1531660397 : 380623974));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_24 = (arr_24 [i_10]);
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    {
                        var_25 = ((1 != (arr_22 [i_13 + 3])));
                        arr_38 [i_10] [i_11] [i_12] [i_13] = arr_33 [i_12 + 2] [i_12] [i_13];
                    }
                }
            }
        }
        var_26 &= var_9;
        arr_39 [i_10] = ((1 | ((var_2 ? (arr_29 [i_10] [i_10]) : (arr_18 [i_10])))));
        var_27 &= ((var_1 | (arr_21 [i_10] [i_10] [i_10])));
        var_28 = var_6;
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        var_29 = (max((((arr_31 [i_14]) ? ((var_11 ? (arr_31 [i_14]) : -1750868252)) : (((arr_18 [i_14]) ? var_8 : 42)))), ((max(1019890709, 1750868251)))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_18 = 2; i_18 < 9;i_18 += 1)
                        {
                            arr_56 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] |= arr_17 [i_17] [i_18 + 2];
                            var_30 = (arr_51 [i_16 - 3] [i_17] [i_18 + 3]);
                        }
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            arr_60 [i_14] = (((((((max(2142195262, (arr_43 [i_16])))) ? (arr_19 [i_14] [i_15] [i_19]) : (arr_30 [i_14] [i_14] [i_14])))) ? ((var_0 | (arr_55 [i_15] [i_14] [i_15] [i_15] [i_14]))) : (((-var_10 + 2147483647) >> (-2065141823 + 2065141828)))));
                            arr_61 [i_19] [i_19] [i_17] [i_14] [i_14] [i_14] = 102;
                        }
                        var_31 = (((arr_48 [i_15] [i_16 - 3] [i_16 + 2] [i_17]) >> (((max(((((-2147483647 - 1) ? var_0 : (arr_28 [i_15] [i_16 + 1])))), 4129689120645968761)) - 4129689120645968732))));
                    }
                }
            }
        }
        var_32 = var_1;

        /* vectorizable */
        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            var_33 ^= -4126500776283101519;
            arr_64 [i_14] [i_14] = var_4;
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 11;i_22 += 1)
                {
                    {
                        var_34 = var_4;
                        var_35 = (arr_52 [i_22 + 1] [i_22 + 1]);
                    }
                }
            }
        }
    }
    var_36 = var_2;
    #pragma endscop
}
