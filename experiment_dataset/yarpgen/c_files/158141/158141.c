/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((((var_3 > var_5) ? (var_2 / 2011727837) : var_5))) ? (max(var_3, (var_1 * var_9))) : (max(18446744073709551615, (min(var_11, var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, (arr_5 [i_2])));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_0] = 971;
                                var_14 = (max(var_14, (((((42467 * (16 / -126)))) ? -8823911888274480876 : (arr_6 [i_0] [i_0] [i_0])))));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = (min(((5629323058330991731 / ((((-5687 || (arr_19 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_5] [i_0] [i_2]))))))), -18899));
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_5] [i_0] [i_0] = ((((((((-(arr_6 [i_0] [i_1] [i_2])))) / (((arr_13 [i_0] [i_1] [i_2] [i_2] [i_5]) ? -8823911888274480868 : 32746))))) ? ((-32 ? ((47079 ? var_1 : (arr_17 [i_1]))) : 2157083594)) : (((28942 >> (((arr_2 [i_0 - 1]) - 6559)))))));
                                arr_22 [i_0] [1] [i_0] [i_3] [i_3] = (((max(2420, (arr_19 [i_0 + 1] [i_1] [i_2] [i_1] [i_5] [i_0 + 1] [i_2])))));
                            }
                            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                            {
                                arr_27 [i_0 + 1] [i_0] [i_0 + 1] [i_3] [i_6] = (arr_6 [i_6] [i_2] [2]);
                                arr_28 [i_0] [1] [i_0] [i_2] [i_0] [i_0] [i_0] = (min((((var_2 + 10587528917870334621) | (((((arr_7 [i_1]) || 2137883705)))))), (arr_13 [i_0 - 1] [i_0 - 1] [i_6] [i_0 - 1] [i_6])));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                            {
                                arr_31 [i_2] [i_3] [i_0] = (((((arr_25 [i_0] [4] [i_0] [i_1] [i_2] [i_3] [i_7]) ? (arr_7 [i_7]) : 7204466506570145244)) / (arr_17 [i_0])));
                                var_15 = (max(var_15, (((-11660 ? -5684 : 11660)))));
                                arr_32 [i_2] [i_0] = (((arr_15 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_2]) ? ((var_8 ? var_1 : 10587528917870334631)) : 1119881695943888315));
                            }
                        }
                    }
                }
                arr_33 [i_0] [i_0] = ((2157083616 <= ((18 ? 32757 : (arr_26 [i_0 + 1] [i_0 + 1] [i_0])))));
            }
        }
    }
    var_16 = 2137883701;
    var_17 = (((((max(var_0, var_2))) ? var_8 : (var_0 / 61440))));
    #pragma endscop
}
