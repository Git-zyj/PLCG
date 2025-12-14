/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (max(((18446744073709551615 ? 8064 : 18446744073709551615)), 18446744073709551608));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, var_0));
                    var_16 = (max(18446744073709551615, 18446744073709551615));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (!var_7);
                }
            }
        }
        arr_10 [i_0] = ((-9223372036854775797 ? 18446744073709551597 : 15));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, (((max(3584, -16384))))));
                    var_18 = (((arr_16 [i_3 + 1] [4]) * (((-127 - 1) ? 0 : 26))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = ((-1 / ((+(((arr_2 [i_0 - 1]) / var_5))))));
                                var_20 -= (~1);
                                arr_24 [5] [i_0] = (arr_11 [i_0 + 1] [1] [i_0]);
                                arr_25 [i_0] = (max((arr_8 [i_0] [i_0]), 134217727));
                            }
                        }
                    }

                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        var_21 -= ((((((arr_20 [i_0] [i_3] [5] [i_3] [2]) ? (arr_2 [i_0 + 1]) : (arr_7 [i_7] [i_7] [i_4] [10]))) >= (((arr_15 [8] [i_3 + 1] [i_3 + 1]) ? (arr_17 [i_0] [i_3 - 3] [i_4] [i_7]) : 128)))));
                        var_22 |= ((-6 ? -256 : -32));
                    }
                    arr_30 [i_0] [i_0] = ((((((arr_20 [i_3] [i_3 - 2] [i_4 + 2] [3] [9]) ? var_3 : (arr_20 [i_3] [i_3 - 3] [10] [i_4] [i_4])))) ? ((36028522141057024 ? (25 < 1023) : (((arr_26 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_4]) ? var_4 : (arr_14 [i_0 - 1]))))) : (max((arr_14 [i_3 - 3]), (arr_12 [i_3 - 3])))));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        arr_33 [11] = ((((1 || (arr_29 [i_8 - 2]))) ? (((((1 | (arr_2 [i_8])))) ? (arr_5 [i_8]) : (arr_8 [i_8 + 2] [i_8]))) : var_9));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_23 = var_2;
            arr_37 [i_9] [1] [i_8] = ((!((max((arr_6 [i_8 - 2] [i_8 - 2] [i_8]), ((116 ? (arr_15 [i_9] [i_9] [i_8 + 1]) : (arr_7 [i_9] [i_9] [2] [i_8]))))))));
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            var_24 += (arr_20 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8]);
            arr_40 [i_8 + 1] [i_10 - 1] = (((((((!(arr_14 [i_8]))) ? (((arr_6 [9] [i_10] [i_8 + 1]) ? 1 : (arr_23 [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8 + 2] [4] [8] [i_10 - 1]))) : (!26)))) && ((((!(arr_15 [i_10] [i_10 - 1] [i_8]))) && (arr_1 [i_8] [11])))));
            arr_41 [9] = (max(((max((-127 - 1), (max((arr_34 [i_8] [i_8] [i_10 - 1]), var_10))))), ((((max(1, -6))) ? ((((arr_35 [i_8]) ^ 1))) : ((var_1 ? (arr_29 [i_8]) : var_1))))));
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            var_25 = 511;
            var_26 = (min(var_26, (arr_28 [i_8] [i_8] [i_11] [i_11] [i_11 - 1])));
        }

        for (int i_12 = 2; i_12 < 11;i_12 += 1)
        {
            arr_47 [i_8] [0] [i_12] = var_0;
            var_27 = (max((arr_46 [i_12 - 2]), (max(var_14, (arr_5 [i_8 + 1])))));
        }
    }
    var_28 = var_9;
    var_29 -= ((((((((var_10 ? var_2 : 192))) ? ((max(var_10, var_0))) : var_4))) ? var_3 : var_3));
    #pragma endscop
}
