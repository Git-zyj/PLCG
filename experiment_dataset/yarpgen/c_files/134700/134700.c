/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 1365652741180714113;
    var_18 = var_16;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 = (((((-(arr_2 [i_0 - 1])))) ^ var_0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = var_14;
                    var_21 = (arr_0 [i_1] [i_1]);
                    var_22 ^= ((var_9 ? (max(((((arr_2 [19]) << (var_15 - 2576964985)))), 14525842747162417443)) : (arr_1 [i_1])));
                    var_23 = (+-18446744073709551615);
                    var_24 = (min(var_24, ((((min(1, 3964877356209455554))) || ((((!var_7) - var_3)))))));
                }
            }
        }
    }
    var_25 = var_3;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_9 [i_3] = ((1818258632 ? 3964877356209455554 : 18446744073709551615));
        var_26 = (((arr_8 [i_3]) * (arr_8 [i_3])));
        var_27 = ((var_1 ? ((((arr_3 [i_3] [i_3]) <= var_4))) : (var_3 != var_7)));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_14 [i_4] = 5021;
        var_28 ^= (min((181 < 127), (arr_13 [i_4] [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_22 [i_6] [i_6] = (max((((((arr_18 [i_4] [i_4] [i_4] [1]) + (arr_20 [5] [i_5] [i_5] [i_4]))) - (181 + -26825))), (arr_15 [i_4])));

                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        var_29 ^= (arr_17 [i_4] [i_5]);

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_28 [i_4] [i_5] [i_6] [i_6] [i_8] = 16100315192444734497;
                            var_30 = (max(var_30, (~181)));
                            var_31 += ((6 ? var_9 : (((var_2 != ((((arr_20 [i_4] [i_5] [i_7] [i_8]) != 3964877356209455554))))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        var_32 = ((min((((var_12 << (var_13 - 1241092220)))), (arr_15 [i_6]))));
                        var_33 = (max(var_33, ((min(-var_1, (arr_19 [i_5] [i_4] [i_5]))))));
                    }
                    var_34 -= ((65535 >> (var_9 + 51)));
                }
            }
        }
        arr_32 [i_4] = (((((14 << (((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4]) + 1306020287147138391))))) <= (((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4]) ? var_12 : var_15))));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_36 [i_10] = max((((!(~116)))), (~18446744073709551615));
        arr_37 [i_10] [i_10] &= ((!((((-(arr_29 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))))));
    }
    #pragma endscop
}
