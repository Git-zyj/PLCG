/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 |= ((27373 ? (((((-85710714836916704 ? var_7 : (arr_1 [i_0]))) - (arr_3 [0])))) : (max((((arr_1 [i_0]) ? var_5 : 1)), 78))));
        arr_4 [i_0] = (((arr_3 [i_0]) ? ((-(arr_0 [i_0] [i_0]))) : ((((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] = var_2;
        var_11 = (((((((max(2702922621, 2372128556))) & 6739993029893857297))) ? (min(var_5, 91)) : (arr_3 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_12 = (((((-(arr_16 [i_2 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])))) ? (((var_6 ? 2116556835 : (arr_16 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3])))) : (max((arr_16 [i_2 + 1] [i_3 - 1] [i_3 + 1] [i_4]), 355712177802874671))));
                        var_13 = ((var_3 <= ((7223235700050884226 << (arr_14 [i_3] [i_2 + 2] [i_3] [i_3] [i_4])))));
                    }
                }
            }
        }
        var_14 = (arr_2 [i_1]);
    }
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_16 = ((8292924765638203043 + ((1824631277477465421 ? 1 : 6739993029893857297))));
                    var_17 = (((arr_22 [i_5] [i_5] [i_5] [i_5]) + (((arr_20 [i_5] [i_7]) ? 1 : var_4))));
                    var_18 = (max(var_18, ((((((arr_19 [i_5] [15]) ? var_8 : 2339485093)) % ((((arr_24 [10]) ? (-9223372036854775807 - 1) : (arr_20 [i_5] [i_6 + 1])))))))));
                    var_19 = -92;
                }
                var_20 *= 1040187392;
            }
        }
    }
    var_21 = (((18446744073709551613 | var_6) & ((((var_7 == 162) ? -8880488105069985536 : 25834)))));
    #pragma endscop
}
