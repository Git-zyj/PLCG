/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~((((max(var_4, var_8))) ? (var_9 * var_2) : (!198))));
    var_19 ^= (((((!0) == 1792130851)) ? (((var_3 <= (((-1792130855 ? var_4 : var_10)))))) : ((1792130838 ? (!var_6) : var_0))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 = (arr_1 [i_0] [i_0 + 1]);
        var_22 = (((arr_1 [i_0] [i_0 - 1]) ? (arr_0 [i_0 + 3] [i_0]) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0 - 2] = (i_0 % 2 == 0) ? ((((arr_0 [i_0 - 1] [i_0]) * (arr_0 [i_0 + 2] [i_0])))) : ((((arr_0 [i_0 - 1] [i_0]) / (arr_0 [i_0 + 2] [i_0]))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_23 &= (~(arr_5 [22]));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_24 = (min((arr_11 [i_4]), (arr_6 [i_1 + 1])));
                                var_25 = (min(var_25, (((((!(arr_6 [i_2 - 1]))) ? (min(((1 ? 1 : 1635922131)), (arr_5 [24]))) : (1792130852 == 107))))));
                                var_26 -= (((min((arr_12 [i_1] [4] [i_1 + 1] [i_2] [i_2] [i_2 + 2]), (arr_12 [14] [12] [16] [14] [i_2] [i_2 - 1])))) || ((!(arr_12 [4] [14] [2] [4] [i_2 - 1] [i_2 + 1]))));
                                var_27 = (+(((((arr_13 [i_1] [i_4] [i_3] [i_2 + 1] [i_1]) / var_14)) & var_9)));
                            }
                        }
                    }
                    var_28 = (max((~125), 904650871));

                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        arr_19 [i_1] [i_2] [i_2] = ((((!(arr_5 [i_1])))));
                        arr_20 [i_1] [i_2 + 1] [i_1] = (((arr_8 [i_1 + 1]) ? (((-185 ? ((~(arr_8 [i_1]))) : (arr_18 [i_6] [i_6 + 1] [i_6 + 1] [i_1 + 3])))) : ((((max(-1792130861, -1593231430))) ? (arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]) : (max((arr_11 [i_6]), (arr_14 [i_1] [i_3] [i_6])))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_29 = (min((((var_4 ? var_1 : (arr_17 [i_7] [i_7] [i_7] [i_2] [i_3] [i_7])))), ((+((123 ? (arr_17 [i_1 + 2] [i_3] [i_3] [i_7] [i_2] [i_7]) : 150))))));
                        arr_24 [20] [i_2] [i_3] [i_7] |= ((((arr_8 [i_1 + 2]) ? (arr_12 [i_2 - 1] [22] [i_2 - 1] [10] [i_2] [i_2 - 1]) : (arr_8 [i_1 + 1]))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_30 = ((((!(arr_22 [i_1 - 1] [i_1] [i_1] [i_1]))) ? ((min((arr_11 [i_1 + 2]), (arr_11 [i_1 - 1])))) : (((arr_22 [i_1 - 1] [12] [i_1] [i_1]) ? (arr_11 [i_1 + 1]) : (arr_22 [i_1 + 1] [i_1] [12] [i_1])))));
                    var_31 = ((((((~-6001) ? var_1 : (max(var_3, (arr_15 [i_1])))))) ? (max((arr_17 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_9] [i_9]), (((arr_12 [i_1] [i_1] [i_1] [12] [i_1] [i_9]) ? -27612 : var_3)))) : ((((arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? (arr_18 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_18 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
                    var_32 = ((!(((((arr_14 [i_9] [23] [i_9]) ? var_14 : (arr_13 [i_1 - 1] [i_1] [i_8] [i_8] [i_1]))) != ((max((arr_13 [i_1] [i_1] [i_8] [i_9] [i_1]), var_11)))))));
                    var_33 = ((!((((arr_28 [i_1] [i_9]) ? (arr_28 [i_1] [i_9]) : (arr_28 [i_1] [i_8]))))));
                }
            }
        }
    }
    #pragma endscop
}
