/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 &= ((18446744073709551615 ? 8176 : -64));
                    arr_7 [i_2] = (((!(arr_5 [i_2] [i_2] [i_2] [i_2]))));
                    var_15 ^= (var_10 < 2200751455);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_16 = ((1 && ((min(var_6, 8176)))));
                            var_17 = (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (~var_2) : ((((var_3 & (arr_5 [i_4] [i_2] [i_2] [i_0]))) | ((((arr_2 [i_4] [2] [1]) ? (arr_2 [i_0] [i_0] [i_4]) : var_1)))))));
                            var_18 ^= (!-64);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [4] [i_2] [i_0] [i_2] = -32767;
                            var_19 = (((arr_5 [i_0] [i_2] [i_2] [i_5]) ? (arr_4 [i_0] [i_0] [i_2] [i_2]) : 31360));
                        }
                        var_20 = ((!(((var_0 | (arr_6 [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_21 = 10607789288833377629;
                        arr_19 [i_0] [9] [9] [i_2] [i_6] = ((((arr_11 [i_2] [i_1] [i_1]) | (arr_11 [i_2] [i_1] [i_2]))));
                    }
                }
            }
        }
        var_22 = var_10;
        var_23 = (((((arr_11 [12] [0] [12]) ^ (127 && var_10)))) ? 2582610501 : (((((30163 ? 1898587531 : var_8))) ^ var_9)));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_23 [i_7] = (-3132232898475307171 <= 9223370937343148032);
        var_24 = (arr_6 [i_7] [i_7] [i_7]);
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_25 = var_6;
                    var_26 = (max((((arr_27 [i_9 + 1]) ? (arr_27 [i_9 + 1]) : var_1)), (!-30163)));
                }
            }
        }
        var_27 = (arr_29 [i_8] [i_8]);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_28 = (max(var_28, ((max(((((((arr_36 [i_8] [i_8]) & (-127 - 1)))) ? ((var_6 << (-1743422832245062730 + 1743422832245062739))) : 12)), (((arr_38 [i_8] [i_8] [i_8]) ? var_6 : -21235)))))));
                    var_29 &= ((arr_26 [i_12]) || (arr_25 [10]));
                }
            }
        }
        var_30 ^= ((((((((var_1 ? 65518 : var_10))) ? var_4 : var_11))) ? (max((~9223373136366403583), ((((arr_35 [i_8] [i_8] [8]) ? 32212254720 : (arr_31 [i_8] [i_8] [i_8])))))) : ((~(((arr_32 [i_8] [i_8] [i_8] [i_8]) ? -105 : 11937282148031829488))))));
    }
    var_31 = 32767;
    #pragma endscop
}
