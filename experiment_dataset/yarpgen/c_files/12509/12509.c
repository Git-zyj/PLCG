/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(-1, 118))) || -1338));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = ((((var_3 / (arr_2 [i_2]))) > (arr_1 [i_2 + 2])));
                        var_18 |= (((((var_3 ? (arr_2 [i_0]) : 106))) ? (arr_9 [i_0] [i_3] [i_2] [i_3]) : var_12));
                    }
                }
            }
        }
        arr_10 [i_0 - 1] = (arr_1 [i_0]);
        arr_11 [i_0] [i_0] = (153 % 12259);

        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            var_19 = ((var_6 ? ((((arr_7 [15] [i_4 - 2] [15] [22] [i_4]) / -28914))) : ((var_13 ? (arr_2 [i_0]) : 3296592808))));
            var_20 = (((arr_2 [i_0]) + (arr_13 [i_0] [i_0 - 2] [i_0 + 1])));
            arr_14 [i_0] [i_4] [i_4] = 3271316230;

            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_21 = (max(var_21, var_11));
                            arr_23 [i_0] [i_4] [i_5] [i_0] [i_0] [3] [i_6] = ((arr_4 [i_4] [i_0] [i_0] [i_0 + 1]) - (var_6 ^ -601276865));
                        }
                    }
                }
                arr_24 [i_5] = ((var_14 ? (arr_17 [i_5] [i_5 + 4] [15] [i_4] [i_4] [i_0]) : (arr_12 [i_0 - 3] [i_4 - 2] [i_5 + 4])));

                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    arr_28 [i_0] [i_0] [i_5] [i_0] = ((((var_9 || (arr_17 [i_5] [i_4] [i_5] [i_8] [19] [19]))) ? var_1 : (arr_17 [i_0] [3] [i_0] [i_0] [i_0] [i_5])));
                    var_22 = ((-7137 ? (((var_10 ? (arr_26 [1] [10] [i_5] [i_8]) : (arr_0 [i_0])))) : var_2));
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_31 [i_0] [11] [i_0] [i_5] = (((arr_1 [i_0 + 2]) % (arr_2 [i_0 - 2])));
                    var_23 = (((arr_0 [i_4 + 1]) - (arr_12 [i_9] [i_5 - 1] [i_4 + 1])));
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_24 = var_1;
                    arr_36 [i_0] [i_5] [i_5] [i_10] = (arr_4 [i_10] [i_5] [i_4] [i_0]);
                    arr_37 [i_0 - 1] [i_0 + 1] [i_5] [i_0 + 1] [i_0] = (-10632 <= 18446744073709551607);

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_41 [i_0] [i_5] [i_0] = (arr_26 [4] [i_4] [i_4] [i_0]);
                        arr_42 [i_5] [i_10] [i_11] = (((arr_0 [i_0 - 3]) && 118));
                        arr_43 [i_5] [i_10] [i_5] [i_0] [i_5] = (--102);
                    }
                    arr_44 [i_5] [i_0] [6] [i_0] [19] [i_10] = ((var_8 ? (arr_26 [i_5 + 3] [i_4 + 1] [i_0 + 1] [i_0]) : ((var_7 ? (arr_4 [i_0 + 1] [i_4 - 2] [i_5] [i_10]) : 18446744073709551615))));
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    var_25 -= (((arr_39 [i_12] [i_4 + 1] [i_0] [i_0 - 3] [i_0] [i_0]) <= ((var_1 ? var_2 : (arr_7 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                    arr_47 [i_5] = (arr_45 [i_5] [i_5] [i_4] [i_4] [i_0] [i_5]);
                    var_26 |= (!-30018);
                }
                var_27 = (!0);
            }
            for (int i_13 = 2; i_13 < 22;i_13 += 1)
            {
                arr_50 [i_4] [i_4 + 1] [i_4 + 1] |= ((163 ? 26084 : (arr_40 [0] [i_13 + 1] [i_4 - 2] [1] [i_0] [i_0] [i_0 - 3])));
                var_28 = ((!(arr_3 [i_0] [i_0])));
                var_29 = (!(var_2 + -7130));
                var_30 = (min(var_30, (((((var_1 ? -37 : var_10)) + (arr_29 [i_13] [i_4] [i_4] [i_0 - 3]))))));
            }
        }
    }
    #pragma endscop
}
