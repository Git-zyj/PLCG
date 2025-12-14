/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (min(var_17, (~-642386185)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (min((min((min(0, 1)), (min((arr_3 [i_0 + 3] [i_1]), (arr_4 [8] [i_1] [i_1 - 1] [i_0]))))), ((min((arr_1 [i_0 + 2] [i_0 + 3]), (arr_1 [i_0 + 2] [i_0 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 3] [i_0] [i_1] [i_1] [i_2] [10] [i_4] = (min((((arr_2 [i_1 - 1] [i_1]) ? (((arr_4 [i_1] [i_2] [i_3] [i_4]) ? var_3 : (arr_10 [i_3] [i_0] [i_0]))) : (((min((arr_4 [i_0] [11] [i_2] [i_3]), 90)))))), (~0)));
                                arr_12 [i_4] [6] [i_2] [i_0] [i_0] = -418435593;
                                var_19 = -91;
                                var_20 += (~1);
                            }
                        }
                    }
                    var_21 = arr_7 [i_0] [i_0 + 1] [i_1 - 1] [i_1 + 1];
                    var_22 = (min(var_22, ((min((max((arr_8 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]), -91)), (((-2147483647 - 1) ? (arr_8 [1] [i_0] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_8 [11] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))))))));
                }
            }
        }
        var_23 = (((((!((max(0, 5326))))))) - (((((-104 ? -1 : -104))) / var_15)));
        var_24 = (arr_5 [10] [i_0 + 2] [i_0 + 2]);
        arr_13 [i_0 - 1] [i_0 + 1] |= -226661754;
        var_25 += (!1762232766);
    }
    #pragma endscop
}
