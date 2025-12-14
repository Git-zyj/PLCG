/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 += (((arr_0 [i_0] [14]) ? (arr_0 [2] [2]) : ((var_0 ? (((~(arr_0 [18] [12])))) : ((3612270598169747593 ? var_1 : 1792))))));
        var_11 = (((((10891128984590163520 ? -21540 : -14637))) == (((var_5 ^ 10891128984590163520) ? (((var_1 ? (arr_2 [i_0]) : 21516))) : (((arr_2 [6]) ? (arr_1 [i_0] [i_0]) : var_0))))));
        arr_3 [i_0] = ((!(min((arr_0 [i_0] [i_0]), (arr_2 [i_0])))));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        var_12 = (max(var_12, ((((((((arr_6 [i_1] [4]) ? 9223372036854775807 : var_1)) << (((arr_5 [i_1 - 4] [i_1]) - 2053401398))))) ? (((max((arr_0 [i_1 - 1] [i_1]), (arr_4 [i_1 - 2] [i_1 - 1]))))) : (max(var_9, (arr_4 [i_1] [i_1 - 1])))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_13 = (max((arr_6 [i_1 - 3] [i_2]), (((((2426601895 / (arr_6 [10] [i_2])))) ? (max(var_7, -6639382970060165022)) : (((1 ? var_2 : var_2)))))));
            var_14 = var_6;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_15 -= (max((~31), ((min((arr_14 [i_5] [i_4] [i_4 + 1] [i_1 - 1] [i_1]), (arr_14 [i_5] [i_5] [i_4 + 1] [i_1 - 3] [9]))))));
                            arr_17 [i_5] [i_5] |= (((arr_11 [i_2]) ? (arr_1 [20] [i_1]) : (min((arr_16 [i_5] [i_4 + 1] [i_2] [i_5 + 1] [i_5]), 8))));
                            var_16 = ((~(min(3612270598169747593, (arr_8 [i_1 - 1] [i_1 - 2] [i_1])))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_17 = ((!(((var_2 ? var_0 : (arr_0 [i_1] [i_1]))))));

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_18 = var_2;
                            var_19 -= ((~(arr_6 [i_1 - 3] [i_1 + 1])));
                            var_20 = (((arr_27 [i_1 - 3] [i_1] [i_1] [5] [i_1]) ? (arr_27 [i_1 - 1] [6] [i_7] [6] [i_9 - 1]) : (arr_27 [1] [i_6] [i_7] [i_8 + 2] [i_9])));
                            var_21 ^= (((arr_21 [i_8 - 1] [i_8 - 1]) > (arr_21 [i_8 + 1] [i_8 + 1])));
                        }
                    }
                }
                arr_29 [i_1] [i_1] [i_1] = (~16403170142127251576);
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 8;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_22 = (arr_7 [i_1 - 3]);
                            var_23 += (arr_9 [i_1] [i_10 - 3] [i_1] [i_1 - 1]);
                            var_24 *= (((21542 | var_5) ? (arr_14 [i_1] [i_6] [i_7] [i_10] [i_11]) : (arr_4 [i_1 - 2] [i_10 + 3])));
                            arr_35 [i_10] [i_6] [8] [8] [i_11] = 8;
                        }
                    }
                }
            }
            var_25 *= (~1);
            var_26 = (((arr_26 [i_6] [6] [4] [i_1] [i_1] [i_1]) ? (arr_26 [i_6] [i_6] [i_6] [i_6] [i_1] [i_1]) : 9424));
        }
    }
    var_27 = var_2;
    #pragma endscop
}
