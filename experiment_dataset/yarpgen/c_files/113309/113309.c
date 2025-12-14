/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = ((((((var_8 * var_6) - var_4))) ? (max(var_14, (var_9 % 25144))) : 2623857413));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((~(arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = 0;
        arr_5 [i_0] = ((+((~(max((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_17 *= ((0 ? 16 : 16383));

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_18 -= (((((((-(arr_2 [6] [4])))) ? (~4294967295) : var_5)) / -1264056048));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {
                        var_19 = (max(var_6, (min(-var_11, -var_4))));
                        arr_21 [i_1] [i_2] [i_1] = (arr_18 [i_1]);
                    }
                }
            }
        }
        var_20 += arr_11 [i_1 + 1] [8] [i_1 - 1];
        var_21 = (max(var_21, var_5));
        var_22 -= ((~((((min(4, var_4))) ? ((var_0 & (arr_19 [0] [i_1 + 1] [0]))) : ((((arr_14 [i_1] [i_1] [6] [i_1]) * (arr_15 [i_1] [i_1] [6]))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_30 [i_5] [i_5] [i_6] [i_7] = (((58438 / 4503599090499584) ? var_6 : ((var_4 ? var_5 : (arr_17 [i_5] [i_5] [i_7] [i_6])))));
                    arr_31 [i_6] [i_6] |= ((((var_11 ? 1382901421 : (arr_16 [2] [i_6] [i_6]))) == (arr_2 [i_6] [i_5 + 1])));
                    var_23 = (min(var_23, var_13));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_36 [i_5] [i_9] [i_5] = (((arr_17 [i_5] [i_5 - 1] [i_6 - 1] [i_9]) ^ (arr_17 [i_5] [i_5 - 1] [i_6 - 2] [i_9])));
                                var_24 = (arr_15 [i_5] [i_6] [i_9]);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_25 &= ((-(arr_12 [i_11])));
                                var_26 |= (((arr_38 [i_5 - 1] [i_5 - 1]) ? (arr_18 [i_12]) : (arr_18 [i_11])));
                            }
                        }
                    }
                    var_27 |= (((arr_16 [i_11] [i_5 + 1] [i_11]) ? (arr_25 [i_5 + 1]) : var_0));
                    var_28 = (min(var_28, (((10 % (arr_16 [i_5 - 1] [i_10] [i_11]))))));
                }
            }
        }
    }
    #pragma endscop
}
