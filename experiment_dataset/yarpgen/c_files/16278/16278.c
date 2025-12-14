/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((7342393871597752895 << (9007915270510775335 - 9007915270510775297)));
                    var_19 = (~27021597764222976);
                    arr_8 [i_0] [6] [i_1] [i_2] = ((+(((arr_3 [i_0] [i_0] [i_2]) ? var_3 : var_17))));
                }
            }
        }
        arr_9 [i_0] = (min((((arr_4 [i_0] [i_0] [i_0]) + 6786882389996663432)), (((((max(var_8, (arr_6 [i_0] [i_0])))) && (var_0 / -5004379784041115119))))));
        arr_10 [i_0] [i_0] = (((((-((5004379784041115138 ? (arr_0 [i_0]) : (arr_2 [8])))))) ? ((((arr_1 [i_0]) - (arr_3 [i_0] [i_0] [i_0])))) : (min((((6786882389996663432 ? (arr_1 [i_0]) : var_14))), (arr_0 [12])))));
        var_20 &= ((+(((arr_0 [i_0]) - (arr_0 [i_0])))));
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_21 *= -5004379784041115139;
        var_22 = (-1252268588 & 1);
        var_23 &= var_14;
        var_24 -= 39162;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_25 = (~196);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_26 ^= ((((-((var_13 ? 0 : (arr_23 [i_4] [i_5] [i_5] [i_5]))))) <= ((((((var_16 > (arr_22 [i_5])))) * ((max((arr_16 [i_5]), (arr_16 [i_4])))))))));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_29 [i_7] [i_5] [i_5] [i_4] = 2088952450876288431;
                        var_27 ^= (((max(var_14, var_2)) << ((((arr_5 [0] [i_5]) >= 196)))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_28 = (max(var_28, (((!(arr_6 [i_5] [i_7]))))));
                            var_29 = (min(var_29, (((-((var_1 ? var_16 : (arr_3 [i_4] [i_5] [i_5]))))))));
                            var_30 = (min(var_30, (128 ^ var_5)));
                            var_31 = (min(((-1106676976 ? ((~(arr_11 [i_4]))) : (arr_12 [i_7]))), (((2908692181 ? 1386275086 : 196)))));
                        }
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            arr_38 [i_4] [i_5] [i_6] [i_7] [i_9] = ((!(((-(arr_1 [i_9 - 2]))))));
                            arr_39 [i_4] [i_9] [13] [i_9] [i_7] [i_7] = (-65728858 || 475363260);
                            var_32 = (((((~(arr_5 [i_4] [i_6])))) ? ((~(arr_27 [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 2]))) : ((((arr_33 [i_9] [i_9 - 1] [3] [i_9 - 1] [i_9]) ? (arr_33 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2]) : (arr_33 [i_9] [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1]))))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_33 += var_0;
                        var_34 = ((!((((arr_12 [i_6]) ? 23377 : 37)))));
                        arr_42 [i_5] [i_5] [14] [1] [i_5] &= -1754932066;
                    }
                }
            }
        }
    }
    #pragma endscop
}
