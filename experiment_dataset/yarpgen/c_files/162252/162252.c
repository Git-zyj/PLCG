/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(-var_8 / var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (((max(((min(var_6, var_7))), (arr_0 [i_0] [i_1]))) + 1));
                    arr_9 [i_1] [i_1] [i_2 + 3] = var_8;

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_3] = (((!18446744073709551613) ? ((((min((arr_7 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_2] [i_0]))) ^ var_6))) : (min(((-9710 ? -1014233576301293323 : 33022)), var_10))));
                        arr_13 [i_0] [i_1] [i_1] = (min((max((arr_10 [i_3 - 1] [i_1] [i_2] [i_1]), (arr_10 [i_3 - 1] [i_3] [i_1] [i_1]))), (((arr_10 [i_3 - 1] [i_3] [i_1] [i_1]) ? (arr_10 [i_3 - 1] [i_2] [i_1] [i_0]) : var_9))));
                        var_15 |= ((arr_3 [i_3]) ? ((((min(var_3, var_3))) | (var_4 & 1))) : 7053523453691088436);
                    }
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        var_16 = var_8;
                        var_17 = 0;
                        var_18 *= ((min((arr_15 [i_4 - 1] [i_0] [i_0] [i_0]), (~var_2))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_5] [i_1] [i_1] [i_5] = (65024 + 0);
                            arr_20 [i_0] [i_1] = ((min((~9724), (250 + 255))));
                            var_19 ^= (min((((arr_7 [i_4 + 3] [i_4 + 1] [i_4 + 1]) <= (var_11 < 0))), ((var_4 < ((min(var_10, (arr_4 [i_1] [i_4] [i_4]))))))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_20 |= ((max(((min(63, (arr_11 [i_1] [i_0])))), (((arr_7 [i_1] [i_1] [i_2]) ? 25231 : (arr_18 [i_1] [i_1] [i_1] [i_1] [i_0]))))));
                        var_21 ^= ((((max((min((arr_21 [i_6 - 1] [i_0] [i_0] [i_0]), var_12)), (arr_11 [i_0] [i_0])))) ? ((((max(4337, var_2)) > (arr_5 [i_2 - 3])))) : ((min((arr_15 [i_1] [i_1] [i_0] [i_6 + 1]), (arr_15 [i_1] [i_2] [i_0] [i_6 + 1]))))));
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] = (~-588357174581478484);
                        var_22 = ((!(arr_6 [i_2 + 2] [i_2 - 3] [i_2])));
                    }

                    for (int i_7 = 2; i_7 < 7;i_7 += 1)
                    {
                        var_23 = ((-454111558 ? 40304 : (max((16384 / -55), 4321))));
                        var_24 = (min((arr_16 [i_2 - 2] [i_2] [i_2] [i_2 - 3] [i_2] [i_2 - 1] [i_2]), (min((arr_0 [i_0] [i_2 + 2]), var_8))));
                        var_25 = var_5;
                        var_26 = (((~((max(-49, 127))))));
                    }
                }
            }
        }
    }
    var_27 = var_13;
    var_28 = var_1;
    #pragma endscop
}
