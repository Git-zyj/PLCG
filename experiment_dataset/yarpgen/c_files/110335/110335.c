/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0 - 2]) ? (((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))) : 155);
        arr_3 [i_0] [i_0] = ((~((((min(var_8, 113))) ? var_7 : var_8))));
        arr_4 [i_0] = (min((((var_2 ? var_6 : var_0))), (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 ^= 3377699720527872;
        var_14 = ((((((var_12 ? var_0 : var_0)) & (max(18443366373989023734, var_3))))) ? var_6 : var_9);
        var_15 |= (max((((arr_1 [i_1]) >> (arr_6 [i_1]))), (((var_2 || (arr_5 [i_1]))))));
        arr_8 [i_1] = -var_4;
        var_16 = (min(var_16, var_3));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_17 ^= (((((((max(var_3, var_2))) ? ((var_6 ? (arr_12 [i_2]) : (arr_11 [i_2] [i_2]))) : (((min(var_4, (arr_10 [i_3])))))))) || (((arr_10 [i_2 - 1]) == (arr_12 [i_2 + 1])))));

                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    arr_17 [i_2] [i_3] [i_4] = (((max(((min((arr_16 [i_2] [i_2] [i_4] [i_4]), (arr_16 [i_2] [i_3] [i_4] [i_4])))), (arr_9 [i_4])))) ? ((max((arr_11 [i_4 - 1] [i_2 - 1]), var_6))) : (((arr_13 [i_2 + 1]) | var_5)));
                    var_18 ^= (((((max(var_2, var_2)))) | (max((max(var_12, 18443366373989023734)), var_9))));
                    arr_18 [i_3] [i_3] = -13;
                }
                arr_19 [i_2] [i_2] = (min(1, ((((18443366373989023743 ? 1529058069 : var_10)) >> ((((max(112, 121))) - 109))))));
                var_19 = ((~((((((arr_9 [i_2]) ? var_1 : 17961721488824743280))) ? (((max(32757, 34716)))) : (max((arr_11 [i_3] [i_2]), var_11))))));
            }
        }
    }

    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        arr_22 [i_5] = ((((((arr_12 [i_5 + 1]) ? var_5 : 24174)) > 41385)) ? (((~(arr_15 [i_5] [i_5] [i_5])))) : ((((var_5 ? var_8 : var_0)) * (arr_9 [i_5 - 1]))));
        var_20 ^= ((((min(var_2, (((4 ^ (arr_9 [6]))))))) ? (var_12 && var_10) : (((arr_14 [i_5 + 1] [0]) ? var_11 : ((max(var_12, var_11)))))));
        arr_23 [i_5] = ((((((99 ? 60404 : 46983)))) ? ((((((139 << (241 - 222)))) ? 113 : (((!(arr_20 [i_5]))))))) : ((var_7 ? var_12 : (((arr_15 [i_5] [i_5] [i_5]) ? (arr_14 [i_5] [5]) : -5455344555998228340))))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        arr_27 [i_6] = var_12;
        var_21 = (((arr_16 [i_6 + 1] [i_6 + 1] [8] [i_6]) ? var_12 : (arr_12 [i_6 + 3])));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_30 [i_7] |= (!37640);
        var_22 = max(-1, 32767);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_33 [i_8] [i_8] = (((arr_32 [i_8] [i_8]) ? var_12 : (((var_3 ? (arr_31 [i_8]) : (arr_31 [i_8]))))));
        var_23 = (((arr_31 [i_8]) ? (arr_31 [i_8]) : 9));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_49 [i_8] [i_8] [i_8] [i_12] = -8654760869784763382;
                                var_24 = (((arr_36 [i_8]) - ((var_9 ? -7763 : 99))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_25 = (((((arr_34 [i_8]) - var_4))) ? (~var_6) : (arr_39 [i_9 - 1] [i_8]));
                                arr_54 [i_10] |= var_12;
                            }
                        }
                    }
                }
            }
        }
        var_26 = var_8;
        arr_55 [i_8] = (arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
    }
    #pragma endscop
}
