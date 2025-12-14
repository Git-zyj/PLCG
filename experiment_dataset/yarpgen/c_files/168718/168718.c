/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(18446744073709551600, 15));
    var_16 = var_1;
    var_17 |= (((var_4 == -18446744073709551588) ? var_8 : (max(-var_6, (max(var_3, var_4))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (((max(-1449743715324266639, (arr_1 [i_0]))) | (((((arr_0 [i_0] [i_0]) > (arr_2 [i_0])))))));
        arr_3 [15] = ((((var_9 ? (arr_1 [i_0]) : (arr_1 [i_0]))) << ((((var_5 << (var_5 - 42651))) - 21841891))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_19 -= (arr_12 [i_1 - 2] [i_3 + 1] [i_3]);
                        arr_16 [17] [i_1] [0] [i_3 - 3] [i_4] = (((min(var_5, var_11)) - var_10));
                        var_20 ^= arr_15 [i_1] [i_1] [i_1] [i_1] [i_1];
                    }
                }
            }
        }
        arr_17 [22] [21] = (min((((var_0 - 9349510651306950992) ? 9223372036854775807 : -var_13)), (((37 && ((!(arr_0 [i_1 + 1] [i_1 + 1]))))))));
    }
    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {
        arr_20 [i_5] = (504364553 & 1);
        var_21 = ((((((arr_5 [i_5 - 2] [i_5]) ? (arr_5 [i_5] [i_5 + 1]) : var_7))) ? (min(var_6, ((52030 ? 9097233422402600624 : var_5)))) : ((((arr_8 [i_5 + 1]) + (arr_8 [i_5 + 1]))))));
        var_22 = (max(var_22, (((((var_8 / var_3) + (arr_13 [i_5] [i_5] [i_5 + 2] [i_5])))))));
        var_23 |= var_11;
    }

    for (int i_6 = 2; i_6 < 22;i_6 += 1)
    {
        var_24 = (arr_7 [i_6] [i_6]);
        var_25 = var_13;
        var_26 = arr_15 [i_6] [i_6 + 1] [i_6] [i_6] [13];
    }
    #pragma endscop
}
