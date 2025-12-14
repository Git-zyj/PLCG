/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_12;
        var_20 = (max(((((var_6 ? var_8 : var_3)))), (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = -359223466995518015;
        var_21 = (min(var_21, ((((var_9 ? (max(3532117191, 64)) : 3532117191))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = (((((var_11 ? -14 : -21121))) ? var_10 : ((0 ? var_17 : var_13))));
        var_22 = (min(var_22, ((~(0 & var_15)))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = (var_14 <= 359223466995518042);
                    var_23 = (((arr_11 [i_2 + 1] [i_1]) ^ (arr_1 [i_2 + 1] [21])));
                    var_24 = var_9;
                    arr_15 [i_1] [i_1] [i_1] [i_1] = var_18;
                }
            }
        }
        arr_16 [i_1] = (arr_2 [i_1] [i_1]);
        var_25 = ((1911977893 ? 50897 : (((arr_13 [1] [1]) & 0))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_26 = ((2089215182 ? (((((-54 ? var_12 : var_9))) ? (((var_17 | (arr_5 [i_4] [14])))) : (max((arr_6 [i_4]), var_14)))) : ((max(var_7, (((arr_17 [i_4]) ? 224 : 359223466995518032)))))));
        var_27 = ((!((((arr_5 [i_4] [6]) ? 4 : (((arr_5 [i_4] [i_4]) ? 3729133389 : -1946866351)))))));
        arr_19 [i_4] [i_4] = (arr_0 [7]);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_28 = (max((max((arr_11 [i_5] [i_5]), 2205752095)), (arr_11 [i_5] [i_5])));
        var_29 = (min(var_29, ((((arr_12 [14] [i_5] [i_5] [i_5]) <= ((359223466995518015 ? var_0 : -79)))))));
        arr_24 [9] = ((((((5680184057156241868 ? var_3 : var_3))) / (((((arr_0 [i_5]) + 9223372036854775807)) << (((var_18 + 57) - 39)))))));
    }
    var_30 += (((((62 << (var_6 - 32260)))) > var_5));
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 23;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_31 ^= (((max((~var_15), ((var_10 ? var_9 : (arr_27 [i_6]))))) >= var_15));
                            arr_37 [i_6] [i_7] [i_7] [i_7] [11] [i_7] = (min(((var_8 * (((arr_29 [i_9]) ? 239 : 5511)))), (((arr_28 [i_8] [i_7 + 1] [i_6]) ? (arr_34 [i_6] [i_7 + 1] [i_8]) : var_3))));
                            var_32 = (min(var_32, var_5));
                        }
                    }
                }
                var_33 = (min(var_33, var_18));
                var_34 &= var_13;
                arr_38 [i_6] = 1;
            }
        }
    }
    #pragma endscop
}
