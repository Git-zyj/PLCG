/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1414969654;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [7] = ((var_13 ? (arr_1 [i_0]) : (arr_0 [i_0])));
        var_21 ^= (((arr_2 [i_0] [i_0]) % (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((255 ? 180 : var_15));
        var_22 |= (~var_11);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 -= ((((!(arr_6 [i_1]))) ? ((142 % (arr_6 [i_1]))) : (((arr_6 [i_1]) + (arr_6 [i_1])))));
        var_24 += (4095 >> (((arr_6 [i_1]) - (arr_6 [i_1]))));
        var_25 = (((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))) > -252));
        arr_7 [i_1] [i_1] = (max(((((arr_5 [i_1]) && (arr_5 [i_1])))), (max((((arr_5 [i_1]) ? 23362 : var_0)), (arr_5 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] = (((((var_18 - (!129)))) ? (((-(((arr_9 [i_2] [i_2]) ? var_0 : (arr_5 [i_2])))))) : (((arr_9 [0] [i_2 + 1]) ? (arr_9 [i_2] [i_2 - 1]) : (arr_8 [i_2] [i_2 - 1])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_21 [2] [2] [i_4] [i_5] = 114;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_26 = (max((max((min(var_19, var_12)), 1)), (((((max((arr_5 [7]), 142))) ? (var_11 > 142) : (~142))))));
                            var_27 = (arr_8 [i_4 - 3] [i_2 - 1]);
                            var_28 = ((((min(1014227471, 148))) * ((252 ? ((((!(arr_16 [i_2] [i_3] [i_5] [15]))))) : ((var_11 | (arr_24 [i_2] [i_3] [0] [4] [i_6])))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_29 = var_10;
                            var_30 = (((arr_24 [8] [i_3] [i_4 - 1] [i_5] [20]) ? (var_10 * 0) : (arr_13 [i_5])));
                        }
                        var_31 ^= var_18;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            {

                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    arr_37 [i_10] [i_9] [i_8] [i_8] = 71;
                    arr_38 [1] [i_9] [1] [1] = (((max((arr_9 [i_9 + 1] [i_9 + 2]), 7012518709433823391)) % 38));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_32 |= ((694943992821940244 ? (max(((min(var_17, 0))), (((arr_33 [i_9] [i_9]) ? (arr_34 [i_8] [i_9 + 1] [15]) : (arr_6 [i_11]))))) : (arr_34 [i_8] [i_8] [1])));
                    arr_43 [i_8] [i_8] [i_8] [i_8] = (max((--751757638), ((min(((-(arr_41 [18] [i_9] [6] [i_11]))), (arr_33 [i_11] [5]))))));

                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        var_33 = (arr_39 [i_9] [17]);
                        var_34 -= 114;
                    }
                }
                var_35 = (((((var_18 ? (((var_2 / (arr_15 [i_8] [4] [i_9])))) : (((arr_9 [i_8] [i_9 + 2]) + var_18))))) ? (arr_20 [i_8] [i_8] [i_8] [i_9 + 2] [i_9 + 1]) : ((((max(-101, 32767))) ? (var_13 - 3280739824) : var_10))));
                var_36 = var_2;
            }
        }
    }
    var_37 = var_13;
    var_38 = var_9;
    #pragma endscop
}
