/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(((max(var_3, -109))), (((var_7 && ((min(var_11, var_17)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 -= (max((((-(var_12 != var_15)))), ((~(max(var_2, var_6))))));
                var_20 = (((min(var_6, var_8))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_6 [i_2] = -109;
        arr_7 [i_2] = max(((-(min((arr_4 [i_2 + 2]), (arr_4 [i_2]))))), (arr_5 [i_2 + 3]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 = var_12;
                                arr_20 [i_2] [i_4] [i_4] [i_5 - 1] [i_6] = arr_19 [i_2] [i_3] [0];
                                var_22 *= (max(((((max((arr_8 [i_3] [i_5 + 2] [i_3]), var_16))) ? (arr_13 [i_6] [i_3] [i_4]) : (min((arr_17 [i_6]), var_5)))), (min(var_2, (arr_11 [i_2])))));
                            }
                        }
                    }
                    var_23 = ((((((max((arr_13 [i_4] [11] [i_4]), var_7))) || (arr_9 [i_4]))) ? (((~(var_15 || var_2)))) : (max(1152479271624309533, (min(var_8, var_1))))));
                    var_24 = (((((max((arr_13 [i_4] [5] [11]), (arr_8 [i_3] [i_2] [i_2 - 1])))) && ((min(-7451840813308009339, 14984371261726241420))))));
                    arr_21 [i_4] [i_3] [i_3] [i_4] = (max(262143, 9223372036854775807));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_25 -= (min((arr_24 [i_7]), ((((arr_23 [i_7] [i_7]) != (((arr_25 [3]) ? (arr_22 [i_7] [i_7]) : var_10)))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_26 ^= 281474976710655;
                    var_27 = var_8;
                }
            }
        }
        var_28 += (((-(max(14984371261726241420, var_13)))));
        var_29 = var_17;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_30 += (-var_16 || var_5);
        var_31 = ((((9007199254740992 ? 17294264802085242072 : var_13)) != ((var_15 ? 18446744073709551615 : (arr_34 [i_10] [i_10])))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        arr_41 [i_11] = (~var_2);
        arr_42 [i_11] [i_11] = ((((((arr_38 [i_11]) ? var_7 : (arr_40 [i_11])))) && var_10));
        var_32 ^= ((((var_4 || (arr_39 [4]))) || (((-(arr_37 [5]))))));
        var_33 = (max(var_33, (arr_37 [i_11 + 1])));
        var_34 = (((((var_15 && (arr_40 [i_11])))) != var_10));
    }
    #pragma endscop
}
