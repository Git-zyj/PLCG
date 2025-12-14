/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((0 * var_6), (((min(var_17, 4)) | (((30218 ? 9223372036854775807 : 0)))))));
    var_20 = (max(((var_8 ? (((max(var_15, 12668)))) : ((4 ? var_18 : 14680064)))), ((min(215, 5)))));
    var_21 |= (~var_17);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_4] [i_0] [i_4] = 30218;
                                arr_15 [i_4] [10] [i_3] [i_3] [i_3] [i_3] = -233;
                                arr_16 [6] [i_1] [i_1] |= (min(((((min(59, (arr_5 [i_2] [i_2] [i_4])))) * (var_17 / 7782266954259853345))), ((-var_17 / (arr_9 [1] [i_0] [6] [i_4 + 1])))));
                                var_22 ^= ((((((max((arr_2 [i_4 - 1] [6] [i_0]), var_7))) ? (min(1967710757, 1)) : var_17)) / (min((min(var_10, (arr_11 [i_4] [i_3] [i_0]))), (arr_10 [i_0] [i_1] [i_0] [i_1] [i_1])))));
                            }
                        }
                    }
                    var_23 = (((min((arr_11 [14] [i_1] [14]), 3))) ? (max((arr_6 [i_0]), (((arr_9 [10] [15] [10] [13]) / var_13)))) : (14680064 / 65535));
                    var_24 = (min(var_24, var_13));
                }
            }
        }
        arr_17 [i_0] [i_0] = (max(9223372036854775807, (((!(arr_7 [i_0] [i_0] [i_0]))))));
        var_25 = (((((-(arr_11 [i_0] [i_0] [i_0])))) ? ((-6454138392528179764 ? (arr_11 [i_0] [i_0] [i_0]) : (arr_0 [i_0]))) : 13671));
    }
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        var_26 = (max((((arr_19 [i_5]) / 23)), (((-var_4 / (arr_18 [i_5]))))));

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_26 [i_5] = -821361833;
                arr_27 [i_7] [i_5] [i_5] [7] = (max((-12666 % var_17), (arr_24 [i_5] [i_5] [i_6] [i_5])));
            }
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                var_27 *= (((max(-7596148203658410907, (((116 ? (arr_22 [20] [1] [1]) : (arr_28 [i_5] [i_5] [16])))))) - var_0));
                var_28 = (max(var_28, 16754925020719935314));
                var_29 -= ((-(var_16 % var_8)));
            }
            arr_30 [i_5] = ((((max((arr_21 [i_5] [i_5]), (arr_23 [i_5] [i_5] [i_5]))) | 9223372036854775807)));
            var_30 = (((-257513903 / var_16) + ((112 + (arr_21 [i_5 - 1] [11])))));
            var_31 = (arr_21 [i_6] [i_5]);
        }
        var_32 = (min(var_32, ((11672930140968607163 ? ((((((max(0, (arr_20 [18])))) && ((var_16 || (arr_18 [6]))))))) : 16754925020719935303))));
    }
    var_33 = (((!var_15) | (((max(var_14, var_17))))));
    #pragma endscop
}
