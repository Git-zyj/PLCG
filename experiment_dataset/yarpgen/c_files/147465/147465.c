/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((var_3 > ((max(var_5, var_9)))))) >> (var_5 - 262))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3] [i_1 + 1] [i_1] &= ((var_9 ? var_1 : (arr_10 [i_2])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_11 += var_1;
                            arr_15 [i_0] [i_0] [i_0] [i_0] [0] = (arr_6 [i_1] [i_1] [i_1]);
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_4 [i_1 - 2] [i_1 + 1]) % var_4));
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = 0;
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_12 &= (arr_10 [i_5]);
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_5] [i_3] [i_3] = (arr_19 [i_5] [i_1] [i_5] [i_5] [i_5]);
                            var_13 = var_4;
                            arr_21 [i_1] [i_0] [i_1] [i_5] = ((((((arr_13 [i_0] [i_0] [i_2] [i_2] [6]) ? var_9 : 45165))) ? (arr_18 [i_0] [i_0]) : (arr_6 [8] [i_1] [12])));
                        }

                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((4 ? -6 : 0));
                            var_14 = (min(var_14, var_5));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_15 = (arr_8 [i_0] [i_0]);
                        var_16 = (((arr_9 [i_0] [i_7] [i_7] [i_0] [i_9]) ? (arr_9 [i_0] [i_9] [i_8] [i_0] [1]) : (arr_18 [i_0] [i_0])));

                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            var_17 = (arr_14 [i_0] [i_9] [i_8] [i_7] [i_10] [i_0] [i_10 + 1]);
                            arr_35 [i_0] [i_7] [i_0] [i_0] [i_9] [i_10] = ((((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) + var_8)));
                            var_18 = (max(var_18, ((((var_5 | var_8) ? var_2 : (arr_23 [i_0] [i_7] [i_8] [i_9] [i_9]))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {

                        for (int i_12 = 4; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            arr_40 [i_0] [i_7] [i_0] [i_7] [i_12] = var_6;
                            var_19 += ((((arr_37 [9] [i_7] [i_7]) ? var_8 : var_2)));
                            var_20 = var_5;
                            var_21 ^= (((arr_19 [i_0] [i_7] [i_8] [i_11] [i_8]) > var_3));
                        }
                        for (int i_13 = 4; i_13 < 10;i_13 += 1) /* same iter space */
                        {
                            var_22 = (((arr_33 [i_13 - 2] [i_13 - 1]) <= (((((arr_36 [i_0] [i_7] [i_0] [i_13]) <= 5))))));
                            arr_45 [i_0] [i_11] [i_0] = ((((57431 ? 56663 : 48)) >> (var_4 - 152)));
                        }
                        var_23 ^= (arr_37 [i_0] [i_7] [i_8]);

                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            arr_48 [i_11] [2] [2] [i_11] [i_14] [i_14] [i_7] &= (65535 + 1923861313);
                            arr_49 [i_0] [i_0] [i_8] [i_11] [i_11] [i_0] = (arr_47 [i_14] [i_0] [i_11] [i_8] [i_7] [i_0] [i_0]);
                        }
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            arr_52 [i_0] = var_4;
                            var_24 += (arr_43 [i_15] [i_11] [i_8] [i_8] [i_7] [i_0]);
                        }

                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            arr_55 [i_0] [i_0] [i_0] [11] [5] = ((~(var_5 & var_4)));
                            var_25 = 65521;
                        }
                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            arr_59 [i_0] [i_7] = (((arr_7 [i_17] [i_17] [i_17] [i_17]) ^ (arr_7 [i_0] [i_8] [i_8] [i_17])));
                            var_26 ^= var_2;
                            var_27 &= ((((-51 + 2147483647) >> (10524931080687772279 - 10524931080687772277))));
                            var_28 = (((arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]) > var_7));
                            var_29 = (((arr_1 [10]) || (arr_1 [i_0])));
                        }
                    }
                    for (int i_18 = 1; i_18 < 11;i_18 += 1)
                    {
                        var_30 = (max(var_30, ((((arr_30 [i_7] [i_7] [i_7] [i_18 + 2] [i_18]) ? (arr_30 [i_0] [i_8] [i_18] [i_18 + 1] [i_18]) : (arr_30 [i_18] [i_18] [i_18] [i_18 + 1] [i_18]))))));
                        var_31 = (((arr_44 [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 2]) || (arr_44 [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 2])));

                        for (int i_19 = 4; i_19 < 12;i_19 += 1) /* same iter space */
                        {
                            var_32 = (arr_41 [i_0] [i_7] [i_8] [i_19]);
                            var_33 ^= ((-1 >= (arr_54 [1] [1] [i_8] [1] [i_19])));
                            arr_66 [i_0] [i_18] [i_18] [i_0] [i_7] [i_0] = (arr_29 [i_19] [i_18] [i_7] [12]);
                        }
                        for (int i_20 = 4; i_20 < 12;i_20 += 1) /* same iter space */
                        {
                            var_34 = (((arr_46 [i_0] [i_18 - 1] [i_0] [i_18] [i_20 - 3]) ^ (arr_46 [i_0] [i_18 + 2] [i_0] [i_18] [i_20 - 3])));
                            var_35 ^= ((((var_8 ? var_4 : var_3))) - (((arr_64 [i_0] [i_0] [i_8] [i_18] [i_20 - 1]) - (arr_43 [8] [i_20] [i_0] [i_8] [i_7] [i_0]))));
                            var_36 = var_2;
                        }
                        for (int i_21 = 4; i_21 < 12;i_21 += 1) /* same iter space */
                        {
                            var_37 = ((var_8 > (arr_2 [i_7])));
                            var_38 += var_1;
                            var_39 = var_0;
                            arr_72 [i_0] = var_6;
                        }
                    }
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        var_40 = ((((var_8 ? var_3 : var_1)) | ((31 * (arr_3 [i_8])))));
                        arr_76 [i_0] = (((arr_69 [i_0] [i_0] [i_7] [i_7] [i_7] [i_8] [i_22]) ^ (arr_47 [i_7] [i_0] [i_7] [i_7] [i_7] [i_7] [i_7])));
                    }
                    arr_77 [i_0] [i_0] [i_0] [i_8] = (((arr_28 [i_0] [i_0]) >> (var_8 - 13840027787003986343)));
                }
            }
        }
    }
    #pragma endscop
}
