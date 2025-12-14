/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] = (((((0 ? (((1 ? 80 : var_7))) : (max(var_6, (arr_4 [i_1])))))) ? (0 <= 14516886290343171851) : ((((arr_5 [i_0] [i_0]) || 1)))));
                    var_17 = ((807107948 || (((807107948 ? -413343715204341283 : var_10)))));
                    var_18 = ((+((-((807107952 ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : (arr_6 [i_0] [i_2])))))));
                }
            }
        }
        var_19 = (max(((-(arr_2 [i_0 - 2] [i_0 - 2]))), (arr_7 [i_0] [i_0] [i_0] [i_0 - 3])));
        var_20 *= ((((45098 ? 1807333360 : (((min(var_9, var_12)))))) == ((20446 ? var_9 : var_3))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_21 = (max(var_21, 2319396113360390796));
                arr_15 [i_3] = (((13796771739971414861 + 0) ? ((var_15 ? var_3 : (arr_10 [i_0] [i_4]))) : var_14));
                var_22 = (max(var_22, (((~(((!(arr_5 [i_0] [i_3])))))))));
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_23 = ((+((((arr_14 [i_3]) || var_4)))));
                arr_19 [i_0] [i_3] [i_5] &= ((~(((arr_18 [i_0] [i_5] [i_5]) ? 3 : (arr_6 [i_0] [i_0])))));
            }
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_24 = (((arr_20 [i_0 - 3] [i_6 - 2] [i_6 - 2] [i_6]) ^ (arr_20 [i_0 - 3] [i_6 - 2] [i_6 - 2] [i_7])));
                    arr_26 [i_0] [i_6] [i_7] = (((arr_7 [i_6 + 1] [i_3] [i_6] [i_0 - 2]) ? (arr_7 [i_6 - 2] [i_3] [i_3] [i_0 + 4]) : (arr_7 [i_6 - 1] [i_6] [i_6] [i_0 - 3])));
                    var_25 = ((1 ? (arr_13 [i_0] [i_3] [i_6] [i_7]) : (arr_24 [i_0] [i_3] [i_6] [i_7])));
                }
                var_26 ^= ((~(arr_24 [i_0] [i_3] [i_3] [i_6])));
                arr_27 [i_0] [i_0] [i_0] [i_0] = ((var_6 || ((((arr_18 [i_0] [i_0] [i_0]) ? (arr_17 [i_0] [i_3] [i_6] [i_0]) : var_8)))));
            }
            arr_28 [i_3] = 4232195510;
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_34 [i_8] [i_9] = -16936482921418951203;
            var_27 = (((((min(var_5, (arr_11 [i_8] [i_8] [i_9]))))) ? ((min(var_13, (arr_30 [i_9] [i_9])))) : (((((41 ? var_13 : 127)))))));
            arr_35 [i_8] = (((arr_23 [i_8] [i_9] [i_8] [i_9]) ? ((((var_13 ? 12144040181627168811 : 126)) % var_6)) : ((((!(((arr_24 [i_8] [i_8] [i_8] [i_8]) == 4958))))))));
        }
        var_28 = (((min(var_4, 0)) * ((((3097834268829208502 && ((max((arr_4 [i_8]), (arr_7 [i_8] [i_8] [i_8] [i_8]))))))))));
    }
    var_29 = var_1;
    var_30 = ((var_14 != (((!((max(var_14, 1843799830882963525))))))));
    var_31 = var_0;
    #pragma endscop
}
