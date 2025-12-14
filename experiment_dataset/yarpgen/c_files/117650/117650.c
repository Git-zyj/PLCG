/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_20 = ((65535 && (1 - 4985058351184600247)));
                        var_21 &= (((((~var_0) + 2147483647)) >> ((((1 - (arr_5 [i_0] [i_1] [i_0]))) + 57604))));
                        var_22 &= ((min((arr_7 [i_0] [i_0] [i_0] [i_0]), ((120 ? var_6 : -121)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_14 [i_0] [i_4] [i_0] = (((2046421919 || (((var_7 ? var_8 : var_16))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [0] [i_5] [24] [i_0] = (max(var_1, (arr_17 [i_6] [i_4] [24] [i_0] [i_4] [i_5])));
                                var_23 += 121;
                                var_24 = (min(var_24, 121));
                                arr_23 [i_0] [i_4] [i_0] [i_6] [9] = (i_0 % 2 == zero) ? ((((((((arr_8 [5]) ? 24576 : var_12)) >> ((((var_4 ? 120 : 1)) - 90)))) >> (((arr_4 [i_4] [i_4] [i_0] [i_0]) + 5141))))) : ((((((((arr_8 [5]) ? 24576 : var_12)) >> ((((var_4 ? 120 : 1)) - 90)))) >> (((((arr_4 [i_4] [i_4] [i_0] [i_0]) + 5141)) + 11688)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_25 &= (((~var_8) >= (arr_17 [i_9 + 2] [i_8 + 3] [i_8] [i_8] [i_4] [i_0])));
                                arr_28 [i_0] = (((((var_5 ? (~var_9) : 2147483647))) ? (((arr_15 [i_9] [i_8 + 4] [i_8] [i_5] [i_0] [i_0]) & 16920968132413109805)) : (((var_13 | 32767) ? var_0 : (~var_10)))));
                                var_26 &= 1;
                            }
                        }
                    }
                    var_27 = -119;
                    arr_29 [i_0] [22] [i_0] [i_0] = ((3694 >= ((var_14 + (arr_2 [i_0] [i_4])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 13;i_11 += 1)
        {
            {
                var_28 = (min(var_28, ((((arr_0 [i_10 + 2]) < ((((-3134 + 2147483647) >> 5))))))));
                arr_36 [i_10] [i_11] = -2091189383;
                arr_37 [i_10] [i_11] = (((2091189383 ^ -2147483637) ? ((65533 ? (var_6 && 1011351545) : -32767)) : (min(((30903 ? var_17 : var_14)), (arr_27 [i_10] [i_11] [i_11] [i_10])))));
            }
        }
    }
    var_29 = ((!((max((min(var_5, var_18)), ((max(var_14, var_1))))))));
    #pragma endscop
}
