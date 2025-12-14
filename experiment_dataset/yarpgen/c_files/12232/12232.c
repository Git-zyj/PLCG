/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_19 = ((1 ? (((arr_0 [i_0]) ? 16383 : (arr_0 [i_0 + 1]))) : ((~(arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                var_20 = (max(var_20, (((19 ? 1 : 0)))));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_13 [i_3] [i_3] [i_3] [1] = (!var_5);
                    var_21 = ((var_5 / (arr_10 [i_3] [i_2 - 2] [i_1] [i_1])));
                }
            }

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_22 = ((((~(arr_11 [i_0 - 2] [i_4] [i_4] [1]))) < (((var_3 & (arr_8 [i_0] [1] [3] [i_4]))))));
                var_23 = var_3;
                var_24 = arr_4 [i_0];
                var_25 ^= ((-(arr_10 [i_0 + 3] [i_1] [i_1] [i_4])));
            }
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_26 ^= ((((1 || (arr_0 [i_6])))) < (arr_20 [i_7 - 4] [i_0] [i_5 - 1] [i_0]));
                            var_27 = var_8;
                            var_28 = (arr_4 [i_7]);
                            var_29 = (arr_1 [i_0 + 3]);
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_30 = (arr_0 [i_8]);
                    var_31 = (min(var_31, (arr_20 [i_0] [i_1] [i_1] [i_8])));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_32 = (((((arr_11 [i_0] [i_5] [i_5] [i_9]) >= (arr_18 [i_0] [i_5] [i_0 - 1]))) ? (!var_0) : (arr_25 [i_0] [i_1] [i_1] [i_9])));
                    arr_31 [i_5] [i_1] [i_9] = ((((-(arr_11 [i_0] [i_5] [i_5] [i_9]))) > (arr_21 [i_0] [i_0 - 2])));
                    var_33 = (arr_24 [i_0 - 1] [i_1] [i_1] [10] [i_9] [i_9]);
                }
            }
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                var_34 = var_15;

                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    var_35 = (max(var_35, (arr_29 [i_1] [i_1])));
                    arr_38 [i_11] [i_10] [i_10] [i_0] [i_0] &= (((arr_2 [i_0 - 2]) ? 16582 : (arr_2 [i_10 + 1])));
                    var_36 |= (((var_10 - (arr_29 [i_1] [i_10]))));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_37 = (arr_41 [i_0 + 3] [i_0 + 3] [i_10 + 2] [i_12] [10] [i_1]);
                            var_38 ^= (((((arr_27 [i_0] [i_0] [3] [i_0 + 3] [i_0 - 3] [i_0 + 3]) + 2147483647)) >> (((arr_14 [i_0 - 3] [i_12] [i_1]) + 29965))));
                            var_39 &= ((!(1 || var_14)));
                            var_40 = (max(var_40, (arr_3 [i_13] [i_1])));
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    var_41 -= (((arr_30 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 3]) - (arr_45 [i_0] [i_0] [i_0])));
                    arr_46 [i_14] [i_1] [i_10] [i_14] = (((arr_0 [i_0 + 3]) > (arr_0 [i_0])));
                }
            }
            var_42 = arr_1 [i_0];
        }
    }
    /* vectorizable */
    for (int i_15 = 3; i_15 < 19;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {
                    var_43 *= 9259911122718139500;
                    var_44 = (arr_52 [i_15]);
                }
            }
        }
        var_45 &= (((((~151) + 2147483647)) >> (var_10 + 6094048556285756026)));
        var_46 = (min(var_46, (~0)));
        arr_55 [i_15] = ((~(!16582)));
    }
    var_47 = var_14;
    var_48 = (min(var_48, ((((var_5 >> 1) ? var_12 : ((~(var_17 - var_8))))))));
    var_49 = ((!((((~0) & var_7)))));
    #pragma endscop
}
