/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((((430397036 ? var_9 : (arr_1 [i_1])))) ? (arr_0 [i_1]) : (arr_4 [i_0] [i_0] [15])))) ? var_1 : (((arr_1 [i_1]) ? (~-835003477470342609) : (arr_4 [i_0] [i_0] [i_0])))));
                var_10 = (arr_3 [13] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                {
                    arr_16 [i_2 + 1] [i_3] [i_2] [i_2] = ((((((min(var_0, (arr_11 [i_2] [1])))) ? ((var_5 ? -6083896006365939038 : var_8)) : (arr_3 [1] [i_3]))) < (!var_3)));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 6;i_5 += 1)
                    {
                        arr_21 [i_2] [i_2] = ((5 ? 2319144351 : 6083896006365939038));
                        arr_22 [i_2] [i_2] [5] [i_5] [i_4] = ((((!(arr_20 [i_2] [8] [i_4 + 2] [i_2] [i_5])))));
                        var_11 = var_9;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_12 = 12605198583190286461;
                        var_13 = ((var_9 ? var_3 : (arr_14 [i_4 - 2] [i_3 + 2] [i_2] [9])));
                        var_14 *= (((((var_0 ? var_8 : (arr_18 [i_2 - 1] [i_2 - 1] [i_2 - 1] [4])))) ? var_3 : ((((arr_18 [1] [i_3 - 2] [i_6] [1]) != var_7)))));
                        arr_25 [i_2] [5] [1] [i_3] [i_4] [i_6] = (arr_15 [i_2 + 1] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_15 ^= ((!(((-835003477470342609 ? var_8 : var_1)))));
                        arr_28 [i_2] = ((245 ? (arr_15 [i_4 + 2] [i_2]) : (arr_10 [i_3 + 3] [i_2])));
                        var_16 -= (((6489768417037330560 && -9223372036854775807) < (arr_18 [i_4 - 1] [i_4 - 1] [i_3 - 2] [4])));
                    }
                }
            }
        }
    }
    var_17 |= ((var_0 - ((-4714676556507124347 ? ((var_2 ? var_0 : var_6)) : 614712353))));
    var_18 = (max(var_18, (((((((max(var_5, var_7))) ? var_1 : var_6))) ? var_0 : ((((var_4 > ((-2064245250 ? 6545767336980797206 : 178205986678698411))))))))));
    var_19 |= (~var_7);
    #pragma endscop
}
