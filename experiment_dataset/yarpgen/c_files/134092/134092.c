/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(var_13, ((max(167, var_1)))))) ? (((((max(25068, var_7))) ? 1 : var_16))) : (~0)));

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_5, ((-0 ? ((115 ? var_12 : var_7)) : (arr_1 [i_0])))));
        var_19 = (((((255 ? ((min(1, 63))) : var_0))) / (max((~3757878491), ((-59 ? 10 : 11370033172437627221))))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 |= ((((((arr_2 [i_1 - 2]) + (arr_2 [i_1 + 2])))) ? ((var_14 ? (arr_2 [i_1 - 1]) : var_10)) : (arr_2 [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_21 = (min((((((arr_5 [i_1] [i_2] [i_2]) ? var_1 : var_11)) + ((max((arr_0 [6]), (arr_0 [12])))))), ((-12 ? 3 : (~23949)))));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_22 = var_9;
                        arr_13 [i_3] [i_2] = (((arr_4 [i_3]) ? (((arr_11 [i_2] [i_1 - 2] [i_3 + 1] [i_3 + 3] [i_3] [i_3]) * (var_13 % var_13))) : (arr_0 [i_2])));
                        arr_14 [i_2] [i_2] [i_2] [i_3] [5] = (min(var_12, (min((arr_5 [i_3 - 2] [i_2] [i_3 + 1]), (arr_8 [i_3 + 3] [i_2] [i_3 + 1])))));
                        var_23 = var_0;

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_24 = ((var_6 ? (((!var_5) + (arr_3 [i_3] [i_3]))) : (((((arr_2 [i_1 - 3]) ? (arr_15 [i_5] [i_4] [i_4] [14] [i_2] [14]) : (arr_7 [8] [i_2] [7] [i_5])))))));
                            var_25 = 1;
                        }
                    }
                    var_26 = (~(arr_3 [i_1 - 3] [i_3 + 1]));
                    arr_18 [i_2] [i_2] [1] [i_2] = (max(((var_4 ? (arr_17 [i_1]) : ((max(-32720, 1))))), (~-var_11)));

                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_22 [i_1] [i_2] [i_3] [i_6] = (((((((var_15 | (arr_6 [i_2])))))) * (((((-79 ? -103 : 36123))) ? (min(0, (arr_3 [i_6] [i_6]))) : -var_9))));
                        var_27 = ((((arr_17 [i_6 + 2]) >= (arr_21 [i_1 + 1] [i_2] [i_6 + 1] [i_6] [i_6] [i_2]))));

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_27 [i_2] [i_6 - 1] [i_2] [i_2] [i_2] = ((!((max((arr_12 [i_6 + 2] [i_2] [i_2]), (arr_7 [13] [1] [i_3 - 2] [1]))))));
                            arr_28 [6] [1] [i_2] [i_2] [i_3] [i_6 + 2] [i_7] = (max(-65535, 1492));
                            var_28 = 41;
                        }
                        var_29 = (max((max(31, (arr_16 [i_2] [i_2] [i_2] [i_2] [i_3 + 2]))), (((arr_16 [i_1] [i_1] [4] [i_3] [i_3 + 1]) ? (arr_16 [i_1] [i_1] [12] [i_3] [i_3 + 1]) : (arr_16 [i_3] [i_3 + 3] [i_3 + 1] [8] [i_3 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
