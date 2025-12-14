/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (~var_3);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_11 [i_0] [i_0 - 1] [i_0] [i_2] [i_0] [i_4] [i_2] = var_3;
                            var_11 = (min(var_11, ((((var_3 ? (~18446744073709551613) : ((var_2 ? var_4 : var_8))))))));
                        }
                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_5 - 4] [9] [i_0] = ((((-(arr_6 [i_0] [3] [i_2 - 1] [i_0]))) <= (var_6 <= -var_2)));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_5 - 2] [i_0] [i_1 + 2] = (((((var_9 ? var_9 : 1773949376))) ? (min(var_6, ((-(arr_12 [i_2] [i_2] [1] [i_3 + 1] [i_5] [2]))))) : ((min(((!(arr_6 [i_0] [i_1 - 3] [i_0] [i_0]))), (arr_9 [i_3 - 1] [i_0 - 1] [i_1 + 1] [i_2 - 1] [i_0]))))));
                            arr_16 [i_0] [9] [i_2 - 1] = ((~((var_4 ? (arr_6 [i_0] [i_1] [i_1 - 2] [i_0]) : (arr_6 [i_0] [1] [i_1 - 2] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [i_0 - 1] [i_1 - 3] [i_1 - 3] [2] [i_6] &= ((120 * (((!((((arr_17 [i_0] [i_0] [i_1 - 3] [i_2] [8] [i_3] [i_0]) + var_9))))))));
                            var_12 = ((((-((~(arr_3 [i_0]))))) ^ var_5));
                            var_13 = (arr_5 [7] [7] [i_0 + 2]);
                        }
                        var_14 = (max(var_14, ((((max(((var_0 ? (arr_4 [6] [6] [i_3 - 1]) : 7260408131689550654)), (min(11186335942020000961, 2550252041)))) <= ((((arr_0 [1]) >> (var_8 - 6587)))))))));
                        var_15 *= 1162340576;
                    }
                }
            }
        }

        for (int i_7 = 3; i_7 < 9;i_7 += 1)
        {
            var_16 = ((((((arr_23 [i_0] [i_7 - 2]) ? 0 : (arr_23 [i_0] [i_7 + 1])))) ? (((arr_23 [i_0] [i_7 + 1]) ? (arr_23 [i_0] [i_7 - 3]) : (arr_8 [i_7 - 3] [i_7 - 3] [i_0] [i_7]))) : (arr_8 [i_7 - 3] [i_7] [5] [4])));
            arr_24 [i_0] [i_7] [i_0] = (~-27352);
        }
        arr_25 [i_0] [i_0] = var_9;
        arr_26 [i_0] = (max(var_4, var_5));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_31 [1] = var_4;
        var_17 = (max(var_17, ((var_9 ? ((-(arr_28 [i_8] [i_8]))) : -var_7))));
        var_18 -= (((arr_30 [i_8]) ? var_9 : var_8));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    {
                        arr_41 [i_12 + 1] [i_12 + 1] [i_11] [i_11] [i_12 + 1] = ((((arr_34 [i_9]) ? var_4 : (((-1632975721 ? var_9 : var_9))))));
                        arr_42 [i_9] [i_11] [i_11] [i_12] = ((var_7 ? var_0 : var_8));
                    }
                }
            }
        }
        arr_43 [i_9] = ((0 ? 11186335942020000959 : 25));
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 11;i_13 += 1)
    {
        var_19 = ((+(((-127 - 1) ? var_4 : var_3))));
        arr_47 [i_13] [i_13] |= (((arr_36 [i_13 - 3] [i_13 - 3] [i_13 - 3]) ? (arr_39 [i_13] [8] [i_13 - 2] [i_13] [i_13]) : (((!(arr_28 [1] [1]))))));
        arr_48 [i_13] = var_8;
        arr_49 [i_13] = (((var_3 ? 5213128845301214237 : var_9)) | var_8);
    }
    var_20 = (-3621414518635973251 + var_1);
    #pragma endscop
}
