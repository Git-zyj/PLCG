/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_3] [i_2] [i_1] = (((((~var_12) >= ((12674373537553310906 << (1711462433 - 1711462372))))) || (((((((arr_0 [i_1] [i_3]) | var_2))) ? (!1) : -var_1)))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_14 = (((((~1711462450) | (((var_0 ? var_12 : 181)))))) ? 24665 : (((arr_2 [i_0]) ? (arr_2 [i_3]) : var_1)));
                                var_15 = ((((1 ? 1711462444 : var_0)) / -var_12));
                                var_16 |= ((((((((9509 * (arr_7 [i_0] [i_0] [i_0] [i_3]))) == (!1711462433))))) - ((var_11 ? (((var_11 ? var_5 : var_6))) : (arr_7 [i_0] [i_1] [i_1 - 1] [i_3])))));
                            }
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((((((((arr_2 [i_3]) ? -771934120 : var_0))) | ((24665 * (arr_1 [i_0]))))) >> ((((-(1472074365 * 51))) - 2233618675))));
                        }
                    }
                }
                var_17 |= (((((((arr_12 [i_0] [i_1] [i_1]) % var_3)))) ? ((4888275337348986913 ? 1 : (arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1 + 1]))) : ((var_5 >> (((arr_13 [i_1] [i_1 + 4]) + 48))))));
                var_18 += ((+(((~1) * ((((arr_2 [1]) <= -1297)))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_19 *= ((1711462450 ? 171397135618111075 : (arr_4 [i_0] [i_1] [i_1 + 2])));
                    var_20 = (!24684);
                    var_21 ^= (!177);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_21 [i_0] [0] [i_0] |= ((~(var_6 != 21024)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_22 = ((-1 ? (((((arr_5 [i_0] [i_0]) + 2147483647)) >> (var_0 - 8805))) : ((var_0 >> (var_8 + 137808118)))));
                                var_23 ^= ((122 >> (52459 - 52437)));
                                var_24 = ((((~(var_7 | -9096))) + ((((1711462444 != 1) == (~191))))));
                            }
                        }
                    }
                    var_25 = (max(var_25, 1));
                }
            }
        }
    }
    #pragma endscop
}
