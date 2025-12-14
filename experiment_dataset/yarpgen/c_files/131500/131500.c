/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((min((0 | var_1), 242))) ? (((var_7 ? var_9 : var_4))) : (((((var_3 ? var_8 : var_6))))));
    var_11 = (max(var_11, ((var_6 ? (min(((var_2 ? var_9 : var_0)), var_0)) : var_1))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_12 = ((~((-var_6 ? 0 : (-1 | 1)))));
        arr_3 [i_0] = ((~((var_1 ? var_3 : 135))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (arr_0 [9] [i_0 - 2]);
                    arr_9 [i_1] [i_1] [2] = (((((-32764 | -1) ? 32084 : 0)) / ((-(254 | var_5)))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_0 - 3] [i_1] [11] [i_2] [i_3] = (arr_1 [i_2]);
                        arr_14 [i_0] [i_1] [i_0] [i_0 + 1] = ((~(arr_8 [i_3 - 1] [i_3 - 1] [17] [i_0 + 1])));
                        var_14 = (min(var_14, (((var_9 | ((((arr_8 [i_0] [i_1] [i_2] [i_3]) ? ((-(arr_4 [i_1] [12] [i_3 + 2]))) : -0))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_15 = -var_9;
                        var_16 = (arr_0 [i_0 - 1] [i_4 - 1]);
                    }
                    arr_17 [2] [i_0] [16] |= ((((((((arr_5 [9]) + 39))) ? (min(-348433605, (arr_2 [i_2]))) : 0))) ? ((13 ? (254 | 80) : (min(var_2, var_9)))) : (min(((var_9 ? var_7 : var_3)), 137)));
                    arr_18 [i_1] [i_1] [i_1] = var_0;
                }
            }
        }
        var_17 = ((var_2 ? (((min(-7, -3)))) : (((arr_4 [i_0 - 1] [0] [i_0 - 3]) << (((var_6 + 137) - 42))))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_22 [i_5] |= (+((var_9 ? (max((arr_19 [i_5] [i_5]), var_1)) : ((((arr_21 [0]) ? var_6 : (arr_19 [i_5] [i_5])))))));
        var_18 = (min(((((((var_2 ? (arr_21 [i_5]) : -7753680306611015025))) ? var_6 : 7753680306611015002))), (arr_20 [i_5])));
        arr_23 [i_5] = (((((var_7 ? var_8 : 32064)))) ? (min((arr_21 [i_5]), 12886877465697020508)) : ((min(1644104171353453030, var_5))));
    }
    var_19 = ((~0) / -28692);
    #pragma endscop
}
