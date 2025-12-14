/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 <= (min((1 % var_16), -var_6))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (min(var_20, ((max(239, (arr_2 [i_0]))))));
        arr_3 [i_0] = (min(32761, (((((-1 + 2147483647) << (((((arr_1 [i_0]) + 29317)) - 27)))) | ((min((arr_1 [i_0]), (arr_1 [6]))))))));
        var_21 = var_14;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_4] = (max((((var_0 ? (arr_0 [i_3 - 1]) : 3))), var_16));
                                var_22 = (arr_0 [i_1]);
                                var_23 = ((-(arr_13 [i_3])));
                                var_24 *= (max((min((max(var_9, var_18)), ((max(32761, (arr_0 [i_1])))))), (max((((var_1 ? (arr_7 [i_1] [5] [9]) : (arr_14 [i_1] [i_1] [i_3] [i_4] [6])))), (min(16463270898129277314, -32761))))));
                                var_25 *= ((arr_8 [i_1]) ? ((((arr_7 [i_2] [i_3 + 1] [i_5 + 2]) == (arr_7 [i_1] [i_1] [i_5 + 2])))) : var_6);
                            }
                        }
                    }
                    var_26 = (((((var_3 ? -var_12 : (1 != -13281)))) ? (min((((arr_8 [i_1]) ? 9223372036854775807 : (arr_12 [i_1] [i_1] [6] [i_1]))), (!var_3))) : (((16463270898129277314 ? (var_10 >= 1) : (max((arr_8 [i_3]), (arr_11 [i_3] [i_2]))))))));
                }
            }
        }
        var_27 = (1 && -1);
        var_28 ^= 1073741824;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        var_29 = ((+(((~var_3) * (arr_5 [i_8 - 2])))));

                        for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_30 |= (max(((-(arr_8 [i_7 + 2]))), (arr_2 [i_7 + 1])));
                            var_31 = (min(((((((var_11 ? var_5 : (arr_4 [10])))) ? var_10 : (arr_18 [i_1] [i_1])))), ((((((arr_24 [i_7] [1] [i_7] [i_8] [i_6]) % (arr_2 [i_8])))) - ((-(arr_23 [i_1] [i_6] [i_6] [7] [i_6])))))));
                            var_32 = (max((((~var_9) ? (((arr_6 [i_9 + 1]) / var_6)) : ((794528813 ? var_18 : (arr_14 [i_1] [i_6] [i_7] [i_8] [i_7]))))), ((-(arr_19 [i_1] [i_6] [i_9 - 1])))));
                            var_33 &= (max((arr_8 [i_7 - 3]), (((-149394679 + var_14) ^ (!var_16)))));
                        }
                        for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_34 = (max(var_34, var_14));
                            arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((min(16463270898129277314, (arr_25 [i_1] [i_1] [i_6] [i_8] [i_7] [i_7 + 1] [i_7 - 1]))));
                            var_35 ^= ((var_3 ? var_4 : var_3));
                            arr_29 [7] [i_7] [i_7] [i_8] [i_7] = ((-(((arr_12 [i_8 - 2] [i_10 - 1] [0] [i_10 - 1]) >> ((((var_16 ? var_7 : -32750)) - 2025108355))))));
                            arr_30 [i_7] [i_7] = (-2147483647 - 1);
                        }
                    }
                }
            }
        }
    }
    var_36 = ((var_2 ? (max(((27762 ? 26230 : 1983473175580274290)), var_14)) : (((var_11 ? (var_4 ^ var_2) : 37753)))));
    #pragma endscop
}
