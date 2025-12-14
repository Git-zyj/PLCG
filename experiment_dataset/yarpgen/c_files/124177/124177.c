/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((var_4 & (((var_10 << (var_3 + 12240))))))) ? (max((min(var_1, var_2)), (min(var_2, var_4)))) : (((~var_1) << (var_10 - 67))));
    var_13 = (((((~(var_2 ^ var_11)))) | (((var_11 & var_0) & (max(var_3, var_6))))));
    var_14 += min((((min(var_11, var_1)) << (((~var_7) + 20098)))), ((((var_8 || var_5) - var_2))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = min((((((min((arr_0 [i_0]), var_7)) + 9223372036854775807)) << (((((max((arr_0 [i_0]), (arr_0 [i_0]))) + 2588510003354488792)) - 11)))), (((((((arr_0 [i_0]) + 9223372036854775807)) << (var_6 - 11065777336540231))) & ((~(arr_0 [i_0]))))));
        arr_3 [i_0] = (min(((((max(var_5, (arr_0 [19]))) >> ((((var_6 ? var_11 : var_0)) - 3912033022))))), (min(((var_4 ? var_4 : (arr_1 [i_0]))), (var_8 / var_5)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_15 = (((((-12530 + 2147483647) >> (6760 - 6758))) % (42 != -27)));
                var_16 = ((var_10 > (!var_0)));
                arr_10 [i_0] = (arr_1 [i_1]);
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_14 [i_3] [i_1] [i_0] [i_0] |= (max((((((~(arr_7 [i_1] [i_1] [2] [i_1]))) % (max(var_2, var_10))))), var_6));
                var_17 = (min(((max(((var_11 << (var_8 + 8050535437324999546))), (~-21)))), (((((arr_0 [i_1]) | (arr_1 [i_0]))) - (min(4783724667922227756, var_5))))));
                arr_15 [i_0] [i_1] [i_0] [i_0] = ((((min(var_8, var_5))) > (((min((arr_0 [i_1]), var_8)) ^ (-27 < 3205624520502721939)))));
                var_18 = (min(var_18, (((((max((arr_9 [i_0] [i_1] [i_3] [i_3]), var_3))) % (min((arr_13 [i_3] [i_1] [i_0]), ((var_1 ? var_10 : (arr_0 [i_0]))))))))));
            }
            var_19 ^= ((((((-var_5 || ((((arr_4 [i_0] [1]) | var_0))))))) * (min((max(var_0, var_11)), (((~(arr_7 [i_0] [i_0] [i_0] [i_1]))))))));

            /* vectorizable */
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                var_20 -= var_0;
                arr_20 [i_0] [i_1] [i_4] = (arr_1 [i_1]);
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_21 &= ((var_7 & ((+(((arr_17 [15] [i_0] [i_0] [i_0]) ? (arr_6 [i_0]) : var_11))))));
                var_22 = var_3;
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_23 ^= max(-12530, 2132068537);
                var_24 = (max(var_24, var_2));
            }
        }
        arr_26 [i_0] [i_0] = ((~((var_7 ? var_5 : (arr_16 [i_0])))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_29 [i_7] [i_7] |= (((min(((var_7 | (arr_6 [i_7]))), ((max((arr_11 [i_7] [17] [18]), var_8))))) < ((((!((max((arr_17 [i_7] [i_7] [i_7] [i_7]), var_3)))))))));
        var_25 -= ((~((-(arr_18 [i_7] [i_7] [i_7])))));
    }
    #pragma endscop
}
