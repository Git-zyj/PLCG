/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((~(min(9, (min(32500, var_9))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((((((-2147483641 + -8704057410786915631) || (((var_7 & (arr_1 [i_0] [i_2]))))))) - ((((arr_8 [i_0 + 1]) || 65)))));
                    arr_10 [i_0] [i_0] [i_2] = ((!((((var_10 ? 208 : var_3))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_16 = (min((-1447968098 / 2147483640), (((arr_8 [i_0]) / 3403080358))));
                    var_17 = (((((((arr_5 [i_0] [3] [i_0]) ? (arr_13 [i_0] [i_3] [i_0]) : 1))) ? var_0 : (18446744073709551614 - var_5))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_4));
                                arr_19 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((min((arr_11 [i_0] [i_0]), var_7)));
                                var_19 = max((arr_11 [i_0] [i_0 - 1]), (2147483626 | var_6));
                            }
                        }
                    }
                    var_20 = (max(var_20, (~-2147483641)));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_21 = ((var_8 % ((((((var_1 ? -32487 : 6026897205708392233)) + 9223372036854775807)) << (175 - 175)))));
        var_22 = (((arr_21 [i_7]) ? ((+((((arr_6 [i_7] [i_7] [i_7]) && 2147483640))))) : (arr_22 [i_7])));
        arr_24 [i_7] [11] = (max(374145956, ((((arr_15 [i_7]) != 3403080363)))));
        arr_25 [i_7] = 191;
        var_23 -= (((((arr_6 [10] [8] [8]) / (arr_6 [9] [i_7] [i_7])))) * (min(0, (arr_6 [2] [2] [2]))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_24 = 187;
        arr_29 [i_8] = ((((min(-6026897205708392233, (arr_6 [i_8] [i_8] [i_8])) | var_5))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_25 = ((arr_17 [i_8] [i_8] [i_8] [i_9] [i_10]) ? (min(6, 6026897205708392233)) : (((max((arr_13 [1] [i_9 + 2] [i_8]), -48)))));
                    var_26 = (min(var_26, (min((arr_20 [i_8]), (min((arr_33 [i_9 - 3] [i_8] [i_10]), (((arr_27 [i_9]) ? -30340 : -32501))))))));
                }
            }
        }
        var_27 = (min(var_27, (1307967586 == 30339)));
    }
    var_28 = (min(((((((-11311 ? var_1 : 2143289344))) || var_10))), (max((var_12 / 6026897205708392224), -var_1))));
    var_29 = var_13;
    #pragma endscop
}
