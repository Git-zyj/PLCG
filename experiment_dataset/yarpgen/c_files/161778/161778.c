/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((~(((arr_0 [i_0]) ? 3478917342900710007 : var_4))));
        arr_3 [19] = (arr_2 [24]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_12 [22] [i_2] [i_2] = var_10;
                            var_14 = ((min(1362295397, ((var_10 ^ (arr_4 [i_0] [i_3] [i_2]))))));
                            arr_13 [i_2] [23] [i_2] [i_2] [1] = 191880979;
                            var_15 = (max(var_15, (((+((var_9 ? (((arr_10 [i_0] [10]) ? (arr_7 [9] [9] [8] [3]) : 191880963)) : 191880963)))))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_16 [1] [i_5] [i_5] [i_5] [i_5] &= ((!((!(arr_6 [i_1 - 2] [i_1] [i_2])))));
                            arr_17 [i_0] [i_1] [4] [i_3] = (arr_4 [i_0] [i_0] [i_0]);
                        }
                        var_16 = (arr_6 [i_3] [i_2] [i_0]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_17 = ((~((var_6 | (arr_5 [7])))));
        arr_22 [i_6] &= (arr_0 [14]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_28 [i_6] &= 4103086317;
                    arr_29 [9] [11] = (arr_21 [i_8]);
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        var_18 = -16142;
        arr_34 [i_9 + 2] = 3990639137;
        var_19 = (max(var_19, 7862387596066854738));
        arr_35 [i_9] = (arr_33 [i_9]);
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_39 [i_10] [10] = ((((arr_24 [6] [i_10] [i_10]) == 28334)) ? 4103086300 : 10527);
        arr_40 [6] [i_10] = (arr_30 [i_10] [20]);
    }
    for (int i_11 = 3; i_11 < 15;i_11 += 1)
    {
        var_20 ^= (((arr_43 [i_11 - 2] [i_11 - 3]) ? (arr_8 [10] [10] [i_11] [i_11]) : (~37185)));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                {
                    var_21 = (min(var_21, ((min(((min((arr_9 [5] [19] [i_13 - 1] [19] [i_13]), (arr_21 [15])))), ((191880996 ? ((368930205 ? 165006323 : (arr_25 [15] [13] [i_11 + 1]))) : (arr_26 [i_11] [i_11] [1] [i_11]))))))));
                    var_22 = (min(4103086317, (((65535 + 1) ? var_4 : (arr_6 [i_11] [14] [i_13 + 3])))));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        var_23 = (max(var_23, 1));
        var_24 = (((((((2610170794249889167 << (4103086317 - 4103086275))) << (((min(9657327892288145557, (arr_46 [i_14] [i_14] [i_14] [i_14]))) - 656085733))))) ? (((((((arr_33 [i_14]) ? (arr_33 [2]) : 27011))) ? 65522 : 13482))) : ((var_10 ? (((1010848996858676618 ? (arr_20 [i_14]) : 191880963))) : (((arr_31 [i_14]) ? 127 : 1))))));
        arr_52 [12] = var_12;
    }
    #pragma endscop
}
