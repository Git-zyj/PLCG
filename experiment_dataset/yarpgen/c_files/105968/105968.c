/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 = (max(var_21, (((~((var_0 ? var_10 : 0)))))));
                        var_22 = (arr_10 [3] [i_1] [i_1] [i_3]);
                    }
                    var_23 = var_5;

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [3] [i_4] [i_2] [1] [i_4] [i_0] = (arr_10 [i_0] [10] [i_2] [i_4]);
                        var_24 = 65527;
                    }
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_25 &= 4000895908186591297;
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (var_9 == var_17);
                            arr_22 [i_0] [i_0] [i_0] = (var_12 / var_3);
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_7 - 1] [i_7 - 1] = (arr_3 [i_1]);
                            var_26 = (((max(1, -4000895908186591297)) / 33129));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_27 = (max(33125, (max((arr_28 [i_5 + 3] [i_0] [i_5 + 2] [i_5 - 1] [i_0]), (arr_28 [i_5 + 1] [i_1] [i_1] [1] [1])))));
                            arr_29 [i_0] [6] [i_1] [i_5 - 1] [i_8] = (((1 != 1) || (((((min((arr_24 [7] [i_1] [i_2] [i_1] [i_8] [7]), 4294967289))) ? 1048575 : (((3939476383685136179 ? 0 : var_17))))))));
                            var_28 = (17370430778455087007 ? 771033140 : 1);
                            var_29 = (!(arr_18 [i_1]));
                            var_30 = ((((((max(var_11, var_11)) ? -4000895908186591298 : ((((arr_4 [i_0] [1] [i_0]) >> (((arr_12 [i_8] [i_1] [i_8] [6] [i_8]) - 41285)))))))) ? ((((!(arr_16 [i_8] [i_5] [i_0]))) ? -3939476383685136198 : (32407 | var_1))) : ((min(((var_18 ? var_6 : var_7)), ((min(var_7, (arr_2 [i_0] [i_1] [5])))))))));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_31 = var_13;
                            var_32 = (min(var_32, (!3118723683)));
                            var_33 = (arr_18 [i_1]);
                            arr_34 [i_0] [4] [4] [i_5] [i_0] = (max(((max(1, 1))), (min((~6180797164012909974), 32413))));
                        }
                        arr_35 [i_0] [i_0] [i_0] [i_2] [1] = ((((((arr_32 [i_0] [i_1] [i_0] [i_0] [i_5 + 1] [i_2]) || 17370430778455087022))) != (arr_11 [i_0] [i_5 + 2] [i_2] [i_5 + 2] [i_5 - 1] [i_5])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_34 = (var_18 ? (((((var_2 ? (arr_13 [3] [i_1]) : 65535))) ? -var_16 : (arr_23 [i_1] [i_1] [i_1] [i_1]))) : ((((!(((17370430778455087007 ? 65535 : 1076313295254464594))))))));
                        var_35 = ((-1 ? (var_3 ^ var_1) : (min(((var_14 ? var_1 : var_7)), (arr_11 [i_0] [i_1] [i_10] [i_2] [i_2] [i_10])))));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_40 [i_0] [i_0] [4] [i_2] [1] = (((arr_17 [i_0]) || (arr_17 [i_11])));
                        arr_41 [i_0] [i_0] [1] [i_2] [9] = arr_1 [i_1] [i_2];
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        arr_46 [i_12] = var_8;
        arr_47 [8] = ((1 ? 1076313295254464587 : 65534));
        var_36 = ((((min(var_3, (arr_27 [i_12] [i_12] [i_12] [1] [i_12 + 1])))) ? (min((arr_27 [i_12] [i_12] [i_12] [i_12] [i_12 + 1]), (arr_27 [i_12 + 1] [2] [2] [i_12] [i_12 + 1]))) : ((var_9 ? (arr_27 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1]) : (arr_27 [i_12] [i_12] [i_12] [i_12] [i_12 + 1])))));
    }
    var_37 = ((var_19 ? var_7 : (min((var_10 && 1), var_8))));
    #pragma endscop
}
