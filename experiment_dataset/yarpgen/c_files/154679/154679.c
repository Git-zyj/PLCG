/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (!var_7);
        arr_4 [i_0] [2] &= (((4294967295 ? (min(240824694, -2049)) : 42)) / 42);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            var_19 = (((((((((var_17 ? 0 : -30))) && (arr_6 [i_1]))))) > ((var_4 ? (arr_9 [i_1] [i_2] [16]) : (arr_9 [1] [i_2] [i_1])))));
            var_20 = (((arr_9 [i_1] [i_2] [i_2]) / var_3));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                arr_14 [i_1] [i_1] [i_2] = ((((-(arr_5 [i_3]))) >> ((var_2 ? (arr_13 [i_1] [i_3] [i_2] [i_2]) : 255))));
                var_21 ^= ((((((arr_9 [i_3] [6] [i_3]) ^ 10))) ? (((arr_6 [i_1]) ? var_0 : (arr_6 [i_1]))) : ((((arr_8 [12] [i_2] [i_3 + 1]) ? var_15 : (arr_8 [i_1] [i_3] [i_3]))))));
                var_22 &= 127;
                var_23 = var_15;
                var_24 ^= (arr_9 [i_2 - 3] [18] [18]);
            }
            var_25 += (arr_10 [i_1] [i_1] [i_2 + 1]);
        }
        for (int i_4 = 4; i_4 < 20;i_4 += 1)
        {
            var_26 = (!1);

            /* vectorizable */
            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                var_27 = var_12;
                var_28 |= (((var_2 / var_4) && (((arr_16 [i_1] [20]) > var_3))));
            }
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_29 = (((((0 ? ((min((arr_13 [i_1] [i_1] [i_8] [i_1]), 102))) : -2044))) / (max((var_2 - var_11), (((arr_26 [i_1] [i_4] [i_6] [i_7]) - var_5))))));
                            var_30 += var_9;
                            arr_32 [i_8] [i_8] = (max(((((((~(arr_30 [i_1]))) + 2147483647)) >> (((arr_6 [i_4 - 4]) - 6995109284065957150)))), var_1));
                            var_31 = ((((max(((max(153, (arr_31 [i_8] [i_7] [i_6] [17] [i_1])))), ((var_9 ? 154 : (arr_24 [i_1] [i_4] [i_1] [i_7] [i_7] [i_8])))))) > (((-608780218 > var_13) ? var_0 : var_14))));
                            var_32 -= var_3;
                        }
                    }
                }
                arr_33 [i_1] [i_4] [i_4] [i_6] = ((var_10 ? ((min((arr_24 [19] [i_1] [i_4] [i_4] [i_4] [i_4]), var_16))) : ((((min(-1, 1167574929))) ? var_0 : ((-(arr_21 [i_1] [i_1] [i_6] [i_1])))))));
                var_33 = ((!((((((arr_5 [i_1]) ? var_10 : var_0)) / ((max(var_11, (arr_19 [0] [16] [i_6 + 1])))))))));
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                var_34 = (!var_10);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_43 [i_1] [i_11] [i_11] [i_9] [5] = var_13;
                            var_35 = ((var_16 ? var_13 : 2044));
                        }
                    }
                }
                var_36 = (var_15 + var_12);
            }
        }
        for (int i_12 = 3; i_12 < 18;i_12 += 1)
        {
            var_37 -= ((((((!(arr_39 [i_1] [10] [10] [i_1]))))) * var_1));
            var_38 = (((-2045 ^ ((var_8 + (arr_23 [i_12] [i_1] [i_12] [i_1]))))) + (((((arr_11 [i_12]) >= var_13)))));
        }
        var_39 = (arr_17 [i_1] [4] [i_1]);
    }
    var_40 = (((~-350063925182010699) < 27449975));
    var_41 -= var_7;
    var_42 -= min(var_7, ((~((min(var_3, 6597))))));
    #pragma endscop
}
