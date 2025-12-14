/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((~(1 + 30)))) | ((-((6 ? var_12 : 384))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_0 [i_0] [i_0]), var_0));
        arr_3 [i_0] [i_0] = (((~(arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 = (min(var_14, ((min(var_0, ((((~6) > ((min(65529, 60821)))))))))));
        var_15 = ((min((((var_5 && (arr_4 [i_1] [i_1])))), var_0)));
        arr_6 [i_1] = ((((((arr_4 [i_1] [i_1]) + (arr_5 [i_1] [i_1])))) ? ((var_7 ? var_7 : (arr_5 [i_1] [i_1]))) : (arr_5 [i_1] [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 ^= (((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [i_2])));
            var_17 = ((arr_7 [i_1] [i_1] [i_1]) | (arr_9 [i_1] [i_2] [i_2]));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_18 = ((~(arr_11 [i_1] [i_2] [i_3])));
                arr_12 [i_1] [i_1] [i_3] = (((((arr_8 [i_1] [i_2]) ? (arr_8 [i_3] [i_1]) : (arr_4 [i_1] [i_1]))) > (arr_4 [i_2] [i_2])));
            }
            arr_13 [i_1] [i_1] [i_1] = ((~(arr_4 [i_1] [i_2])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_17 [i_1] [i_4] [i_1] = ((arr_4 [i_4] [i_1]) > (arr_4 [i_1] [i_4]));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_20 [i_5] [i_5] [i_1] = 53967;

                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_19 = (arr_9 [i_1] [i_1] [i_1]);
                    arr_23 [i_6] [i_5] [i_5] [i_4] [i_5] [i_1] = 2840925336;
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_20 = ((16881076838490228563 - (-11474 ^ -73)));
                    arr_28 [i_7] [7] [i_5] [i_5] [i_1] [i_4] = ((-(arr_8 [i_7] [i_1])));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_1] [i_4] [i_5] [i_5] [i_8] = (!11);
                    arr_33 [i_1] [i_1] [8] [i_8] &= ((((var_8 >> (var_10 + 1986572650343050874))) - (((var_6 + 2147483647) << (((arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) - 31293))))));
                }
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_36 [i_9] [i_9] [i_4] [i_1] = var_12;
                arr_37 [i_1] [i_1] [i_1] = ((var_8 ? (arr_35 [i_1] [i_9] [i_1] [i_9]) : (arr_35 [4] [i_4] [i_9] [i_9])));
                arr_38 [i_4] [i_1] = ((-(arr_18 [i_1] [i_4])));
                var_21 = (min(var_21, (~1)));
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_41 [i_1] = ((-(((-1 + 9223372036854775807) << var_9))));
                var_22 -= ((127 % (arr_10 [i_10] [i_1])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_23 -= -1;
                            arr_48 [i_1] [i_12] [i_10] [i_11] [i_12] = (((((5914589863222765032 ? var_2 : var_6))) ? -1 : var_2));
                            var_24 = ((((2 ? 188149344222590818 : 45530)) | var_5));
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    arr_51 [i_13] [i_13] [i_13] [i_10] [i_4] [i_1] &= (((arr_46 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) / (arr_19 [i_13] [i_1] [i_4])));
                    var_25 = (((arr_31 [i_1] [i_1] [i_1] [i_1]) >> 1));
                    var_26 = (-1 > 129);
                    var_27 = (~((70 ? -1884164232 : var_5)));
                }
                var_28 = (((0 + -4607373785649945435) / -var_5));
            }
            var_29 = ((-var_2 ? var_4 : ((-1 ? (arr_22 [i_1] [i_1] [i_1] [i_1]) : (arr_5 [i_4] [i_4])))));
            var_30 = ((-(arr_30 [i_1] [i_4] [i_4])));
        }
    }
    var_31 = (min((min((var_5 | var_1), (~var_1))), 2097151));
    #pragma endscop
}
