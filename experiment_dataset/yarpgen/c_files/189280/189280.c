/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((((((var_11 ? var_0 : var_2))) ? var_6 : (max(var_11, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [2] [9] [i_4] = (!(!4044378815083427644));
                                arr_14 [i_0] = ((((-((3076124766406247331 ? 4044378815083427644 : (arr_11 [i_0] [i_1] [i_3])))))) ? 14402365258626123971 : (4044378815083427645 > 1));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_14 = (((max(0, 2147483647)) / (((arr_22 [i_1] [i_1 + 3] [i_5] [i_5] [i_5 - 1] [i_7 - 1]) ? (arr_23 [i_1] [i_1 + 2] [i_5]) : 0))));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_9 [i_0] [i_5 + 2] [i_1 - 1] [i_6]), (arr_22 [i_0] [i_5 - 1] [i_1 + 1] [i_1] [i_7] [i_7 - 2])))) ? ((-445562168 ? 0 : (arr_22 [i_0] [i_5 + 2] [i_1 - 1] [i_0] [i_0] [i_7 - 2]))) : ((-(arr_22 [i_7 + 1] [i_5 + 2] [i_1 - 1] [8] [i_1 - 1] [i_7 + 1])))));
                            }
                        }
                    }
                }
                var_15 = (((3351401024 & ((max(var_4, var_7))))));
                arr_25 [5] [i_1] = (min((var_2 >= 841934390), (((((arr_3 [i_0]) && var_11)) ? (((var_12 ? var_1 : var_8))) : (~4599511157014020440)))));
            }
        }
    }
    #pragma endscop
}
