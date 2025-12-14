/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 ^= ((~(var_4 == var_2)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = ((((max((arr_1 [i_0]), var_0))) ? ((((~var_1) && var_8))) : ((((arr_0 [i_0] [i_0]) && (((-722772600 ? (arr_2 [6]) : var_3))))))));
        var_17 -= (~255);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = var_3;
        arr_6 [i_1 + 1] = ((!(arr_2 [i_1 - 2])));
        var_18 = ((~((var_5 ? 18446744073709551615 : (arr_4 [i_1 - 1])))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_19 = (max(var_19, (((((((~3355361051) ? var_9 : (((arr_4 [i_2]) | var_3))))) ? (((((max(722772618, 21)) <= (~2961325600963843006))))) : ((232 ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]))))))));
            arr_11 [i_1 + 2] [i_1 + 2] = ((99 ? 0 : (3332843478 - 7)));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_16 [i_1] &= ((((-((max((arr_9 [i_1] [i_1]), (arr_15 [i_1 + 1])))))) | var_1));
            arr_17 [i_1 + 1] = ((var_11 ? -1 : var_6));
            var_20 = (min(var_20, ((max(-1, (((arr_13 [i_1 - 2]) + (arr_9 [i_1 + 1] [i_3]))))))));
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_21 -= (min((((~var_6) ? var_4 : (1 - 1607947576132834242))), var_6));
            arr_21 [i_1] = 10909015180872206599;
            arr_22 [i_1] [i_4 - 1] = ((-((7537728892837345005 ? 0 : 1))));
            arr_23 [12] [i_4 + 1] = (max(var_13, var_11));
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_22 = 8059327230857709508;
        arr_27 [i_5] = var_13;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_23 &= ((-255 <= ((min((!5), 12710)))));
                arr_33 [i_6] [i_6] = ((arr_28 [i_6] [i_6]) ? var_4 : (arr_31 [i_6]));
            }
        }
    }
    var_24 = (((27214 + var_8) ? var_3 : var_10));
    #pragma endscop
}
