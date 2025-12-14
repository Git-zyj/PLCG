/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = 1;
        arr_2 [13] [i_0] = (((((arr_1 [1] [i_0]) ? (arr_1 [i_0] [i_0]) : ((-4028061307156363565 ? 18446744073709551615 : 875740759)))) >> (233 - 186)));
        var_16 -= (((((max(-875740781, 25315)) ^ 1)) & (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_17 = (((13780199138545632867 ^ (arr_1 [i_1 - 4] [i_1 - 4]))));
        var_18 += var_4;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 += ((+(((arr_6 [i_1 - 4]) ? var_5 : (arr_1 [i_1 - 4] [i_1 - 4])))));
                        var_20 = (((((((min(var_10, 1155955227))) ? (((~(arr_6 [i_1])))) : (((arr_7 [i_2] [i_1]) ^ var_7))))) ? (((var_10 ^ (!17851221790459249302)))) : ((~(arr_3 [i_2 - 1])))));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = (((var_6 ^ -16231) ? ((~(arr_7 [i_1] [10]))) : ((((!((max(67, 248)))))))));
                    }
                }
            }
        }
        var_21 = (min(var_21, ((!((((var_2 + 2147483647) >> (((arr_11 [i_1 - 4] [i_1] [i_1 + 1]) + 21640)))))))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_22 = (!var_1);
        var_23 = var_9;
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        arr_20 [i_6] = ((21848 ^ -875740781) * (min(((((arr_18 [i_6]) & 1))), (((arr_19 [i_6]) ? 59959 : var_12)))));
        var_24 = ((((-(arr_18 [i_6 - 1])))) ? (((arr_19 [i_6 + 1]) ? 7386 : (arr_18 [i_6]))) : (~7386));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_25 [i_7] = (arr_21 [i_6 + 2] [i_7]);
            arr_26 [i_7] = (4358976615586750027 & 21388);
        }
    }
    var_25 += (min(((min(1, 20795))), ((var_13 ^ ((min(var_8, var_0)))))));
    var_26 = ((((18446744073709551595 ? 47 : 875740743))) * ((var_7 ? ((var_8 ? var_12 : var_13)) : 21848)));
    #pragma endscop
}
