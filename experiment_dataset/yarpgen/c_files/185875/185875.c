/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((9057 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = ((~(~var_12)));
                        arr_11 [i_3] [i_0] = (((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? 1108156416 : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                        var_14 = (((1839010159 ^ var_2) ? ((((arr_5 [i_2] [i_1] [i_1]) | (arr_8 [i_1] [i_2])))) : ((var_3 ? (arr_9 [i_0] [i_1] [i_1] [i_3]) : var_8))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = (0 - 255);
                    }
                }
            }
        }
        arr_13 [i_0] = ((var_12 ? ((2481 ? var_8 : -12448)) : (((-603203236 ? (arr_6 [i_0]) : var_7)))));
        var_15 += (~-603203236);
        var_16 = (~var_1);
    }
    var_17 = ((185 ? ((-603203236 - (max(var_4, -773890827)))) : (max(((1 ? 1 : 1)), 44))));

    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_18 = ((var_8 + (((~(arr_14 [i_4 - 1]))))));
        var_19 = ((max((arr_15 [i_4 + 1]), (arr_14 [i_4 + 1]))));
        var_20 ^= 1;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (((arr_17 [i_5]) ? (773890827 + 1) : (arr_17 [i_5])));
        arr_19 [i_5] = 14966;

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_21 = ((~(arr_21 [i_5])));
            var_22 = (min(var_22, var_4));
        }
        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            var_23 = (-123 ? 2108130275 : 0);
            arr_27 [i_5] |= ((((((arr_24 [i_5]) * var_3))) ? var_0 : var_4));
        }
        arr_28 [i_5] = (arr_16 [i_5]);
    }
    #pragma endscop
}
