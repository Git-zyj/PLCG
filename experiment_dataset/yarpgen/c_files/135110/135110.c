/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((76 > -76) <= var_3);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [10] = (((arr_2 [i_2] [i_0]) >= (arr_2 [i_0] [i_0])));
                    arr_8 [i_0] = var_17;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (((((var_16 ? 229 : 134))) ? 1 : ((~(arr_3 [i_0] [i_2] [i_3])))));
                        var_21 = ((10279479478118929781 ? 17852663809497165537 : -1));
                        var_22 = (max(var_22, ((((((~(arr_3 [i_0] [i_2] [i_0])))) ? 128 : var_9)))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_23 = (((arr_1 [i_0] [i_1 - 2]) == (arr_9 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 + 1])));
                        var_24 = (((arr_6 [i_1] [i_1 + 2] [i_1] [i_0]) | var_13));
                        var_25 = ((-74 ? ((67 ? var_9 : var_15)) : var_7));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_26 ^= ((1 ? 30143 : -62));
                        var_27 *= (229 == -74);
                        var_28 = (~95);
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_29 = 2199022731264;
                        var_30 = -80;
                        arr_19 [i_0] [i_6] = 5061846118500986444;
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_22 [i_0] = 106;
                        var_31 = (((((1 >> (var_3 + 92)))) ? (124 <= var_11) : -67));
                    }
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {

                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            arr_28 [i_0] = var_1;
                            var_32 = -76;
                            arr_29 [i_9] [i_0] [i_0] [i_0] [i_0] = (1 % -1526869722);
                            var_33 = ((((((arr_10 [15] [i_0] [i_1] [i_0]) | var_2))) ? ((1 ? 2058414285989130424 : var_16)) : (arr_6 [i_9 - 2] [i_1] [i_1] [i_0])));
                        }
                        var_34 = (max(var_34, (((((((arr_25 [i_2]) ? (arr_23 [22] [i_0] [i_0] [i_0] [3] [i_0]) : var_16))) ? (((var_2 ? (arr_1 [i_2] [i_1]) : var_13))) : (var_17 - var_16))))));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_35 = 252;
                        var_36 = (((0 ? var_14 : -117)));
                    }
                }
            }
        }
        var_37 = (var_15 - -15900);
        var_38 = (((-60 ? (arr_0 [i_0]) : var_0)));
    }
    var_39 = -38;
    #pragma endscop
}
