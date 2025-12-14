/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 0));
    var_21 = 184;
    var_22 = var_17;
    var_23 = (min(var_7, (((var_0 == 184) - ((max(var_1, var_5)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [10] [10] = (arr_0 [5] [8]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_24 = (min(var_24, ((min(((min(-404765355, 71))), (min((arr_9 [11] [i_3 + 1] [2] [10] [i_3 + 1]), (arr_4 [i_3 + 1] [10] [i_3]))))))));
                        var_25 = (((min((arr_9 [i_3] [i_1] [i_1] [i_3 + 2] [i_3]), (arr_9 [i_1] [7] [7] [i_3 + 2] [11]))) & (((((arr_1 [i_3 + 3]) > (arr_1 [i_3 + 2])))))));
                        arr_10 [i_2] [i_0] [16] [i_3 + 1] = 184;

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_2] [1] = ((+(((arr_9 [i_0] [i_1] [1] [i_4 + 2] [13]) ? (arr_12 [i_3 + 3] [15] [i_3] [i_2]) : (arr_5 [i_3 + 2] [i_3])))));
                            arr_16 [i_0] [i_2] [15] [i_0] [i_0] = ((min((arr_6 [i_4 + 2] [13] [2]), 184)));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_21 [15] [i_5 - 1] [1] [16] = 2305843009213693951;
                    var_26 = (max(((48 | (72 + 65531))), (min((arr_19 [i_5 + 2] [i_5 + 1]), ((9223372036854775808 ? 2048 : var_16))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_27 &= (max((arr_17 [i_7 + 1]), (max((arr_22 [i_0] [i_5 - 1] [i_8 + 1] [3]), (arr_22 [11] [i_5 - 3] [i_8 + 1] [16])))));
                                var_28 = ((((min((arr_22 [i_5 - 2] [i_5] [i_7 + 1] [7]), (arr_22 [i_5 - 2] [7] [i_7 + 1] [i_8 + 2])))) ? (max((arr_1 [i_5 + 2]), (arr_1 [i_5 - 1]))) : (min((arr_0 [i_0] [i_0]), (min((arr_19 [14] [13]), (arr_6 [i_5] [i_5] [i_6])))))));
                                arr_28 [i_0] [i_0] [i_8] [i_0] [i_0] = ((-(((-(arr_2 [i_5 + 2]))))));
                            }
                        }
                    }

                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        var_29 -= (0 ? 100 : (-2362250916047975156 & 26));
                        arr_32 [i_0] |= min((((var_14 >> (-3535680615253345206 - 14911063458456206399)))), (((((arr_12 [i_0] [12] [12] [i_9]) ? (arr_14 [i_5] [i_5]) : (arr_13 [4] [i_5] [16] [i_9 + 2] [12]))) | ((-(arr_26 [12] [1] [i_6] [i_9]))))));
                        var_30 = (min(((((((!(arr_27 [i_5] [i_6])))) | (arr_19 [i_5 - 1] [i_9 - 1])))), (arr_31 [i_5] [12] [0] [11] [i_5 - 2])));
                        arr_33 [4] [9] [i_5] [i_6] [16] = (min(18446744073709551615, ((((9223372036854775807 ? (arr_22 [i_6] [10] [8] [i_9]) : var_14)) * var_6))));
                    }
                    arr_34 [i_0] [3] [16] [15] = (max(14911063458456206385, -124874746));
                }
            }
        }
        var_31 -= ((min((arr_13 [i_0] [8] [2] [1] [i_0]), (((arr_29 [i_0] [i_0]) ? 3063809654684724706 : 11)))));
    }
    #pragma endscop
}
