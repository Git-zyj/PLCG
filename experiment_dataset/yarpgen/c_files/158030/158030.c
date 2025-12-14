/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_2 - (((max(5, var_18)))))));
    var_20 = 0;
    var_21 = (min(var_21, ((max((((-24616 ? var_18 : var_0))), ((((var_10 ? 76 : 0)) / var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 |= ((((!((min(233, 0)))))));

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_23 = var_2;
                        var_24 = -var_4;
                        arr_15 [i_0] [8] [8] [i_0] &= -3577587341582304235;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_20 [i_0] [3] [i_2] [i_2] [i_2] = ((0 * ((0 * (arr_18 [i_0] [i_1] [i_2] [i_4])))));
                        var_25 = (min(var_25, (((var_1 >> (((min(((0 ? 65530 : var_2)), (((var_15 + 9223372036854775807) << (((((arr_8 [i_2] [i_2]) + 172)) - 57)))))) + 9091105484435729792)))))));

                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            arr_23 [i_5 + 1] [i_4] [i_0] [i_4] [i_0] [i_1] [i_0] = (max(-24605, (((arr_0 [i_4]) ^ (1 ^ 36)))));
                            var_26 = (((((36514 ? (arr_14 [i_5]) : var_2))) | ((var_17 ? (var_11 ^ 18446744073709551615) : (((max(1, 24603))))))));
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            arr_27 [4] [4] [i_1] [4] [12] [4] [i_0] = -66;
                            var_27 = (min(var_27, (~43)));
                            var_28 *= (min((((1 | 0) | 0)), (arr_12 [i_0] [i_0] [1] [i_6 - 2])));
                            var_29 = (max(var_29, ((-24604 ? -var_9 : 36279))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_30 = 6;
                            arr_30 [i_0] [9] [i_0] [i_0] = 23095;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
