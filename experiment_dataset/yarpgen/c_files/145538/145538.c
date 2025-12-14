/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (((min((max((arr_1 [i_0]), var_11)), ((var_0 ? var_10 : var_8)))) & (((((var_8 ? var_1 : var_7)))))));
                    var_19 = (((((-(18446744073709551612 == 32766)))) ? (min((((arr_8 [i_2] [i_1]) ? 620798807356689511 : var_17)), -17530)) : var_5));
                    var_20 = var_11;
                    arr_10 [i_2] [i_1] [i_1] = ((((((min(0, 45548)) >= (!1294979466)))) <= 5));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            arr_22 [i_3 + 1] [i_4 - 1] [i_4] [i_6 - 1] [i_6 - 1] [i_3 + 1] = (((arr_18 [i_7] [i_6] [i_3 + 1] [i_4] [i_3 + 1]) ? (arr_17 [i_3 - 1]) : (arr_11 [i_5])));
                            var_21 = (((arr_14 [i_3] [i_6]) ? 10501277235093039811 : (arr_17 [i_4 - 1])));
                            var_22 = ((((((18446744073709551614 == (arr_14 [i_4] [i_5]))))) < 10501277235093039811));
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_23 = arr_20 [i_3 + 1] [i_4 - 1] [8] [i_5] [19];
                            var_24 = (((arr_13 [i_3 - 1]) / 65535));
                            var_25 &= ((((((arr_24 [i_4] [i_6] [i_3]) ? 8314 : var_17))) ? (arr_15 [i_4] [i_3]) : var_5));
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_26 |= (arr_26 [i_3 - 2] [i_4 - 1] [i_9 - 1] [i_9]);
                            var_27 = (arr_21 [i_3] [i_3] [i_5] [6] [i_9]);
                            var_28 = (((arr_15 [i_3] [i_4]) <= (((arr_23 [i_3] [i_3] [i_3] [15]) + (arr_15 [i_3] [i_4])))));
                        }
                        var_29 = (((((4294967295 ? var_13 : -1))) ? (((arr_16 [i_3] [i_3] [i_4]) ? 10501277235093039834 : 225)) : (620798807356689518 >> 0)));
                    }
                }
            }
        }
        var_30 = ((-(0 != 18446744073709551595)));
        var_31 &= arr_12 [20];
    }
    var_32 = ((((var_16 <= var_12) < (var_6 * var_6))));
    var_33 = (min((((min(var_4, var_11)) + var_11)), (min(var_12, 51858))));
    #pragma endscop
}
