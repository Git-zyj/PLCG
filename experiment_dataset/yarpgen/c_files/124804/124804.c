/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = (min(var_13, ((max((max((arr_0 [i_0]), -var_11)), (230 * 0))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, (((-((((max(26, 224))) ? (min(var_6, 0)) : ((((arr_2 [i_1] [i_0] [i_1]) / 515064647))))))))));
                        var_15 = (((arr_8 [i_0] [i_0] [i_1] [i_2] [7] [i_1]) ? ((225 ? (arr_8 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 4] [i_3 - 2] [i_1]) : 17)) : (arr_6 [i_0] [i_1] [i_1])));
                        var_16 = 248;
                        var_17 = (min(var_17, -99));
                        var_18 = 26;
                    }
                }
            }
            var_19 = var_7;
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_20 -= (arr_8 [i_0] [i_0] [2] [i_0] [i_0] [i_0]);
            arr_12 [i_4] = ((0 == ((0 ? 25 : var_0))));
        }
        var_21 = (max(var_21, ((((((~((0 ? 3750266170 : 5916900282269195491))))) || 60354)))));
    }
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        var_22 = var_11;
        arr_15 [i_5 - 2] = ((max(((min((arr_13 [i_5 - 1]), 236))), (arr_13 [i_5]))));
        arr_16 [i_5] = ((~((((~var_4) && (arr_13 [i_5 - 1]))))));
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            var_23 ^= ((-((-(arr_17 [i_7 + 1])))));
            arr_23 [i_6] [i_6] [2] |= ((~(((arr_13 [i_7]) ? var_8 : var_2))));
            var_24 = (arr_11 [i_7 - 1] [i_6]);
        }
        arr_24 [i_6] = ((228 == ((((((26 && (arr_9 [i_6])))) < ((((arr_20 [i_6]) >= var_7))))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 22;i_9 += 1)
        {
            var_25 = arr_13 [i_8 + 1];
            arr_30 [i_8] [i_9 - 2] [i_9 - 1] = (((arr_14 [i_8] [i_9]) & (arr_26 [i_9] [i_8 + 1])));
        }
        var_26 |= (arr_28 [0] [0]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_33 [10] [i_10] = 0;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    arr_39 [i_10] = ((~(((arr_27 [i_12]) + var_9))));
                    arr_40 [i_10] [i_10] [i_12] [i_10] = (arr_34 [i_10]);
                    arr_41 [i_10] [8] [i_11] = (((arr_7 [i_10] [i_10]) + (arr_0 [i_12])));
                    arr_42 [i_10] [i_10] = (((arr_37 [i_10] [i_11] [i_10]) ? var_5 : (arr_6 [0] [2] [i_10])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            {
                var_27 = (arr_47 [i_13] [i_13] [i_14]);
                arr_48 [i_14] [i_13] [i_13] = (((((arr_44 [i_14]) / (arr_14 [i_13] [i_14]))) == -1878732388));
            }
        }
    }
    #pragma endscop
}
