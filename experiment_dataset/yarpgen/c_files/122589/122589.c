/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min(((max(4047437159634631710, 288230376151711743))), (-1 * 3487574556217056369))), (((var_10 / (var_1 / var_0))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] = ((-((+(((arr_0 [i_0]) ? 0 : 96))))));
                    var_16 = var_11;
                }
            }
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_17 = (((((!-5128058683477586044) ? (min(2710805691577943288, -76)) : (((-28980 ? 9223372036854775803 : -14979))))) <= ((((!((max(18446744073709551611, var_13)))))))));
            var_18 = ((((((var_0 | var_11) & ((max((arr_2 [i_3]), (arr_10 [i_0]))))))) / ((((((arr_5 [i_0]) ? -14365 : var_2))) ? ((4575657221408423936 ? var_1 : 100)) : (var_8 < 2873344594158722279)))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_19 = 10288871395458548050;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_22 [i_7] [i_6] [i_5] [i_4] [i_0] = var_4;
                            var_20 = -6148262811190183953;
                            var_21 = (arr_14 [i_0] [i_4] [i_0]);
                            var_22 = ((!((1276713003 <= (arr_8 [i_0])))));
                            arr_23 [10] [i_7] = ((~((max((arr_17 [i_5] [i_6]), var_9)))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_23 = var_1;

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_24 = ((~((-(arr_33 [i_0] [i_8] [i_9] [i_8] [i_10] [i_11])))));
                            arr_34 [i_0] [i_0] [i_8] [i_10] [i_11] = var_12;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_25 = 4823034461262906841;
                            var_26 = ((-6148262811190183953 >= ((min(-1520929538, (arr_6 [i_12] [i_8] [i_8] [i_8]))))));
                            arr_39 [i_0] [i_8] [i_8] = (((((((min(32742, 11045459726242422904))) ? ((min(var_2, (-127 - 1)))) : -8068850837493740347))) ? (min(((var_3 ? 9007199120523264 : (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]))), (((-(arr_36 [i_0] [10] [i_8] [i_10] [11] [i_8])))))) : (((-(max(1658570800, 102)))))));
                            var_27 = ((var_11 >= ((((arr_8 [i_0]) > (arr_2 [i_0]))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_28 = (-9223372036854775807 - 1);
                            var_29 = (arr_35 [i_0] [i_8] [i_9] [i_9] [i_10] [i_13] [i_10]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
