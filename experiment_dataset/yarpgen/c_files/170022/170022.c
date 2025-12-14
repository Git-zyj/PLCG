/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = ((-8898 ? 74 : ((175 ? 13894822211684414770 : -1))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 = ((((((var_8 != (arr_1 [i_0]))))) + (((arr_1 [i_0]) ? -4028593997267622680 : (arr_0 [i_0])))));
                        arr_10 [i_0] [i_1] [i_2] = (((arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_3]) ? 82 : (arr_9 [i_2 + 1])));
                        var_14 = var_1;
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            var_15 = (min(var_15, (max((((arr_14 [i_5] [i_4 - 2] [9]) ? var_5 : var_1)), (max((((arr_13 [i_4]) ? (arr_3 [i_5]) : var_3)), (arr_3 [i_4])))))));
            var_16 = -74;
        }
        var_17 += 1;
        var_18 = var_6;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_21 [i_7] [i_6] [i_6] [i_4] = (((((((-31954 ? var_4 : var_6)) * (1 == var_10)))) ? (((arr_17 [i_4 + 4] [i_4 + 4] [i_4 + 3]) >> (((arr_17 [i_4 - 1] [i_4 + 2] [i_4 + 3]) - 79)))) : var_4));
                    arr_22 [11] [11] [i_7] [i_7] = var_4;
                    arr_23 [i_4] [i_6] [i_6] = ((((min((arr_7 [i_4] [i_4 + 1]), (arr_7 [i_4 - 1] [i_4 + 1])))) ? ((0 ? 31968 : ((-(arr_1 [i_7]))))) : ((-(4188 < -72)))));
                }
            }
        }
        arr_24 [i_4] = ((((((arr_7 [i_4 + 1] [i_4]) ? (arr_7 [i_4] [i_4 + 1]) : (arr_7 [16] [i_4 + 4])))) ? (max(4050409567141635871, 1)) : (arr_7 [i_4 - 1] [i_4 - 1])));
    }

    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_19 *= ((+(max((arr_25 [i_8] [i_8]), (arr_1 [i_8])))));
        arr_28 [i_8] [i_8] = ((-31954 ? var_3 : var_11));
        var_20 += ((0 ? (arr_7 [i_8] [i_8]) : (~16)));
        arr_29 [14] = ((3435014283105595811 ? (((((-6352586168780907413 ? 12 : -32706))) ? (arr_11 [i_8]) : ((var_11 ? var_0 : -26064)))) : (((var_4 >= (arr_9 [i_8]))))));
        var_21 *= var_7;
    }
    #pragma endscop
}
