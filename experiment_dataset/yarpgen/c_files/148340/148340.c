/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (!38);
    var_17 &= ((!((min(53689, var_8)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_18 = (min(var_18, var_10));
        var_19 ^= (((((-38 ? 21 : 65508))) ? (65510 / 780045113) : ((max(var_5, 1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] = (48918 && 56602);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_20 &= (((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_6 [i_2 - 1] [i_2] [i_2])));
                    var_21 = (min(var_21, ((((arr_5 [i_2] [i_2 - 2]) > (arr_5 [i_2] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_22 = ((!(arr_3 [i_4 - 1])));
                                var_23 = arr_11 [i_1] [1] [i_3] [i_4];
                                arr_16 [i_1] [i_1] [i_1] [i_4 + 2] [i_5] [i_5] [i_1] = (((((0 ? var_9 : (arr_0 [i_4] [i_5])))) ? ((((1 || (arr_1 [i_3] [i_1]))))) : (arr_14 [i_2 + 1] [i_2] [i_2] [i_2] [i_3 + 1])));
                            }
                        }
                    }
                    var_24 &= (((arr_3 [i_2 + 1]) > (arr_11 [i_3 + 2] [i_3 + 2] [i_2 + 3] [i_2 + 3])));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_25 &= (!(38 > -0));
        var_26 -= (max(((32833652 ? (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]) : (!40))), (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_23 [i_7] = ((-(25320 - 2147483647)));
        var_27 += (((((((var_0 ? (arr_20 [i_7]) : 1958256031)) + 2336711265))) ? (min(((((arr_21 [10]) ? (arr_22 [i_7] [i_7]) : var_0))), ((2147483647 ? 6279473174770709720 : (arr_21 [i_7]))))) : ((((((0 ? 21 : 650))) ? (arr_21 [i_7]) : ((21 ? 11846 : var_10)))))));
        var_28 -= ((((min(-14, var_0)))) ? (((arr_21 [i_7]) ? (~0) : (arr_20 [i_7]))) : ((((arr_20 [i_7]) > (min(112, var_8))))));
    }
    var_29 *= ((var_3 ? ((0 ? (2336711265 * var_15) : (((min(24, var_4)))))) : (((15920116140506950695 ? (11847 / var_15) : var_14)))));
    #pragma endscop
}
