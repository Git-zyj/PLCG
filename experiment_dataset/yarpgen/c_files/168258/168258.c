/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_5 ? (((var_2 - 1) + ((max(var_5, var_12))))) : var_3));
    var_19 = ((var_10 + (var_0 ^ 6315)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1 - 1] [i_2] = ((!(var_17 | 1152921504606846975)));

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_20 = (min(var_20, ((((arr_12 [i_3] [8] [8] [6]) & (arr_12 [i_3 - 3] [6] [6] [i_1 - 2]))))));
                        var_21 = 3;
                        var_22 = (min(var_22, (((var_7 - var_13) ? (var_16 ^ 127) : 14998780549369739210))));
                    }

                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        var_23 = (arr_8 [4] [i_4 + 1] [1] [5]);
                        var_24 = ((var_0 ? var_10 : (arr_2 [0] [i_1 - 1])));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_25 -= (((arr_19 [i_5] [i_5] [i_1 - 1] [i_1 - 2] [i_1 + 1]) > var_3));
                        var_26 = (arr_15 [i_0] [0] [i_2] [i_1 - 1]);
                        var_27 = (max(var_27, (((((((arr_16 [i_0] [i_0] [i_0] [6] [i_0] [4]) >> (((arr_3 [i_1 - 2] [i_1] [i_1]) + 7152602672338371257))))) ? (~11565) : var_16)))));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_1] [5] [i_6] = var_17;
                        arr_23 [8] [i_2] [i_2] = (((arr_15 [i_1 + 1] [i_1 - 2] [i_2] [i_1 + 1]) / var_13));
                        var_28 = (((arr_16 [i_0] [6] [i_1 - 2] [i_2] [10] [i_6]) ? 18446744073709551615 : (arr_15 [i_0] [i_0] [i_2] [i_6])));
                    }
                }
            }
        }
        arr_24 [i_0] = (192 % var_4);
        var_29 = (min(var_29, (((((var_16 ? 1152921504606846975 : 192)) | (((~(arr_9 [10] [4] [4] [i_0])))))))));
    }
    #pragma endscop
}
