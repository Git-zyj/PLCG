/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((~(var_9 | 103)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((+(((arr_3 [i_2] [i_2]) / var_6)))))));
                    arr_12 [i_0] = (((~-20) ^ (max(((max(1, 1))), 0))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_15 = var_7;
                        var_16 = ((~var_12) ? (((~(arr_3 [i_0] [i_0])))) : (0 ^ 0));
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_17 ^= -55;
                                arr_34 [i_10] [i_9] = (arr_5 [i_9] [i_6 + 3]);
                                var_18 = ((5 << (((max((((63 | (arr_16 [i_7] [i_8] [i_8] [i_10])))), 11943967963520176309)) - 11943967963520176299))));
                            }
                        }
                    }
                    var_19 &= -121;
                }
            }
        }
        arr_35 [i_6 + 1] |= 103;
    }
    for (int i_11 = 1; i_11 < 13;i_11 += 1)
    {
        arr_38 [i_11] [i_11] = (i_11 % 2 == zero) ? (((((!((((arr_37 [i_11 - 1] [i_11 + 1]) << (var_9 - 17232)))))) ? 0 : ((~(((arr_0 [i_11]) << (8728 - 8728)))))))) : (((((!((((arr_37 [i_11 - 1] [i_11 + 1]) << (var_9 - 17232)))))) ? 0 : ((~(((((arr_0 [i_11]) + 9223372036854775807)) << (8728 - 8728))))))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 13;i_13 += 1)
            {
                {
                    var_20 = (min(var_20, (+-0)));
                    var_21 = ((-(((arr_39 [5] [i_12 + 2] [i_11]) ? 1900846201 : var_10))));

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        arr_46 [i_14] [i_11] [i_11 + 2] = ((var_7 ? (39295 * var_4) : var_7));
                        var_22 = ((var_6 | (arr_3 [i_11 - 1] [i_11])));
                    }
                    for (int i_15 = 3; i_15 < 14;i_15 += 1)
                    {
                        var_23 *= (((var_1 < -1809013710) ? var_3 : 9510));
                        arr_50 [i_11] [9] [i_15] = (-6 % 149);
                    }
                    arr_51 [i_11] = ((!(((-109 ? var_9 : (arr_7 [i_11 - 1]))))));
                    var_24 = 4095;
                }
            }
        }
        arr_52 [i_11] [i_11] = 63;
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {

        for (int i_17 = 1; i_17 < 14;i_17 += 1)
        {
            arr_58 [i_16] [i_16] [i_16] = ((((-2114 / (~var_5)))) ? var_10 : -89);
            arr_59 [i_16] = (max((((arr_3 [i_17] [i_16]) | -22209)), (var_11 >= 255)));
        }
        for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
        {
            var_25 += 2447520443745184222;
            arr_64 [i_16] [i_16] = ((!(((22208 ? (arr_11 [i_16] [i_18] [i_18]) : 55)))));
            arr_65 [i_16] [i_16] = (var_5 + ((((!((!(arr_37 [i_16] [i_16]))))))));
            arr_66 [i_18] [6] [i_18] &= 0;
        }
        for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
        {
            arr_71 [i_16] [i_16] = (((((((min(255, 22))) ? 55 : 168))) & (((-4466 * var_9) ? 3506472776073406555 : ((max(var_11, var_3)))))));
            var_26 += min(((1115693622547365237 << (17775716462479422149 - 17775716462479422094))), ((max((-2147483647 - 1), 134184960))));
            var_27 += ((((min(var_8, var_3))) ? ((20 ? var_11 : -1354633387)) : (!var_6)));
        }
        arr_72 [i_16] = -15317;
        arr_73 [i_16] [i_16] = -33;
    }
    #pragma endscop
}
