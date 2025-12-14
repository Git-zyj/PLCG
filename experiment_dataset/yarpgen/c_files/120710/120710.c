/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((((var_9 ? (((var_5 ? var_6 : var_17))) : (var_5 - 1)))) ? var_8 : 0));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = var_10;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_22 -= (((arr_0 [i_0 + 2] [i_0 - 4]) ? (((arr_0 [i_0 - 3] [i_0 + 1]) * var_16)) : (arr_0 [i_0 - 2] [i_0 - 4])));
                        var_23 = ((((((arr_3 [i_1] [i_0 - 1]) ? 10700392461352468953 : (arr_3 [i_1] [i_0 - 1])))) ? (arr_3 [i_1] [i_0 - 1]) : ((max(255, var_18)))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_24 = (max(((((max(var_11, 0)) > (arr_0 [i_2] [i_0])))), ((1472382252 ? ((min(var_2, 4294967286))) : ((32767 ? var_10 : 15022769984377463002))))));
                        var_25 = ((!(arr_9 [i_1] [i_1])));
                        arr_13 [i_0] [i_1] [i_2] [i_1] = (~18446744073709551614);
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_26 *= ((((var_12 ? (max((arr_12 [i_5] [10] [i_2] [10] [10] [i_0]), (arr_7 [1] [i_1] [i_1] [4]))) : 951296519279115793)) << (((((((32767 << (var_16 - 1454990580)))) ? 3712346199 : ((3 ? var_5 : var_7)))) + 582621112))));
                        arr_16 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_1] = ((((max((11 && 55769), var_7))) ? (max(((17495447554430435822 ? (arr_9 [i_1] [i_1]) : 59)), ((1968469243 ? var_5 : 6)))) : ((max(((max(var_9, var_12))), (max(var_17, (arr_8 [i_0] [i_1] [i_1] [i_1]))))))));
                        var_27 = (min(var_27, (((arr_4 [i_0 + 2] [i_2]) ? ((var_2 ? (arr_4 [i_0 + 1] [11]) : (arr_1 [i_0 - 1]))) : ((max((arr_4 [i_1] [i_2]), var_0)))))));
                        var_28 *= 11583;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_29 = (min(var_29, ((max((arr_0 [i_0 - 4] [i_0 - 3]), (max(var_12, var_5)))))));
                                arr_22 [i_1] [10] [i_2] [i_6] [i_7] = (arr_6 [i_0] [i_1]);
                                var_30 = (min(var_30, ((((max(var_1, (((arr_7 [10] [i_1] [i_2] [10]) ? var_2 : var_14)))) > (max((var_17 && var_12), (((var_2 + 9223372036854775807) >> 1)))))))));
                                var_31 -= (max((var_17 - var_18), ((32767 ? (arr_1 [i_0 - 4]) : var_1))));
                                var_32 = var_2;
                            }
                        }
                    }
                }
            }
        }
        var_33 = ((((((((var_0 <= (arr_11 [i_0 - 2] [i_0 - 3] [11] [i_0 + 1]))))) != (arr_4 [i_0 - 1] [i_0 - 1]))) ? ((max(5, 32767))) : (~var_14)));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_34 = var_0;
        arr_25 [i_8] = (((((arr_23 [i_8] [i_8]) ? var_12 : (arr_24 [i_8]))) << ((((var_17 ? (arr_23 [i_8] [i_8]) : (arr_24 [i_8]))) - 153272997))));
        arr_26 [i_8] &= (max(((1 ? (951296519279115770 / var_3) : var_17)), ((var_4 ? (arr_23 [i_8] [i_8]) : 12998075882568746869))));
        var_35 = max(7548935113699621154, ((min(var_11, (~var_0)))));
    }
    #pragma endscop
}
