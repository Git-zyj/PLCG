/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((min((var_15 | var_1), var_14)));
    var_21 = (var_19 + (min(var_0, (max(var_12, var_0)))));
    var_22 += var_16;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_23 = var_3;
        arr_2 [i_0] [i_0] = 4294967295;
        arr_3 [i_0] [i_0] = 11891;
        arr_4 [i_0] = (((arr_0 [i_0]) + ((~(arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_7 [3] [i_1 + 1] = (min(((min((arr_6 [i_1 - 3] [14]), (arr_6 [i_1 - 3] [i_1])))), ((35208 ? 3956887584 : (-32767 - 1)))));

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            arr_12 [i_2] = ((((max((arr_5 [i_1 - 3] [i_2 + 1]), (arr_5 [i_1 - 2] [i_2 - 1])))) ? ((0 ? (arr_5 [i_1 - 1] [i_2 - 1]) : (arr_5 [i_1 - 2] [i_2 + 1]))) : ((var_10 - (arr_5 [i_1 - 3] [i_2 + 1])))));
            var_24 = ((((((~(arr_0 [i_2])))) ? (((min(53666, (arr_9 [i_1]))))) : (arr_8 [i_2]))) & (min((min(49873, 15571987152389993773)), (((2251174300183623657 ? (arr_10 [8]) : (arr_6 [10] [i_2 - 2])))))));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_25 = 17534;
                var_26 += (((arr_0 [i_3]) ? (arr_6 [i_2 - 2] [i_1 - 3]) : (((arr_6 [i_2 + 1] [i_1 - 2]) * (arr_6 [i_2 - 2] [i_1 + 1])))));
                var_27 &= var_18;
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_28 = -25308;
                var_29 = 7447087130196481990;
                var_30 = ((~(((arr_8 [i_1]) / (arr_1 [17] [i_1 + 2])))));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_21 [i_5] = 7;
                arr_22 [i_5] [i_5] [i_2] [i_5] = arr_14 [i_1];
            }
            var_31 *= ((((((var_10 ? (arr_6 [i_1] [11]) : 7502740264077706293))) ? (min(var_0, (arr_18 [14] [i_2] [4]))) : (arr_0 [i_2]))) * (((arr_10 [2]) * (arr_18 [i_2 + 1] [i_1] [i_1 - 3]))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_26 [i_6] [i_6] = 15671;
            var_32 &= (((var_7 ^ var_18) ? (((arr_15 [i_1] [4]) + var_2)) : var_9));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_29 [i_1] [i_7] [7] = ((var_10 < ((12 ? (arr_1 [i_1 + 2] [i_7]) : (arr_1 [i_1 - 3] [i_7])))));
            arr_30 [15] = (((min(2042375236, 15663)) * (max(var_18, 31519))));
        }
        var_33 = (min((arr_19 [i_1] [i_1 + 1] [i_1 - 3] [14]), (min(var_13, 7447087130196481990))));
    }
    #pragma endscop
}
