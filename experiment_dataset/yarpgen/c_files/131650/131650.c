/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 *= 47704;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [6] [6] [1] = (14936828435956360202 ? (max(3509915637753191413, 918243135)) : var_15);
                    var_19 = ((((max(14936828435956360202, 3509915637753191414))) ? ((((871894267 ? (arr_9 [i_0] [i_0] [5] [i_2]) : var_16)))) : ((16553779869627254661 ? (arr_6 [i_2]) : (arr_6 [i_1])))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_20 = (max(((max((arr_11 [i_3 + 1] [i_3 + 4] [i_3 - 1] [i_3 + 4] [i_3 + 4] [18]), var_2))), (((arr_11 [i_3 + 3] [i_3] [i_3 + 3] [1] [5] [i_3 + 3]) ? (arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_0 [i_3 + 2])))));
                            var_21 = 14936828435956360214;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_22 = (max((max((max(var_0, var_16)), var_3)), ((((arr_11 [i_0] [i_3 + 4] [i_0] [6] [18] [9]) ? (175 | 204) : (!var_5))))));
                            arr_21 [i_0] [i_0] [i_1] [12] [i_3] [i_5] [i_5] = (arr_17 [i_0] [i_1] [i_2]);
                        }
                        var_23 = arr_8 [i_0] [5] [17];
                    }

                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_24 = 3840;
                            arr_28 [i_2] [1] [1] [1] [1] [1] |= (((arr_26 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1] [i_6]) == 81));
                        }
                        arr_29 [i_6 + 2] [i_1] [i_2] [i_1] [11] = var_3;
                        arr_30 [8] [i_2] [1] = ((min(var_1, (((var_1 ? var_8 : (arr_18 [i_6 + 1] [i_6] [i_0] [i_1] [i_0])))))));
                    }

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_25 = ((var_1 ? (~4503599358935040) : ((((var_11 <= (arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] [i_8])))))));
                        arr_35 [i_8] [7] = ((+((var_5 ? (((max((arr_19 [17] [i_1] [i_1] [3] [i_1] [i_1]), var_13)))) : (var_10 / var_10)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
