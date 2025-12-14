/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        var_13 |= ((((((min(1546472426258652476, (arr_2 [i_0] [i_0]))) + 9223372036854775807)) >> (((~var_11) - 13358282476058493740)))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_14 = (((min(var_10, 44599))));
        arr_6 [i_1] [i_1] = (((arr_1 [i_1] [i_1]) ? (min((arr_5 [i_1]), (20949 | var_3))) : ((((((max((arr_4 [i_1] [i_1]), 0))) && ((min(var_4, var_3)))))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_15 = (max(20949, 6342));
            arr_9 [i_1] = 20949;
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_16 = (arr_17 [i_4] [i_4] [i_4] [i_3] [i_4] [i_4]);
                        var_17 = (max((((!(((arr_8 [i_1] [i_4]) >= 290470084))))), -2034596419));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_18 += max((min((min(940880206073537429, var_2)), ((((arr_20 [12] [12]) & 5271137339492697640))))), ((((max(25, var_5))) ? 6193317394658752045 : 290470075)));
                            var_19 = (arr_18 [i_6] [i_4] [i_4] [i_1]);
                        }
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_7] [i_5] [i_7] [i_4] [i_3] = ((-((~(arr_8 [i_4] [i_4])))));
                            var_20 = (min(var_20, ((((((max(var_12, var_11)) - (((var_7 & (arr_1 [i_3] [i_5])))))) > var_3)))));
                        }
                    }
                }
            }
            var_21 = var_5;
            var_22 = 328;
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_32 [i_8] = (((-8 ? (((arr_29 [i_3] [i_8] [i_8] [i_10]) ? 44586 : 91769893)) : ((((!(arr_4 [i_8] [i_8]))))))));
                            arr_33 [i_10] [i_9 + 2] [i_8] [i_8] [i_3] [i_1] = ((~(min((((arr_11 [i_1] [i_9]) ? var_9 : (arr_8 [i_3] [i_8]))), 940880206073537416))));
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_23 = ((((((-2034596418 ? -977097419336581764 : -4844)) & (((5387355229256908815 ? (arr_1 [i_11] [i_11]) : var_4)))))) ? (min(22585, -3121405181626600807)) : ((((max(25724, 2305841909702066176))) ? (min(var_12, var_7)) : (arr_35 [i_11] [i_11]))));
        var_24 = (((!var_7) ? (((8589934584 != (min((-32767 - 1), (arr_35 [i_11] [i_11])))))) : var_7));
    }
    var_25 += var_12;

    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        arr_40 [i_12] = ((((65535 - -290470084) / ((var_9 / (arr_37 [i_12] [i_12]))))));
        var_26 = (((((arr_11 [i_12] [i_12]) ? (arr_11 [i_12] [i_12]) : 290470085)) & ((max(-290470087, 3347134091)))));
        var_27 = 10965783689777640366;
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        arr_44 [i_13] [i_13] = ((((arr_12 [i_13] [i_13] [i_13]) ? var_1 : (arr_12 [i_13] [i_13] [i_13]))));
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 7;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    {
                        var_28 |= var_12;
                        var_29 = (((((arr_52 [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 4]) & 562945658454016)) & (arr_52 [i_13] [i_14 + 4] [i_14 + 3] [i_14 - 1])));
                    }
                }
            }
        }
        var_30 ^= ((+(max((arr_45 [8]), ((max(44599, var_10)))))));
    }
    #pragma endscop
}
