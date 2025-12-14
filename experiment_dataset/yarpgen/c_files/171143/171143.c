/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = ((~((max(var_2, (0 || 1))))));
                    var_21 = (max((var_14 + 4163291134589476421), var_11));
                    arr_8 [i_0] [i_1] [i_1] |= (((((!-182547602) && 1)) ? (((((max(21665, 104))) <= 1))) : (max(1, -512721937))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 += max(((((max(1, (arr_4 [i_0] [i_0] [i_2])))) / (arr_10 [i_0] [i_0] [i_0] [i_0]))), ((var_12 ? var_0 : ((((arr_10 [1] [11] [i_2] [15]) || (arr_6 [i_1] [i_2])))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_15 [i_2] = (var_11 - var_9);
                            var_23 = ((var_11 ? (arr_0 [i_4]) : (arr_0 [i_2])));
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] = (max(((max(1, var_19))), 182547609));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_1] = ((-(((arr_9 [i_0] [i_1] [9] [i_3] [i_0]) - (arr_4 [i_3] [i_2] [i_0])))));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_0] = (arr_6 [i_2] [i_2]);
                        }
                        var_24 = ((!((max((3131377803 - 1), (var_19 | var_3))))));

                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            var_25 = 1163589492;
                            var_26 = (arr_16 [i_6 - 4]);
                            var_27 = ((arr_22 [i_3] [i_1] [4] [i_3] [i_6 + 3] [i_1]) + var_10);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_28 = (max((((max((arr_5 [i_0] [i_1] [i_7]), 1)))), ((var_2 | (189 & 15103049866725353767)))));
                            var_29 = var_18;
                        }
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_30 = (max((max((arr_27 [i_2] [i_1] [i_2]), var_8)), var_5));
                        var_31 -= ((max(var_4, var_4)));
                        var_32 = (max((((max(var_9, 1163589466)) <= (((var_16 ? var_18 : var_9))))), (arr_3 [i_0] [i_1])));
                    }
                }
            }
        }
    }
    var_33 = max(((((var_8 - 1) + ((max(var_6, 61703)))))), ((-var_11 + (var_9 + 3131377803))));
    #pragma endscop
}
