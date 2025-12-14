/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((var_2 == (((~(min(var_7, var_1)))))));
    var_15 *= ((((((31525197391593472 % 2035173358112494831) * (-1844018014 & 1844018013)))) ? ((((var_8 == 18415218876317958144) > var_7))) : var_1));
    var_16 = var_11;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= var_0;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = ((~((var_1 ? ((var_8 ^ (arr_0 [i_0]))) : ((1844018027 ? (arr_4 [i_0] [i_0] [i_0]) : var_8))))));
                    var_18 *= ((((min(1778611353, 1844018013))) ^ ((0 ? 31525197391593485 : 31525197391593472))));
                    var_19 = var_3;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_20 -= ((var_5 ? 31525197391593492 : (arr_9 [6] [i_3])));

        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            arr_13 [i_3] = -1844018014;

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_17 [i_3] = var_0;
                var_21 ^= (arr_8 [i_3]);
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_21 [i_6] [i_3] [i_3] [i_3] = (arr_15 [8] [i_6]);
                var_22 = (max(var_22, (((-((2035173358112494831 ? 1844017991 : (arr_2 [i_3]))))))));

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_23 = ((18446744073709551615 ? (arr_19 [i_4 + 3] [i_4] [i_3]) : ((~(arr_23 [i_3] [i_3] [i_3] [i_7])))));
                    var_24 = (max(var_24, (-1844017991 > 0)));
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_25 -= ((var_1 * (!2035173358112494848)));
            var_26 += ((var_11 | (var_11 * var_6)));
        }
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    {
                        var_27 = -7781531059207283656;
                        var_28 = (max(var_28, (((((arr_30 [0] [2] [i_10]) ^ 1844017980)) >> (((~1) + 27))))));
                    }
                }
            }
        }
        var_29 = (max(var_29, (~9223372036854775807)));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 23;i_14 += 1)
            {
                {
                    var_30 = (min(var_30, (arr_37 [i_14 - 2])));
                    var_31 = (max(var_31, (arr_40 [i_13 - 1] [i_13 - 1])));
                }
            }
        }
        arr_44 [i_12] = ((-(arr_39 [i_12] [i_12])));
    }
    #pragma endscop
}
