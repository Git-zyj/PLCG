/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 -= arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = 75;
                    var_15 *= var_5;
                    var_16 = ((~((-((1 ? 4038149201 : 256818077))))));
                    var_17 = 77054730;
                    var_18 *= 735808149;
                }
            }
        }
    }
    var_19 = (min(var_19, var_0));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            {
                var_20 = (min(var_20, var_5));

                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    var_21 = min(3559159163, 23);
                    arr_13 [i_3] [i_3] [i_3] [i_3] = (((((var_2 ? var_5 : 169)) ^ var_8)));
                    arr_14 [i_3 + 3] [14] = min(((min(((!(arr_10 [i_4]))), (((arr_12 [1] [i_4] [1]) || 234))))), 52);
                    var_22 = 233;
                }
                arr_15 [i_3 + 2] [i_3] [i_4] = ((((var_1 && (((var_2 | (arr_11 [i_3] [i_4] [i_4])))))) ? (arr_11 [i_3] [i_3] [2]) : (max((min(var_11, (arr_10 [i_3]))), (arr_11 [i_3] [i_4] [i_3])))));

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_24 [i_7] [3] [i_7] [i_7] [i_4] [i_8] = 110;
                                arr_25 [i_4] [i_4] = (max((((((256818094 ? 30 : 226))) ? ((var_0 >> (var_7 - 2164218860))) : var_6)), var_5));
                                var_23 -= (arr_8 [i_7]);
                                arr_26 [i_4] [i_4] [i_7] = (((arr_8 [i_8]) ? (((((var_2 ? (arr_11 [0] [i_6] [i_8]) : (arr_21 [12] [12] [12] [i_7] [7]))) != var_8))) : (arr_12 [i_3] [7] [14])));
                                arr_27 [i_3] [i_3] [i_6] [i_7] [i_8] = max(735808146, (((((min(var_3, (arr_9 [i_3 - 3])))) ? ((max((arr_16 [i_8] [9] [i_4]), 144))) : ((var_8 >> (((arr_22 [i_3] [i_6] [i_6] [i_4 - 1] [i_4 - 1] [11]) - 48))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_24 -= var_10;
                                var_25 = max(var_0, (((35 || ((min(255, (arr_29 [i_6]))))))));
                            }
                        }
                    }
                    arr_33 [i_3] [i_3] [i_6] |= (min(((var_10 * ((((arr_29 [i_3]) >= var_0))))), ((127 ? (arr_19 [i_3 + 2]) : (arr_19 [i_3 + 1])))));
                    arr_34 [i_3] [1] = min((arr_10 [i_4]), (((((min(var_7, var_10))) || var_8))));
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_26 = (((min((arr_18 [7] [i_4] [i_4 - 2] [i_11] [7]), (max((arr_9 [13]), (arr_7 [i_3 - 1]))))) >= ((((((arr_22 [i_3 + 2] [i_3 + 1] [7] [i_3] [7] [i_3]) ? (arr_8 [i_11]) : var_9))) ? ((((arr_36 [i_3] [i_4]) + var_10))) : var_7))));
                    var_27 = (max(var_27, ((((((!(arr_30 [i_11] [i_11] [i_11] [1] [i_11])))) < (arr_36 [7] [7]))))));
                    arr_37 [i_3] [i_3] [i_3] = var_10;
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            {
                                arr_47 [i_3] [i_12] [12] = ((((((min(192, 256818095))) && 177)) ? 225 : (((arr_22 [i_4] [i_4] [i_4 + 3] [i_4] [i_4] [i_4]) ? 186 : var_10))));
                                var_28 = 16;
                                var_29 = ((110 ^ (((arr_40 [i_4] [i_4] [i_14]) * ((min(6, 186)))))));
                            }
                        }
                    }
                    arr_48 [i_3 + 3] &= (((arr_46 [i_3] [i_3] [i_3] [14] [i_3] [i_3]) - (!4294967292)));
                    var_30 = (max(var_30, var_3));
                    var_31 = (max(var_31, (((~(((((arr_21 [8] [8] [i_4] [4] [i_12]) ? var_11 : var_11)) ^ (((max((arr_43 [11] [i_4] [i_4] [i_4]), var_5)))))))))));
                }
            }
        }
    }
    var_32 *= ((((min(3652834044, 735808160)) * var_2)) / ((((~var_9) ? var_3 : var_1))));
    #pragma endscop
}
