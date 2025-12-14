/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 *= ((((max(508050093, 1772519324))) ? (min(var_9, 18446744073709551615)) : (3786917183 - var_0)));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_15 = 5575238400936055169;
                        var_16 = ((var_0 / ((-((508050093 ? 16891974858997871978 : var_4))))));
                        var_17 = 2447937104;
                        var_18 = ((!(((var_10 ? var_5 : 3786917203)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = 251;
                            var_19 = 4;
                            var_20 = var_0;
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_21 = (min(((19 ? 13545275559800351004 : ((var_8 ? 2251799813685247 : 5095818779743639199)))), (((3939377564 ? 1 : -4648333532216150930)))));
                            arr_17 [11] [i_0] [i_1] [i_2] [i_1] [i_0] [i_0] = ((9 ? 3821401875487903136 : 12984547568554947795));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_5] = (-(--1));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_22 = ((var_2 ? 7655072974135524414 : 1));
                            var_23 += 0;
                        }
                    }
                    var_24 = ((7655072974135524402 ? ((~(251 | 12984547568554947771))) : 0));
                    var_25 = (((-987616216 + (508 * var_6))));
                }
            }
        }
        var_26 = ((~((-(min(var_12, var_8))))));
        var_27 = (min(var_27, ((min(1980447837, ((3134089307 ? (~6) : (~131))))))));
    }
    var_28 = var_10;
    var_29 = var_4;
    #pragma endscop
}
