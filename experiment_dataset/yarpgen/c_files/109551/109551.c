/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (max(var_9, (min(((var_3 >> (var_5 - 1614633089))), var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, ((((var_7 % var_4) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [14] [14] = (arr_1 [i_0]);
        var_12 = 0;
        arr_4 [i_0] = arr_0 [i_0] [21];
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            var_13 -= (var_0 ? ((var_7 >> (var_5 - 1614633077))) : 13);
                            var_14 *= ((!(-9223372036854775807 - 1)));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_17 [i_1] [11] [i_1] [i_2] [i_1] [i_5] = ((arr_2 [i_1 - 3] [i_1]) ? var_4 : (arr_15 [i_2 - 1] [13] [i_2 - 1] [i_2] [i_1 + 1] [2]));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [8] [i_0] = (!var_6);
                        }
                        var_15 += ((-((var_3 ? var_0 : var_9))));
                        arr_19 [i_0] [i_0] [i_1] [i_3] = var_5;
                        var_16 = (max(var_16, (((var_5 || (((17293822569102704640 ? var_0 : var_1))))))));
                    }
                    arr_20 [i_1] [i_1] [i_2 - 1] = (var_6 % var_6);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_17 = (max(((max((arr_28 [i_7 + 1] [i_7 - 1] [i_7 - 1]), (arr_28 [i_7 - 1] [i_7] [i_7 - 1])))), (~var_3)));
                    var_18 = (max(((max(117, -12606))), ((((max(var_8, (arr_28 [5] [i_7] [i_8])))) ? (-35184372088832 > 16186192119675698164) : (arr_27 [16] [16] [16] [i_7 - 1])))));

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_19 += ((((min((arr_28 [i_7 - 1] [i_7] [i_7 + 1]), var_6))) ? (~var_5) : (min(var_3, (arr_28 [i_7 - 1] [i_7 - 1] [i_7 + 1])))));
                        arr_33 [3] [i_6] [i_6] [i_8] [i_6] [i_9] = (((((~(((arr_32 [0]) ? var_0 : 2746316996))))) ? (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]) : var_6));
                        var_20 = ((~(max(var_4, ((min((arr_25 [18] [13] [i_9]), (arr_23 [i_6] [i_6]))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        arr_38 [i_6] [4] [i_6] [i_6] = (arr_27 [i_7 + 1] [i_8] [i_8] [i_10 - 3]);
                        var_21 = (max(var_21, var_6));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_41 [i_6] [6] [6] [i_6] [i_7 + 1] [6] = ((((max(var_8, var_4))) ? 91 : ((min((arr_27 [12] [12] [i_8] [i_7]), (arr_26 [i_6] [i_7] [i_6]))))));
                        arr_42 [i_6] [i_6] [i_8] [i_11] = (~(((arr_26 [i_7 - 1] [i_7] [2]) ? (arr_26 [i_7 - 1] [i_7 - 1] [i_8]) : (arr_26 [i_7 - 1] [8] [i_7 - 1]))));
                    }
                    arr_43 [23] [i_6] [i_6] [i_6] = (arr_29 [i_8] [i_6] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
