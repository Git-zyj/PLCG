/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((arr_1 [i_0]) <= (arr_0 [16]))));
        var_14 = (min(var_14, ((min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((((17800 ? (arr_0 [i_0]) : 1))) ? ((920178353691927779 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : ((min((arr_0 [i_0]), -11045))))))))));
        arr_3 [i_0] = (min(var_8, var_7));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] = ((var_5 ? var_11 : (arr_8 [i_1] [i_2] [i_3])));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_2] = (((-11038 ? 11025 : 920178353691927764)));
                        arr_16 [i_1] [13] [i_2] = (((11042 ? var_2 : (arr_0 [i_1]))));
                        var_15 = ((-11068 == (((var_13 != (arr_11 [i_4] [i_3] [i_1] [i_1]))))));
                    }
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_2] = 11031;
                        arr_20 [i_2] [i_2] = (((((var_13 ? var_12 : (arr_1 [10])))) ? (((var_7 ? (arr_1 [i_2]) : -11031))) : 4294967274));
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_16 = ((43 ? (arr_17 [i_1] [i_2] [i_3] [i_6] [i_6]) : var_7));
                        var_17 += (!17526565720017623861);
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] = (var_3 - -32759);
                        var_18 = (((arr_5 [i_2]) * 54));
                        var_19 = (((2338901687178672709 + 14554899897646217473) ? (((arr_28 [i_1] [i_2] [i_2] [i_3]) ? var_7 : 65535)) : ((((!(arr_22 [i_2])))))));
                    }
                    var_20 = (((arr_11 [i_1] [i_1] [i_2] [i_1]) > var_13));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_21 = ((var_10 ? (((arr_10 [i_8] [i_3] [8]) + (arr_27 [i_1] [i_2]))) : 967));
                                var_22 -= ((((6129601468610192514 ? var_8 : 920178353691927769)) / (arr_35 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1])));
                                arr_36 [i_1] [i_2] = 65535;
                                arr_37 [i_1] [i_2] [i_2] [1] [i_1] = ((var_11 ? (!9409) : var_8));
                            }
                        }
                    }
                }
            }
        }
        var_23 ^= 24526;
        var_24 = (min(var_24, (((!(arr_8 [i_1] [i_1] [i_1]))))));
        var_25 = (!(((var_13 ? var_6 : (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [4])))));
        var_26 = (arr_28 [i_1] [i_1] [i_1] [i_1]);
    }
    var_27 = 920178353691927768;
    var_28 = (min(((min(((41059 ? var_0 : 11036)), (56743 || -24533)))), var_11));
    var_29 = (min(var_29, (((var_6 | ((17526565720017623847 ? ((min(var_4, var_4))) : var_3)))))));
    var_30 = (((((((min(-32765, 56743))) ? (((max(22556, 32765)))) : ((var_13 ? 4294967293 : var_0))))) ? var_2 : (((min(var_12, 65513))))));
    #pragma endscop
}
