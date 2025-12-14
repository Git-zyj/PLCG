/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_7 >= 0);
    var_11 = 3297004878;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (106 + -86);
        var_13 = ((var_1 ? ((21941 ? var_5 : var_6)) : (arr_1 [i_0])));
        var_14 = (arr_0 [i_0]);
        var_15 = var_6;
        var_16 &= var_5;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((((((arr_4 [i_1] [i_1]) ^ (arr_3 [i_1] [i_1])))) ? (min((arr_3 [i_1] [i_1]), (arr_4 [i_1] [i_1]))) : (((var_3 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))))));
        var_17 = (max(var_17, (((min((min(-3427333437948416200, (arr_3 [i_1] [i_1])), ((((arr_4 [i_1] [i_1]) && var_4))))))))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_18 = (((((-(7240 <= 120)))) ? (((((arr_3 [i_1] [i_2]) ? var_6 : 2)) - ((min(111, -2607))))) : ((var_2 ? (0 - 8687) : var_7))));
            var_19 = ((var_0 >> (16505047620688510072 - 16505047620688510054)));

            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                var_20 = (!var_6);
                arr_11 [i_1] [i_1] [i_1] = var_7;
            }
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_21 = ((~(arr_17 [i_2] [i_2] [i_1] [i_1] [i_1] [i_2] [i_6])));
                            arr_21 [i_6] [i_6] [i_6] [i_2] [i_1] |= var_8;
                            arr_22 [i_1] [i_2] [i_2] [i_5] [i_6] [i_1] [i_2] = var_9;
                            arr_23 [i_1] [4] [i_2] [i_4] [i_5] [4] = (((arr_19 [i_1] [i_2] [i_4 + 1] [i_5] [1]) ? ((var_7 ? 1 : var_9)) : ((0 ? 114 : 31120))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (arr_3 [i_1] [i_1])));
                            var_23 = (max(var_23, (((-((var_5 ? var_8 : var_3)))))));
                            var_24 = ((var_1 ? ((var_1 ? var_3 : var_8)) : var_3));
                        }
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_5] &= (((((~(arr_25 [i_1] [i_4 - 2] [i_4 - 2] [i_5] [i_4])))) || ((min((arr_25 [i_1] [i_4 - 2] [i_2] [i_5] [i_5]), (arr_25 [i_4] [i_4 - 2] [i_4 - 1] [i_5] [i_5]))))));
                        var_25 = ((((((min(var_6, 2104934229))) ? (((arr_17 [i_1] [i_1] [i_1] [i_2] [i_1] [i_4] [i_5]) ? (arr_20 [i_1] [i_1] [i_2] [i_2] [i_4] [i_4] [i_5]) : var_5)) : (((min(var_3, 147)))))) - (((((min(var_6, 1))) ? ((var_7 ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : var_9)) : (arr_24 [i_1] [i_2] [i_2] [i_1] [i_4] [i_5]))))));
                    }
                }
            }
            var_26 *= var_9;
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_27 = 0;
        var_28 = (arr_9 [i_8] [i_8]);
        arr_30 [i_8] = (((~13639) ? ((var_3 ? (arr_4 [i_8] [i_8]) : (arr_6 [i_8]))) : ((((arr_6 [i_8]) ? (arr_4 [i_8] [i_8]) : var_6)))));
    }
    var_29 = var_4;
    #pragma endscop
}
