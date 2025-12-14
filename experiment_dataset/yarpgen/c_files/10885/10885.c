/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (var_4 ? (arr_2 [i_0] [i_1]) : (1 > 110));
                arr_6 [i_0] [14] = (min((((!(13912 > var_6)))), (0 | 1)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_0] [i_0] = ((768656999 | ((-(arr_1 [i_0])))));
                                arr_15 [i_0] = (((!var_3) || (arr_0 [i_2] [i_3])));
                                var_11 = (((max((max(var_3, 164)), (arr_8 [i_1] [i_1] [i_2]))) % ((~(min(var_4, (-9223372036854775807 - 1)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [1] [i_0] [1] [i_6] [8] [i_7] = ((var_3 ? ((2089840059 ? ((((var_0 || (-9223372036854775807 - 1))))) : (max(127, 1)))) : (arr_3 [23])));
                                var_12 *= (max((arr_12 [i_0] [i_0] [i_5] [i_5] [i_6] [i_7]), -var_0));
                                var_13 = ((!(arr_11 [i_1] [13] [i_1] [i_7])));
                                var_14 = (max(127, var_3));
                            }
                        }
                    }
                }
                var_15 = var_4;
            }
        }
    }
    var_16 *= (max((((var_6 >= (~var_4)))), (max((!var_8), var_1))));

    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        var_17 = 167;
        var_18 *= (((((max(var_6, (((14640274648202249659 ? -50 : (-2147483647 - 1)))))) + 9223372036854775807)) >> ((((arr_24 [i_8]) != var_1)))));
        arr_26 [i_8] = (-31628 != var_0);

        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_19 = var_2;
                var_20 = (max(var_20, ((!((((arr_28 [i_8] [7] [i_10]) ? -1501528415 : -21)))))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_36 [7] [i_9] [i_9] [i_10] [i_11] [i_11] [i_9] = ((var_4 ? -8956728479956043305 : var_7));
                            arr_37 [i_12] [i_11 - 1] [i_10] [i_9] [i_8] = (arr_19 [i_12 - 2] [i_8 - 1]);
                            var_21 = (max(var_21, (!var_8)));
                            arr_38 [i_12] [i_11 - 1] [i_10] [i_8] [i_8] = (-861277187 / 1);
                        }
                    }
                }
                var_22 = (32761 % ((~(arr_19 [i_8 + 1] [8]))));
            }

            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                var_23 = (max(var_23, (~22)));
                arr_41 [i_13] [i_9] [3] [i_8 + 1] = var_1;
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
        {
            var_24 = (((~1) ? ((var_7 ? var_1 : 127)) : (0 > -6039304861870202877)));
            arr_45 [i_14] [i_14] [i_14] = var_4;
        }
    }
    #pragma endscop
}
