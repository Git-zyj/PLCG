/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = ((((max((!var_3), (min(var_10, var_14))))) ? (!var_7) : ((max((!var_10), var_13)))));
    var_18 = ((!(((~(!var_6))))));
    var_19 = (min(var_15, var_14));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] [i_0] [i_3] [i_3] = ((~((((max(var_0, var_4))) ? (!var_14) : -57751))));
                        var_20 *= var_7;
                        var_21 = (max(var_21, ((~(((~22) << (var_7 - 2290140304)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? ((((max((arr_5 [i_0]), var_7)) >> (((arr_5 [i_0]) + 7145259345655240594))))) : ((((max((arr_5 [i_0]), var_7)) >> (((((arr_5 [i_0]) - 7145259345655240594)) + 2870367353030469092)))));
                        arr_12 [9] [i_1] [i_0] [i_3] = ((!(arr_0 [i_1] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_2] = ((var_2 ? var_13 : -var_4));
                        arr_16 [i_4] [i_0] [i_0] [i_0] = var_4;
                        var_22 = (((((var_3 ? (arr_5 [i_0]) : var_0))) ? (arr_9 [i_1] [i_0] [i_2 - 1] [i_1]) : (!var_1)));
                        arr_17 [0] [i_0] [i_2] = (((!var_13) ? (var_12 * var_15) : (arr_3 [i_0])));
                    }
                    arr_18 [i_0] [i_0] [i_0] = var_11;
                    var_23 = ((((max(((min(var_14, var_1))), ((var_13 ? var_11 : var_0))))) ? (max((arr_2 [i_0 + 2]), (arr_8 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2]))) : var_3));
                    arr_19 [i_1] &= var_6;

                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        arr_23 [i_5] [i_0] [i_0] [1] = (max(((min(var_10, var_2))), ((var_5 ? (!var_6) : var_0))));
                        var_24 = (!7791);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_2] = -var_6;
                        var_25 = (arr_13 [i_0] [i_0] [i_6] [i_1] [i_1]);
                        arr_28 [i_0] [i_1] [i_2] [i_0] [i_2] [i_6] = -57751;
                    }
                }
            }
        }
    }
    #pragma endscop
}
