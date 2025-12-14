/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_11 ? (((var_2 ? ((min(var_8, var_6))) : ((1 ? var_7 : var_0))))) : (((var_11 >= var_11) ? (((var_5 << (var_9 - 31)))) : ((var_10 ? var_8 : var_3))))));
    var_13 = (max(var_13, (!var_5)));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_14 = (min(var_14, (((((min((arr_0 [i_0 - 1]), var_8))) ? (min(var_1, (((arr_0 [i_0]) ? var_7 : var_4)))) : (((max((arr_1 [i_0]), 1)) ? (14759 - 64470) : var_5)))))));
        arr_2 [i_0] = (((-16204 < -var_5) >> (122 < var_8)));
        var_15 = (max(var_15, ((max(((var_4 ? var_6 : (arr_0 [i_0 - 1]))), ((-103 ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 2]))))))));
        var_16 = (min(var_16, (((var_10 ? var_4 : var_3)))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 *= (min((((-119 ? ((-120 ? var_5 : -88)) : ((var_4 ? 20522 : 1))))), (((var_7 ? 2898020990175473686 : var_4)))));
            arr_6 [i_1] = 12910;

            /* vectorizable */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                var_18 -= (!-53);
                arr_9 [i_2] = ((34102 ^ ((~(arr_7 [i_2] [i_2] [i_2])))));
                arr_10 [i_0] [i_1] [i_0] &= ((((((arr_5 [i_1]) ? var_7 : 1))) < ((89 ? (arr_1 [i_0]) : (arr_5 [i_0])))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_2] [i_2] = ((var_7 & (arr_13 [i_3] [i_2] [18] [i_3 - 1] [i_3 - 2] [i_3 - 1])));
                            var_19 = var_2;
                            arr_17 [i_2] = -110;
                        }
                    }
                }
            }
            for (int i_5 = 4; i_5 < 17;i_5 += 1)
            {
                var_20 = (min(var_20, (((var_0 ? (((arr_4 [i_0 - 2]) ? var_8 : (arr_4 [i_0 - 2]))) : 89)))));
                arr_21 [i_0] [13] [i_1] = (!var_3);
            }
            arr_22 [i_0] [i_0] = (min(((59082 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))), (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_27 [i_6] [i_6] [i_0] = (!var_8);
            arr_28 [1] = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 2]) : -1953399802193499258));
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                var_21 += ((((!(arr_14 [i_7] [i_8] [i_7]))) && var_1));

                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    var_22 ^= (((arr_14 [i_9] [i_9 - 1] [i_9]) ? (arr_20 [18] [i_9 + 1] [i_9] [i_9]) : 1));
                    arr_38 [i_7] [0] [i_9] [1] = ((((arr_8 [i_10] [i_9] [i_8] [16]) ? var_7 : var_11)) ^ 45324);
                    var_23 = (max(var_23, (var_7 / 16196)));
                    var_24 = var_1;
                }
                var_25 = (min(var_25, ((((arr_15 [i_7 + 1] [i_7] [i_7] [i_8] [i_8] [i_8] [1]) ? 133 : (((var_6 ? var_5 : (arr_8 [i_9] [i_8] [i_7] [i_7])))))))));
            }
            arr_39 [i_7] [i_7] = ((var_5 - 1) ? (arr_11 [i_7] [i_8] [i_7] [i_7]) : (arr_25 [i_7 - 1]));
            arr_40 [i_7] [i_7] [i_7] = ((-((var_7 ? var_7 : -93))));
            var_26 = (max(var_26, (arr_19 [i_8] [i_8] [i_8])));
        }
        arr_41 [i_7] = 1;
    }
    #pragma endscop
}
