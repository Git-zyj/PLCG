/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((~84) >> (((-6140590163850394562 + 0) - 12306153909859157007))));
    var_18 = -3625761135324259706;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 -= (var_16 + 18446744073709551615);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (153 + 217);
            var_20 = (((arr_3 [i_0] [i_0] [i_1]) < (arr_4 [14] [i_1] [i_1])));
            arr_6 [i_0] [i_1] [i_0] = ((~((var_5 ? (arr_4 [i_1] [i_0] [17]) : (arr_0 [i_0])))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_21 -= var_3;
            var_22 = var_4;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] [i_3] [i_2] = ((var_13 >> (37 - 28)));
                        arr_16 [i_2] = ((~(((arr_4 [15] [1] [15]) ? 35059 : var_10))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_25 [i_0] [8] [i_6] [i_7] [i_7] [i_6] = (((arr_9 [i_5] [i_5 - 1] [i_7]) ? (arr_14 [i_5 - 1] [i_5 - 1] [4]) : (arr_21 [i_6] [i_5 - 1] [i_5 - 1])));

                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            arr_28 [i_0] [i_5 - 1] [i_6] [i_7] [i_8 - 1] = ((-(arr_26 [i_8 + 3] [i_8 - 3] [i_8 + 3] [i_8] [i_8 - 2])));
                            arr_29 [i_0] [i_5] [i_6] [i_7] [i_6] [i_7] = ((var_5 ? (arr_9 [i_8 - 2] [i_5 - 1] [i_6]) : (arr_13 [i_8 - 2] [i_6])));
                            arr_30 [i_6] [1] [i_7] [i_6] [i_6] [i_6] = (((arr_26 [i_8 + 2] [i_8 + 2] [i_8] [i_8 - 3] [i_8 - 2]) ? -6140590163850394562 : 149));
                            var_23 = (((arr_18 [i_8 - 2] [i_8 + 3]) * 219));
                            var_24 = (((arr_8 [i_6]) ? ((((arr_22 [i_0] [i_0] [16] [i_6]) < (arr_11 [i_0] [i_5] [i_6])))) : (arr_22 [i_0] [i_0] [2] [i_6])));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {

        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            arr_36 [i_9] [i_9] = 35059;
            arr_37 [i_9] [i_9] [i_9] = 35059;
            var_25 = (var_11 < var_9);
        }

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {

            for (int i_12 = 2; i_12 < 19;i_12 += 1)
            {
                arr_43 [i_9] = (arr_41 [i_9] [14] [i_12 + 3] [i_12 + 2]);
                var_26 = (((arr_33 [i_12 + 1]) ? 21450 : var_13));
            }
            arr_44 [i_9] [1] [i_11] = (((arr_33 [i_9]) ? (-31901 | 0) : ((8376 >> (32746 - 32735)))));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        arr_47 [i_13] = (((arr_41 [i_13] [i_13] [4] [i_13]) | ((((arr_32 [7]) ? (arr_35 [i_13] [i_13] [i_13]) : (arr_46 [i_13] [i_13]))))));
        var_27 = (((arr_41 [i_13] [i_13] [10] [i_13]) ? (arr_33 [i_13]) : (arr_41 [2] [i_13] [i_13] [i_13])));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_50 [i_14] = (arr_49 [i_14] [i_14]);
        var_28 = (min(var_28, ((((((-6140590163850394562 ? 30466 : 10645506324946365642))) ? (arr_49 [i_14] [i_14]) : ((var_3 ? (arr_49 [i_14] [i_14]) : var_12)))))));
    }
    #pragma endscop
}
