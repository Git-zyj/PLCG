/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_11 = (arr_3 [9] [9]);
                        var_12 = (max((((var_10 <= (((arr_2 [i_3]) & 1))))), (~var_6)));
                    }
                }
            }
        }
        var_13 = 255;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_14 = (min(var_14, var_8));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_15 = (((arr_14 [i_6]) * var_7));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_16 |= 1;
                            var_17 = ((!(arr_19 [i_8] [i_6] [i_4])));
                            arr_24 [i_4] [i_5] [i_4] [1] [i_7] [i_8] = (((-(arr_19 [i_7] [i_6] [i_5]))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_18 = (((((var_5 ? (arr_18 [i_4] [i_4] [i_5]) : (arr_23 [14] [i_5] [i_4] [i_4] [i_4] [i_4])))) ? 1 : var_6));

                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    arr_31 [i_4] [i_5] [i_5] [i_9] [i_9] [i_5] = (((arr_17 [i_10] [i_9] [i_4]) == var_8));
                    var_19 = (((arr_30 [i_10 + 3] [i_10] [i_10 - 2] [i_10 - 1]) - (((arr_20 [12] [2] [i_5] [i_9] [i_9]) ? var_10 : var_6))));
                    var_20 = var_0;
                    var_21 = arr_22 [i_10 + 3] [i_10] [i_5] [i_5] [i_10 - 1] [i_5];
                    var_22 += (+-18446744073709551609);
                }

                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    var_23 |= var_8;
                    var_24 = 0;
                    var_25 = (!(arr_29 [i_11 + 1] [i_5] [i_11 - 1] [i_11 + 2]));
                }
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    var_26 &= (arr_29 [i_4] [10] [i_4] [i_4]);
                    var_27 -= ((~(var_3 & var_2)));
                    var_28 = var_5;
                    arr_37 [i_4] [i_5] [i_9] [i_12] = 178;
                    var_29 -= (arr_22 [i_4] [i_5] [i_5] [0] [i_12 + 1] [i_12]);
                }
            }
            var_30 = (!0);
            var_31 *= ((!(arr_36 [i_4] [i_5])));
        }
        arr_38 [1] = (max(var_1, (((arr_29 [i_4] [14] [i_4] [i_4]) % var_10))));
        var_32 = (!(1 / var_0));
        arr_39 [i_4] [i_4] = var_0;
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 18;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_33 = (max(var_33, (arr_42 [i_14])));
            var_34 |= ((((1 <= (arr_42 [i_14])))));
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            var_35 = var_10;
            var_36 += arr_48 [6] [6];
        }
        var_37 |= ((((~(arr_46 [i_13] [i_13 + 1] [15]))) & 0));
    }
    #pragma endscop
}
