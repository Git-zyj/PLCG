/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((arr_5 [i_0] [i_0]) % 12387));
                    var_19 = (!((max((((arr_1 [i_0]) ? (arr_7 [i_0] [16] [i_1] [i_1]) : var_2)), (arr_0 [i_0] [i_0])))));
                    arr_8 [i_1] [i_1] [i_1] = var_9;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        arr_20 [i_3] [i_4] [i_4] [i_6] = ((((((max(var_11, 12368)) ^ (((min(var_2, (arr_6 [i_3 - 2] [i_4] [i_5])))))))) ? ((((!(arr_5 [i_3] [9]))) ? (max(var_3, var_7)) : (!31316))) : ((((arr_4 [i_6 - 1] [i_5] [i_6 + 1] [i_6 + 4]) ? (!-12493) : ((((arr_14 [1] [13] [i_5] [1]) && 53149))))))));
                        arr_21 [i_3] [15] [15] [i_5] [i_6 + 1] = ((-((((-(arr_7 [i_3] [i_3] [18] [i_4]))) + (arr_14 [i_6] [i_6] [i_6] [i_6 + 1])))));
                        arr_22 [i_3] [i_4] [i_3] [6] [i_5] [i_6] = ((((min(var_15, (~523196024)))) ? (((((-17 ? (arr_11 [i_3] [i_3] [i_6 + 2]) : 16))) ? -12386 : -var_3)) : (((-6004414472848698796 ? (arr_17 [i_3] [i_3 + 2] [i_6 - 1]) : (arr_17 [i_3] [i_3 + 2] [i_6 - 1]))))));
                        arr_23 [14] [14] [i_4] [i_3 + 2] = (max((((-(((arr_4 [0] [i_5] [i_5] [i_6]) + (arr_18 [i_3])))))), (((arr_15 [i_6 + 4] [i_6 - 1]) ? ((min(var_7, var_15))) : (max((arr_5 [5] [i_4]), 12387))))));
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_20 = (max(((var_10 ? (arr_7 [i_7] [i_7] [15] [i_7]) : (arr_25 [i_7 + 2] [i_5] [i_7] [i_5] [i_5]))), (((var_1 ^ (arr_4 [10] [i_7] [i_7] [i_4]))))));
                        var_21 = ((((!(!0))) ? (arr_12 [i_3] [i_4] [i_5]) : (((((arr_19 [21] [i_4]) && (arr_12 [i_3] [i_3] [i_3]))) ? (((var_2 || (arr_26 [i_3] [i_4])))) : (((!(arr_9 [i_3 + 3] [i_3 + 2]))))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        arr_30 [1] [i_4] [i_5] [i_8 + 3] [i_8] = (!var_16);
                        arr_31 [i_3] [i_3] [10] [i_3] = 523196024;
                    }
                    var_22 = ((2714 ? ((53166 ? 53148 : 209)) : ((min(2714, 100)))));
                    var_23 = var_4;
                }
            }
        }
    }
    var_24 = 3489347005;
    var_25 = var_7;
    #pragma endscop
}
