/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(var_4, var_4)) ? var_13 : ((((15893183985915570212 ? var_6 : var_3)) & (var_10 * var_0))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((-(arr_1 [i_0])));
        arr_2 [i_0] = min((((-15893183985915570190 < (min(15893183985915570212, var_3))))), (arr_0 [i_0]));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_17 = 1982815470755285500;

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((((((var_5 ? var_12 : 85))) > (max((arr_4 [i_2 - 2]), 2553560087793981426)))) ? ((~((1982815470755285500 ? var_3 : 0)))) : (min(((var_0 * (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))), ((min(var_14, var_12))))))))));
                        var_19 |= (((180 / 1) <= 1));
                        var_20 = (((((64218 ? 0 : 1156299152485977660))) % (max((arr_13 [i_3 + 3] [i_2 - 2] [i_2 - 1] [i_1 + 4]), (min(9223372036854775807, 0))))));
                        var_21 *= (107 + ((-(1 + 9214211593982728170))));
                    }
                }
            }
            arr_15 [i_2 - 1] [i_1 + 4] = ((((1 ? (arr_14 [i_1 - 1] [i_2 + 1] [i_2 - 1] [i_1 - 1] [i_2 - 2] [i_2 - 1]) : (arr_14 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_1 - 1] [i_1 + 2]))) * ((((((min(var_7, var_5)) + 9223372036854775807)) >> (((arr_4 [i_2 - 1]) - 5498577108021292788)))))));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_22 = (((arr_6 [i_1 - 2]) * (1 | 715804419)));
                            arr_26 [i_1 + 2] [i_2 + 2] [i_5 + 2] [i_6 + 1] [i_7] = ((-var_12 ^ ((32 | (569034333 * 1)))));
                        }
                    }
                }
            }
            var_23 = (min(var_23, 1));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_24 &= (((arr_14 [i_1 + 3] [i_8] [i_1 + 1] [i_1 + 3] [i_1 + 4] [i_1 - 3]) == (((-((var_4 ? var_14 : var_12)))))));
            var_25 = (((arr_4 [i_1 + 3]) ? ((max(var_12, ((8160 ? -4 : 223))))) : var_11));
            var_26 = 1;
        }
        var_27 = (-((((-(arr_23 [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1 + 4] [i_1 - 3] [i_1 + 3]))) & ((min(5386, var_0))))));
        var_28 *= (arr_25 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 - 3]);
        var_29 = (max(var_29, var_6));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_30 ^= (min(((((var_2 ? (arr_22 [i_9]) : 1)))), (((arr_17 [i_9] [i_9] [i_9] [i_9]) ? 21 : (arr_17 [i_9] [i_9] [i_9] [i_9])))));
        var_31 = (((((min(55314, 125))) ? (arr_8 [i_9]) : -var_0)) >> (((arr_30 [i_9]) - 127)));
    }
    var_32 = (max(var_32, ((max(0, 1)))));
    var_33 |= ((1343357685 ? 1 : 4751089355109935262));
    #pragma endscop
}
