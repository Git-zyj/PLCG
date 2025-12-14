/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = 166;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [6] |= var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_2] [i_0] [i_2 + 2] [i_2] [i_0] = (((!1) ? ((((max(var_5, 1364717383))) ? ((max(25803, 32321))) : ((min(10555, var_7))))) : -11651));
                                arr_13 [i_2] [i_1 - 1] [i_2] [i_3] [i_4] [i_1 - 1] = 31768;
                                arr_14 [i_2] = (max(var_12, ((1 ? (1 || 31756) : (!var_8)))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((~(arr_2 [i_4 + 1] [i_2 + 3] [i_0])))) ? var_6 : var_10);
                                arr_16 [i_4] [i_4] [i_2] [i_2] [i_1] [i_0] = ((((((arr_9 [i_1] [i_4 - 1]) ? -1447874671 : (arr_9 [i_4 - 1] [i_4 - 1])))) ? ((((min(4584302506471002185, -1186755260))) ? (max((arr_9 [i_0] [i_4]), var_6)) : 31755)) : ((((!(((var_10 ? (arr_11 [i_0] [i_1] [i_2 - 1] [i_0] [i_4]) : -31749)))))))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [i_2] = (((((arr_11 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2] [i_2 + 2]) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_2 - 1]) : 1156333864))) ? ((min(var_14, 178))) : (~1));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 -= (max((((~((var_14 << (((-863506127 + 863506147) - 8))))))), ((~(min(3980418081, -31756))))));
                                var_18 = ((44013 || (((-2755 ? ((max(var_4, (arr_8 [i_6] [i_6] [i_5] [i_6] [i_0] [i_0])))) : (((arr_23 [i_2] [i_2] [i_2 + 3] [i_2] [i_0]) ? (arr_8 [i_6] [i_1] [i_2] [i_1] [i_1] [i_0]) : (arr_2 [i_1] [i_1] [i_1]))))))));
                            }
                        }
                    }
                    var_19 |= ((((max(314549214, -1186755275))) ? ((var_8 ? ((var_11 - (arr_5 [i_0]))) : (max(358606551, var_11)))) : (((((var_0 ? var_4 : -863506127)) - -31757)))));
                }
            }
        }
    }
    var_20 = ((((max((max(var_2, 1)), var_6))) ? var_10 : (!31728)));
    var_21 = ((!(var_9 < var_10)));
    #pragma endscop
}
