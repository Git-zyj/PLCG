/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((max((!var_12), 159373842357144108)) <= (var_11 <= var_7))))));
    var_21 = (((((max(var_16, 18287370231352407497)))) && (((var_19 ? (max(var_5, var_6)) : (var_16 - 18287370231352407492))))));
    var_22 *= 159373842357144116;
    var_23 = (max(var_23, 159373842357144105));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_0] [i_3 - 1] [22] [i_1] [i_0] = (((arr_1 [i_0]) > var_6));
                            arr_15 [i_0 - 1] [i_3] [i_3] [i_2 - 2] [i_3] [i_2] [i_3] &= (((arr_3 [i_0 + 3] [i_4] [i_1 - 1]) >> (var_0 - 15276818722418547823)));
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_24 = (min(var_24, (((((arr_9 [i_0 + 3] [i_0] [i_0] [i_0]) ? (arr_2 [i_3] [i_1 - 1] [i_2]) : -104))))));
                            var_25 = (max(var_25, (((~159373842357144104) << (18287370231352407521 - 18287370231352407472)))));
                            var_26 *= (var_4 / 93);
                            var_27 = (2239061733 != 15735587689105280574);
                        }

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            var_28 += 2711156384604271032;
                            var_29 = 2239061734;
                        }

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_30 = (min(var_30, 3546217005));
                            var_31 = (arr_0 [i_0 - 1] [i_0 + 3]);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_27 [i_8] [i_0] [i_0] [i_0] [i_0] = (((~var_9) - 2711156384604271015));
                            var_32 -= (((13 + (arr_21 [i_0 + 3] [i_1] [i_2 - 2] [i_3] [i_8] [i_1 - 1] [i_3]))) ^ (arr_23 [i_0] [i_0 - 1] [i_3] [i_0] [i_0 - 1] [12] [i_0 + 2]));
                        }
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            var_33 = (~24941);
                            var_34 ^= ((((var_1 & (arr_22 [i_9]))) + var_4));
                            arr_30 [i_0] [14] [i_2] [i_0] [i_2] [i_9 - 1] = 6843663594873516826;
                        }
                    }
                }
            }
        }
        var_35 = (max(var_35, ((((arr_25 [12] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 2]) != var_18)))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_36 = (((2309 != var_12) % 159373842357144090));
        var_37 |= (((5817 << (var_6 - 39921))));
    }
    #pragma endscop
}
