/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 >= (((0 && (((var_3 ? var_9 : var_1))))))));
    var_11 += var_3;
    var_12 -= var_9;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_13 |= (((((max(0, (arr_2 [i_0] [i_1 - 2] [i_1])))) - (((arr_0 [i_0] [i_1 - 1]) ? (arr_0 [i_0] [i_1]) : 255)))));
            arr_4 [i_0] [i_0] = (((((arr_2 [i_1 + 1] [i_1 - 2] [i_0]) ? (arr_2 [i_0 - 1] [i_1 - 1] [i_1]) : var_6)) >= (((650923371 > (arr_0 [i_0 - 1] [20]))))));
            arr_5 [i_0] [i_1] [i_1] = (((((arr_0 [i_1 - 1] [i_1 - 1]) - 1)) >= var_1));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_14 = var_7;

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        var_15 = ((-(arr_14 [i_0] [i_2] [i_3] [i_3] [i_3] [i_4] [i_5])));
                        arr_18 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = (((-1593130270 + 2147483647) >> (((arr_15 [i_5] [i_5] [i_5 + 1] [i_5] [i_5] [i_3] [i_2 - 2]) - 99))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_16 ^= var_8;
                        arr_22 [i_6] [i_6] [i_4] [i_3] [i_2] [i_0] = var_5;
                        arr_23 [i_0] [i_2 + 1] [i_3] [i_3] [i_4] [i_6] [i_6] = var_2;
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_17 ^= ((~(arr_9 [i_0 - 1])));
                        arr_26 [i_0] [i_0] [i_2] [i_3] [i_4] [i_7] |= (((((arr_17 [i_4] [i_2 - 2] [i_0] [i_0 + 1] [i_0 + 1]) + 2147483647)) >> (var_8 - 3431848128948203763)));
                        var_18 -= (7 ? 237 : 25266);
                    }
                    var_19 ^= var_7;
                    arr_27 [i_4] [i_3] [i_2] [i_0] &= ((!(arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 1])));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    var_20 = (arr_8 [i_2 - 1]);
                    var_21 = (((((var_1 ? var_6 : 0))) ? var_8 : (var_6 | 152)));
                }
                var_22 |= (arr_8 [i_0 - 2]);
                var_23 = (((arr_14 [i_2 - 2] [i_2] [13] [i_2] [i_3] [i_2 - 2] [i_0 + 1]) > (arr_14 [i_2 - 2] [i_2] [i_3] [i_0] [i_0 + 1] [i_3] [i_0 - 2])));
                var_24 = (1 ? -2475801687515920865 : 511);
                var_25 += ((((90 ? var_8 : 3607421495)) > (-9223372036854775807 - 1)));
            }
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {
                    var_26 = var_3;
                    var_27 = 6549717991808230819;
                    arr_39 [i_0] [i_2] [i_10] = ((var_3 ? 43159 : 9891));
                }
                var_28 = ((-(arr_28 [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_9] [i_9 - 1] [i_9 - 1])));
                var_29 = (((((arr_21 [i_0] [i_2] [5] [i_2] [i_2 - 1] [0]) + 2147483647)) >> ((((-1 + (arr_16 [i_9] [i_2 - 2] [i_2 + 1] [i_0] [i_0]))) - 170))));
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                arr_43 [i_11] = (arr_11 [i_0] [i_2] [i_2] [i_11] [i_11] [i_11]);
                arr_44 [i_2] [i_2] [i_2] [i_2] &= ((1 >= var_0) ? ((var_7 ? 58 : (arr_35 [i_11] [i_11] [i_11] [i_11]))) : -1440816251);
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                var_30 = 12536856332741355355;
                var_31 |= (30096 > 7);
                var_32 = 161010142;
            }
            var_33 &= -9223372036854775791;
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_34 = var_9;
            var_35 = min((arr_29 [i_0 - 2] [i_13] [23] [16] [i_0 - 2]), (((78599839 ? 145772396 : 255))));
            arr_52 [i_0 - 1] [i_0 - 1] [i_13] = 254;
        }

        for (int i_14 = 1; i_14 < 22;i_14 += 1)
        {

            /* vectorizable */
            for (int i_15 = 2; i_15 < 20;i_15 += 1)
            {
                var_36 = (((arr_56 [11]) >> (((arr_0 [i_0] [17]) - 144))));
                var_37 = (0 >> 1);
            }
            arr_58 [i_0 - 2] [i_0] &= ((20999 ? 115 : -1));
            var_38 = 234;
        }
        arr_59 [i_0 - 1] = (min(((127 + ((var_8 ? var_7 : var_0)))), (((-1933086717 ? -3 : 602824673)))));
        arr_60 [8] &= 963367408376826412;
    }
    #pragma endscop
}
