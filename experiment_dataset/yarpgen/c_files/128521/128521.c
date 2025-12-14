/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(2023393421, ((max(var_9, -98)))))) ? ((((var_6 == (arr_1 [i_0]))) ? (min(18446744073709551615, var_7)) : ((min(2147483647, 2147483647))))) : ((max(((min((arr_1 [i_0]), var_7))), (var_9 | 1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_3] = (2147483647 == 63790);
                        arr_14 [i_3] [i_1] [i_3] [i_0] = (((((((min(var_8, (arr_8 [i_0])))) - ((3 ? var_0 : 1745))))) ? ((((((119 ? -1585441464 : var_4))) && (((arr_3 [i_0] [i_1]) || var_3))))) : 1));
                    }
                }
            }
        }
        var_10 = ((~((((max((arr_0 [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (~2147483647) : ((55442 ? var_3 : var_1))))));
    }
    var_11 *= ((min(124, 797782211)));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((((((((7 < (arr_21 [i_4] [i_5] [i_7 - 1] [i_4]))))) <= (min(131, (arr_27 [i_4] [12] [i_4] [i_7] [16]))))) ? (min((((arr_27 [i_4] [16] [16] [i_7] [i_8]) - (arr_15 [i_6]))), 1745)) : ((((((var_8 && (arr_20 [i_8]))) && ((min(var_2, 0))))))))))));
                                arr_28 [i_4] [i_5] [i_6] [i_6] [i_6] [i_6] = (min(((((-4 & 18446744073709551615) ? (var_9 << 1) : (min(1, var_4))))), ((-var_5 * (min(18446744073709551615, (arr_18 [i_7])))))));
                                var_13 = (max(((((((0 ? -95 : (arr_26 [i_7] [i_7] [i_6] [i_5])))) ? (((arr_20 [i_5]) * var_4)) : (((((arr_18 [i_4]) > 1))))))), ((((min(var_6, 32764))) ? (((((arr_16 [i_7]) > 95)))) : (~72055395014672384)))));
                                arr_29 [i_4] [i_5] [i_6] [i_5] [i_6] [2] = (min((min((min((-2147483647 - 1), 95)), 0)), ((((((max(var_1, 65535)))) != (min((arr_24 [i_6] [i_5] [i_5]), (arr_27 [i_6] [i_6] [i_6] [i_6] [i_4]))))))));
                                arr_30 [18] [i_6] [i_6] [i_6] [i_6] = (min((((((min(62386, -2147483630))) >= (min(var_3, var_5))))), (min(var_0, ((-28702 ? -120 : 2985113427))))));
                            }
                        }
                    }
                    arr_31 [i_6] = max(((((max(79, 3150))) << (((1 ^ var_1) - 23164)))), ((var_2 | ((max(-1, 54243))))));
                }
            }
        }
    }
    var_14 = (((((((min(1, var_7))) > ((min(0, var_6)))))) ^ (var_1 < var_4)));
    var_15 = ((((max((~var_6), ((var_0 ? 3149 : var_5))))) & (max(-2147483642, 0))));
    #pragma endscop
}
