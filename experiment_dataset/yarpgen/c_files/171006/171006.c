/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((((6288 << (var_9 + 143)))) && (((var_1 ^ (-2147483647 - 1)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] = min((max((arr_5 [i_0]), var_4)), -122);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 |= (min(((~(arr_8 [i_0] [i_1] [i_2] [i_3]))), (arr_8 [1] [i_2] [i_2] [i_4])));
                                var_20 = var_11;
                                var_21 = (-59224 % var_1);
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = -288950857;
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] = (((((var_7 >> ((var_7 ? 9 : var_14))))) || ((((!-110) ? (var_7 + var_13) : (122 + -1114171429))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_6] [i_0] [i_0] = (((1198170843 < var_14) || (arr_24 [i_5 + 2] [i_6])));
                                arr_28 [i_0] [i_5 - 2] [i_7] |= arr_10 [i_5 - 3] [i_5 - 4] [i_5 - 4] [i_5 - 4] [i_5 - 4];
                                arr_29 [i_6] [i_6] [i_6] [i_6] = max((((arr_8 [i_0] [i_5 + 1] [i_6] [i_7]) + 1198170843)), (((arr_8 [i_0] [i_5 + 1] [i_7] [i_7]) + (arr_8 [i_0] [i_5 - 1] [i_6] [i_7]))));
                                var_22 = (((min(-122, var_8))));
                                var_23 ^= (((arr_21 [i_8] [i_6] [i_7] [i_6] [i_0] [i_0]) ? ((((!(min(1, 1)))))) : 4294967281));
                            }
                        }
                    }
                    arr_30 [i_0] [i_6] [i_5] [7] = (max((arr_15 [i_0]), (max(var_5, (arr_4 [i_5 - 2] [i_6] [i_5 - 2])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_24 = var_9;
        arr_34 [i_9] = (arr_33 [i_9]);
        arr_35 [i_9] = (-32616 / 27);
        var_25 |= (var_5 && var_14);
    }

    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        arr_50 [i_11] [i_11] = ((((min(((((arr_38 [i_11 + 4]) << (((arr_39 [i_10] [i_10]) - 4034219918))))), ((var_0 ? (arr_41 [i_10] [2]) : (arr_42 [i_10] [i_10] [i_13])))))) && ((((((min(var_12, var_16)))) + ((86 ? -9223372036854775785 : (-9223372036854775807 - 1))))))));
                        var_26 += ((((251 ? (arr_48 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_10] [i_11] [i_11 + 1]) : (90 ^ 65514))) != ((((((1 - (arr_44 [i_10] [i_10] [i_11 + 4] [i_11 + 4])))) || (((var_6 << (((arr_42 [i_10] [i_10] [i_13]) + 6570574926496979932))))))))));
                        var_27 ^= ((((((((((arr_41 [i_11] [i_11]) >= var_7)))) - var_15))) ? ((max((2931490041091454609 && var_1), (arr_41 [i_11 + 4] [i_11 + 2])))) : (((((var_13 ? var_6 : 7)) >= (3627985355 >= 5612))))));
                    }
                }
            }
        }
        var_28 = ((+(((arr_44 [i_10] [i_10] [i_10] [i_10]) << (((arr_46 [i_10] [i_10] [i_10]) - 40064))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_53 [i_14] |= (((arr_52 [i_14] [i_14]) ? (arr_52 [i_14] [i_14]) : var_10));
        var_29 ^= (((var_10 && 3993) || (((arr_52 [i_14] [i_14]) || (arr_52 [i_14] [i_14])))));
    }
    var_30 = (((543951657912961243 || 12) & var_17));
    var_31 = (((((var_15 ? var_14 : var_3) ^ (var_15 + -3645)))));
    #pragma endscop
}
