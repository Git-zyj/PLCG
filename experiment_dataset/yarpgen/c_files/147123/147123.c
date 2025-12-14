/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = ((!((max((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 + 3]))))));
        arr_2 [i_0] = min(var_14, (-127 - 1));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_17 = -77;
                    var_18 = (48 | 1);
                    var_19 ^= ((-((~(arr_10 [i_1] [i_1] [i_4] [i_4])))));
                }

                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    var_20 = ((7168 ? var_14 : ((1 ? 1 : -16402))));
                    var_21 = var_10;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_22 = (((~1) && var_8));
                    var_23 = 59;
                    arr_21 [i_1] [i_1] [i_1] [i_2] [i_1] = (((((-(arr_12 [i_1] [i_2] [1] [i_2] [1])))) ? (var_6 - var_10) : 1));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_24 = 98;
                    arr_25 [i_2] [i_7] [i_7] [8] [i_7] = 0;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_28 [i_1] [i_1] [i_2] [i_8] = var_10;
                    arr_29 [i_1] [11] [i_2] [i_1] [1] = (((~var_3) | (0 == var_1)));

                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        var_25 ^= 1;
                        arr_33 [5] [i_2 - 1] [i_3] [1] [i_2] = 1;
                        var_26 = arr_18 [i_1] [i_2] [i_3] [i_9];
                        var_27 = var_7;
                    }
                    var_28 = (var_4 | 123);
                }
            }
            var_29 ^= arr_13 [9] [i_2] [1] [1];
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            arr_46 [1] [i_10] [i_11] [i_11] [i_10] = ((((((((-18184 ? var_13 : -55))) ? ((1 + (arr_30 [i_1] [i_10] [i_11] [i_12] [0]))) : 121))) ? (((min(1, 1)) ? 0 : var_1)) : -var_13));
                            var_30 = ((~((max(var_0, (arr_7 [i_1]))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        {
                            var_31 = (((-(arr_1 [i_15] [i_15 - 1]))));
                            var_32 ^= (((-(arr_42 [2] [10] [i_16] [i_15 - 1]))));
                            arr_57 [i_1] [1] [i_15] [i_14] [i_16] = arr_30 [5] [i_10] [i_10] [i_15] [i_10];
                            var_33 = (max((!0), ((var_2 > (arr_8 [i_15] [i_16] [i_16] [i_16])))));
                            var_34 ^= ((-(arr_37 [i_15 - 1] [i_15 - 1] [i_15 - 1])));
                        }
                    }
                }
            }
        }
        var_35 = ((-(~27082)));
        var_36 = ((((min(var_1, (arr_44 [i_1] [1] [i_1] [17] [i_1] [1] [i_1])))) | (arr_44 [i_1] [1] [i_1] [i_1] [i_1] [i_1] [i_1])));
        var_37 = var_7;
        var_38 ^= (max((max((arr_1 [8] [22]), 1)), (((16 >= (arr_7 [i_1]))))));
    }
    #pragma endscop
}
