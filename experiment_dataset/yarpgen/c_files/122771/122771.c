/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_1);
    var_19 = var_8;
    var_20 &= (~var_2);
    var_21 = (min(var_6, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2] [i_3] = var_13;
                        var_22 &= (var_12 * var_16);
                        var_23 = (((var_5 + 9223372036854775807) >> var_11));
                    }
                }
            }
        }
        arr_12 [15] [i_0] = var_13;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_24 = (max(var_24, (arr_13 [i_4])));
        var_25 &= var_7;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {

                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        var_26 = ((var_8 ? ((min(var_7, var_17))) : (((var_9 ? var_5 : var_10)))));
                        arr_23 [5] [i_5] [i_6] [0] [i_4] = ((-(!var_8)));
                        var_27 = (min(((var_3 << (var_7 - 16013))), (((~(arr_7 [6] [i_5] [i_6] [i_7]))))));
                        var_28 = (((((var_13 ? var_8 : (arr_8 [i_4] [i_4] [i_6] [i_4] [i_7 + 3] [i_7 + 2])))) ? (((arr_8 [i_4] [i_4] [i_7] [i_7] [i_7 + 3] [17]) ? var_7 : (arr_8 [i_6] [i_4] [i_6] [i_6] [i_7 + 1] [i_7]))) : var_13));
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_29 = ((((max((!var_16), (max(var_0, var_4))))) ? ((var_15 ? (var_4 * var_15) : (((var_3 ? var_3 : var_16))))) : var_0));

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_30 = (((((var_13 ? var_2 : var_15))) || var_2));
                            arr_30 [i_4] [i_4] [i_6] [i_8] [1] [i_8] [i_6] = ((-((var_6 ? ((var_2 ? var_11 : var_11)) : ((min((arr_1 [i_5]), var_15)))))));
                            var_31 = (max(var_31, (((((var_4 ? (arr_13 [i_9]) : var_0)) / ((var_12 ? var_10 : (arr_13 [i_9]))))))));
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_4] [i_4] = (1 ^ 3002328103);
                            var_32 = (1292639193 >> 1);
                            var_33 = (((min(191, 0)) < (min(((((arr_18 [1] [i_4] [4]) || var_0))), (var_15 / var_10)))));
                        }
                        for (int i_11 = 2; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_4] [i_4] = (((((var_10 ? (arr_10 [i_4] [i_4]) : var_0))) ? var_16 : (min((arr_10 [i_4] [i_4]), var_9))));
                            var_34 = var_4;
                            arr_41 [i_6] [i_8] [i_6] [i_8] [i_11] [i_8] [i_6] &= ((var_4 ? (var_9 - -var_13) : var_6));
                            var_35 = (~var_12);
                            arr_42 [i_11] [i_4] [i_6] [i_4] [i_4] = arr_14 [i_4] [i_4];
                        }
                        arr_43 [i_8] [i_6] [i_6] [i_4] &= var_8;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_47 [i_12] = (arr_5 [i_12]);
        var_36 = ((var_6 >> (var_15 - 45)));
    }
    #pragma endscop
}
