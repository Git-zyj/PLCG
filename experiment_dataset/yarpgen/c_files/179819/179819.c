/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(var_5, 8799724848082243716))) ? (max(17179869183, var_12)) : (!0))) / ((-(max(var_12, var_6))))));
    var_17 = (min(var_17, (((!((((((var_3 ? var_13 : var_9))) ? (max(-17179869193, var_2)) : (~-11)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = ((-((-(max(var_13, 10607))))));
                    var_19 = (max(((var_14 >> (((max((arr_8 [i_2] [i_2] [i_0] [i_0]), var_3)) - 3114113490)))), (((~(7375630957033808955 != -29745))))));
                    var_20 = (((((var_2 + var_6) ? ((((arr_3 [i_0]) ? 36786 : var_3))) : ((17179869163 ? 1583032499 : 2147483647)))) - (((((max((arr_4 [i_2] [i_1]), 0))) + ((var_15 - (arr_7 [i_0]))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = (-(max(((max(232, -8799724848082243711))), 72057594037927935)));
                    arr_18 [i_4] [i_4] [i_4] = (65524 && -2147483633);
                    arr_19 [i_5] [i_4] [i_4] |= (((((-(!1332427924)))) ? (((max((arr_8 [i_5] [i_5] [i_5] [i_5]), -1)) / (((arr_8 [i_3] [i_3 + 2] [i_3] [i_3]) / var_10)))) : 10));
                }
            }
        }
    }
    var_21 = (max(var_21, ((~((~(!46185)))))));
    #pragma endscop
}
