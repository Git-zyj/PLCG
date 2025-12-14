/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [4] = (((min(var_6, (arr_3 [3] [i_0 - 1]))) <= ((((arr_0 [i_0]) + 0)))));
        arr_5 [i_0] = 0;
        arr_6 [i_0 - 1] [i_0] = 18446744073709551615;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_11 [i_0 - 1] [1] [i_0 - 1] = ((((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]) == var_3)) ? (min((max((arr_10 [i_0]), (arr_1 [i_1]))), 1)) : 126824360);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_17 [i_3] [i_1] [i_2] [i_1] = -1746581564;
                        arr_18 [i_3] [17] [i_3] = ((~(arr_1 [i_0 - 1])));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_21 [15] [i_3] = (((arr_2 [i_0 + 1]) ? var_7 : (arr_2 [i_0 - 2])));
                            var_16 *= (((arr_14 [20] [i_1] [i_1] [i_3 + 1] [19]) ? (((((-118 ? var_4 : var_1))) ? 9567085138592760618 : ((max(-5128483862971892150, (arr_3 [i_1] [i_4])))))) : (((arr_7 [i_0 + 1] [i_0 + 1] [15]) + (((var_2 ? var_6 : var_12)))))));
                            var_17 = 11;
                            var_18 = (min((min(15374552608052037056, (-9223372036854775807 - 1))), (var_15 < var_5)));
                        }
                        var_19 = (min((min((arr_10 [i_0]), (arr_10 [i_0]))), var_14));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_24 [i_5] = (arr_23 [i_0] [i_0] [i_5]);
            arr_25 [i_0] [i_0] = 9567085138592760618;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    {
                        var_20 = var_2;

                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            arr_32 [i_0] [i_5] [i_6] [i_8] [i_8] = ((!(arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                            arr_33 [i_0] [i_0 - 2] [10] [17] [i_0] [i_0] [i_8] = (((min(17776607968243719688, 18446744073709551596)) != ((((max(1, var_10))) ? ((min(1, -3170864712283589402))) : var_3))));
                        }
                        for (int i_9 = 4; i_9 < 19;i_9 += 1)
                        {
                            var_21 = var_4;
                            var_22 = (min(var_22, ((((arr_29 [i_7] [i_9 - 1] [i_7] [i_9 - 1] [i_9]) ^ ((max(var_6, (arr_2 [i_9 + 2])))))))));
                        }
                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            var_23 = (((1 == (arr_29 [i_5] [i_5] [i_10 - 3] [i_10] [i_10 - 3]))));
                            arr_38 [i_0] [i_0] [i_10] [i_7] [i_10] = (min(var_1, (arr_15 [i_7] [i_7 + 2] [i_10 + 2] [i_7] [i_10] [i_10 + 2])));
                            arr_39 [i_0] [i_10] [i_6] [i_7] [i_10] = var_2;
                            var_24 = (max(var_24, 8879658935116790997));
                            var_25 = var_5;
                        }
                        var_26 = (((min((arr_36 [13] [i_7] [13] [0] [i_7 - 1]), 8787503087616)) & (((((var_0 ? var_9 : (arr_34 [i_7] [i_0] [i_5] [i_0]))) ^ var_3)))));
                    }
                }
            }
            var_27 = var_8;
            arr_40 [i_5] = (arr_34 [i_5] [i_5] [i_0] [i_0]);
        }
        for (int i_11 = 3; i_11 < 17;i_11 += 1)
        {
            arr_45 [i_11] [i_11] [i_0] = (arr_19 [0] [i_0] [i_11 - 3] [i_0] [i_0 + 1]);
            var_28 = ((((~(arr_44 [i_0 - 2] [i_0]))) / (arr_44 [i_0 - 1] [i_0])));
        }
        var_29 = ((((arr_10 [i_0 - 2]) - 115)));
    }
    var_30 = (var_13 ? var_11 : (((((var_9 ? var_4 : 501015053))) ? (((var_11 ? var_1 : var_3))) : ((13383315585151292536 ? var_4 : var_14)))));
    var_31 += ((min((~20), ((max(2731963224681256088, 0))))));
    var_32 = ((min(((var_1 ? var_1 : 106)), var_6)));
    var_33 = (1072972255 ? var_12 : var_14);
    #pragma endscop
}
