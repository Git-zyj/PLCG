/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_9;
    var_17 = (max(((((var_3 <= 51345) ? 0 : (1 & 1)))), ((var_3 ? (var_1 == var_15) : ((var_7 ? var_11 : 582223180))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [8])));
        arr_2 [i_0] = ((((((arr_0 [i_0]) | (arr_0 [i_0])))) ? ((var_14 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (min((arr_0 [i_0]), 0))));
        var_19 = (((((143 > (arr_0 [i_0])))) / ((((50 ? (arr_1 [i_0]) : var_0))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = var_0;
            var_20 = 0;
            arr_7 [i_0] [10] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
        }
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    var_21 -= (arr_13 [i_2]);
                    var_22 = var_14;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [i_5] [i_5] = 1;
                    var_23 ^= ((~(((((var_1 ? var_4 : (arr_12 [i_2])))) ? 1 : (((arr_11 [i_2] [i_5]) ? var_0 : (arr_18 [i_2] [i_5] [i_6])))))));
                }
            }
        }
    }
    var_24 = (max(1, (((var_8 ? 6624676883136227278 : var_15)))));

    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_25 = (((((-(arr_24 [i_7] [i_7])))) ? ((~(arr_23 [i_7]))) : ((-((9007199221186560 ? -92 : -2861889167021153668))))));
        arr_25 [i_7] = ((var_4 >> (((arr_23 [i_7]) + 7710527661420308148))));
        var_26 = (min(var_26, ((((((arr_23 [i_7 + 1]) - (arr_23 [i_7 - 1]))) - ((var_8 - (arr_23 [i_7 + 1]))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 16;i_9 += 1)
            {
                {
                    var_27 = (max(var_27, ((((((~(arr_26 [i_9])))) ? (((arr_26 [i_9]) ? (arr_26 [i_9]) : (arr_26 [i_9]))) : (arr_26 [i_9]))))));
                    arr_30 [i_9 - 3] [i_7] [i_7] = (min((((arr_26 [i_7]) ? ((137 ? var_12 : 130)) : 1)), 113));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_28 *= (((max(0, (arr_31 [i_7] [i_7]))) ^ 3673566929));
                                var_29 ^= 1;
                            }
                        }
                    }

                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        arr_44 [12] [8] [i_11 + 3] |= (max(7260306974544834772, ((0 ? 17590038560768 : 0))));

                        for (int i_15 = 2; i_15 < 18;i_15 += 1) /* same iter space */
                        {
                            var_30 = (max(var_30, (arr_27 [i_10 + 2])));
                            arr_47 [10] [10] [10] [6] |= ((!((((arr_32 [i_14 + 1] [i_10] [i_10]) ? (arr_37 [14] [i_10] [14]) : ((~(arr_41 [i_7] [i_7 + 1] [i_7] [i_7] [i_7]))))))));
                        }
                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 18;i_16 += 1) /* same iter space */
                        {
                            arr_50 [i_7] = (arr_29 [i_7] [i_7] [i_7]);
                            var_31 -= ((((arr_43 [i_7 + 1] [i_7]) != var_3)));
                            var_32 = (min(var_32, (((((((arr_32 [i_7] [i_7] [i_7]) << (((arr_38 [4] [i_10] [i_11] [4] [i_16 - 1] [i_16]) - 2691171189))))) ? (arr_23 [i_7 + 1]) : 0)))));
                        }
                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            arr_53 [i_7] [i_7 + 1] [i_7] = 32767;
                            var_33 = (max(var_33, (((-(arr_31 [i_17] [i_10 + 3]))))));
                        }
                        arr_54 [10] [i_11] [i_10 - 2] [10] [10] |= (arr_45 [0]);
                        arr_55 [i_7] [i_7] [3] [i_7] [4] = ((arr_38 [i_7] [i_7] [i_14] [i_14] [i_14] [i_14]) ? (arr_29 [i_7] [i_10 + 1] [i_11]) : (~0));
                        arr_56 [11] [i_7] [11] = 143;
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        var_34 = (arr_57 [i_10] [i_10] [i_10] [i_10]);
                        var_35 += 137;
                    }
                }
            }
        }
    }
    #pragma endscop
}
