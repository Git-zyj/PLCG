/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_10 |= (1 & var_7);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (1621942935521856359 + 58621);
                    arr_9 [i_1] [i_1] = (~565279947);
                    var_11 -= -1;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = (arr_6 [1] [10] [10]);
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = ((!((((arr_11 [i_0] [i_1 - 1] [i_0] [i_3 - 1]) | (arr_0 [i_3] [i_1]))))));
                                arr_17 [i_0] [i_1 - 2] [i_0] [i_0] [i_3] [i_3] [i_4] = (min((arr_10 [i_1] [i_1] [i_1]), ((-((-(arr_6 [i_0] [i_2] [i_2])))))));
                                var_13 *= var_3;
                                var_14 += (arr_1 [i_4]);
                            }
                        }
                    }
                    var_15 = (min(var_15, (arr_3 [i_0] [i_0])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    var_16 *= ((~(((!(arr_6 [4] [i_6 + 2] [i_6]))))));
                    var_17 += (arr_7 [i_0]);
                    var_18 = ((!((max((arr_6 [i_0] [i_5] [i_6]), 0)))));
                    var_19 = (((((((((arr_18 [i_6]) > (arr_13 [i_0] [i_5] [i_6])))) == var_6)))) - (max(((((arr_21 [4] [i_5] [i_5]) + (arr_5 [i_6] [i_6] [i_6])))), (min((arr_0 [i_0] [i_5]), var_1)))));
                }
            }
        }
        arr_23 [i_0] = ((!(!0)));
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        var_20 = ((((-(arr_26 [i_7])))) == (((arr_26 [i_7 - 1]) ^ (arr_25 [i_7] [i_7]))));
        var_21 = (max(var_21, (1 == 58092)));
        var_22 = (arr_25 [i_7] [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_34 [i_7] [i_7] [i_7] = (i_7 % 2 == zero) ? (((((((arr_33 [i_7] [i_7] [i_7] [i_8]) << (((((arr_29 [i_8] [i_7]) + 715984948)) - 27))))) & (arr_32 [i_7])))) : (((((((arr_33 [i_7] [i_7] [i_7] [i_8]) << (((((((((arr_29 [i_8] [i_7]) + 715984948)) - 27)) + 197904674)) - 21))))) & (arr_32 [i_7]))));
                    arr_35 [i_7] [i_7] [i_7] [i_9] = ((-((((((arr_30 [i_7] [i_8] [i_7]) * var_2))) | var_7))));
                }
            }
        }
    }
    var_23 = var_9;
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                {
                    var_24 = (arr_39 [i_10] [i_10] [i_10]);
                    arr_43 [i_10] [i_10] [i_10] [i_10] = var_2;
                    arr_44 [1] = (~9223372036854775807);
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 22;i_14 += 1)
                        {
                            {
                                arr_50 [i_14] [i_13] [i_12] [i_10] [i_10] = (arr_36 [i_10] [i_11]);
                                var_25 *= (arr_40 [i_10] [i_11]);
                                arr_51 [i_10] [i_10] [i_12] [i_13] [i_10] = -var_0;
                                var_26 = (arr_48 [i_10] [i_10]);
                            }
                        }
                    }

                    for (int i_15 = 1; i_15 < 23;i_15 += 1)
                    {
                        arr_54 [i_12] &= ((-(~963002984)));
                        var_27 = 2625231418;
                        arr_55 [i_10] [i_11] [i_12 - 2] [i_15] = min((!var_2), ((-(min(0, 1284366095)))));
                        arr_56 [i_15] [i_11] [i_15] [i_15] = (~262143);
                        arr_57 [i_10] [1] [1] [i_10] [i_12] |= (3010601200 | 33321);
                    }
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        arr_60 [i_10] [i_11] [i_12] [i_16] = (~var_7);
                        arr_61 [i_10] [i_10] [i_10] = (((max((min(4088, 47276), 1)))));
                        var_28 = (arr_37 [i_10]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
