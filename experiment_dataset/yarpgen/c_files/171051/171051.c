/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [9] [i_2] [i_2] = (((min((((-32767 - 1) * 20277)), ((max(var_1, var_0)))))) ? (((arr_7 [i_2] [i_2] [i_2] [i_0]) ? (arr_9 [13] [i_3 + 1] [i_3] [8] [8] [i_2]) : var_9)) : (arr_0 [i_0]));
                            var_15 = ((8191 ? (min(((min(var_8, var_13))), (arr_6 [i_3 + 1] [i_3 + 1] [i_2]))) : (((min((arr_7 [i_3] [i_3] [i_3 - 1] [i_3 - 1]), (arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))))));
                            var_16 &= (var_12 + var_9);
                            var_17 &= (var_5 ? (min((arr_3 [i_0] [i_0] [i_0]), ((max(var_8, var_9))))) : (var_12 < var_5));
                        }
                    }
                }
                var_18 = (max((max(var_3, var_4)), (((var_12 ? (arr_1 [i_0]) : var_13)))));
                arr_11 [i_0] [i_1] = var_3;
                var_19 = ((var_12 ? (((min(var_12, var_3)))) : (min((arr_6 [10] [i_1] [i_1]), var_14))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_4] &= (min(-43, (~44)));
                    var_20 = (((min(((var_1 ? (arr_2 [i_0]) : (arr_4 [i_1]))), (((arr_8 [10] [i_0] [i_0] [14] [i_0] [i_4]) ? (arr_4 [i_4]) : var_11))))) ? ((((194 ? (-32767 - 1) : 8629)))) : ((((min((arr_7 [i_0] [10] [6] [10]), 16928))) ? (arr_6 [i_0] [i_1] [i_1]) : (11815 || 7))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 = (min(var_21, (max((((-5834 ? (-127 - 1) : 194))), (min((arr_4 [i_1]), var_5))))));
                                var_22 = ((min(var_5, var_7)));
                                var_23 &= (min((min((min(var_6, -1)), (((var_0 ? var_12 : (arr_16 [i_0] [14])))))), (((var_2 ? (arr_5 [i_0] [4] [i_0] [i_0]) : (arr_20 [i_0] [i_0] [i_0] [13] [i_0] [i_0] [i_0]))))));
                                arr_21 [1] [i_6] [i_7] [1] [1] = var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_24 = (arr_26 [i_0] [i_1] [i_5] [i_8] [i_8]);
                                var_25 = ((((arr_8 [i_0] [i_1] [i_1] [i_5] [i_8] [i_9]) ? var_3 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_26 &= var_12;
                                var_27 &= (max((arr_15 [i_8] [i_8] [i_0]), ((max(var_7, var_13)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = min(var_3, var_1);
    var_29 &= (((max(var_7, var_7))) ? (max((min(var_5, var_4)), (((var_6 ? var_5 : var_2))))) : ((((max(var_2, var_7))) ? (var_6 + var_6) : (((var_9 ? var_8 : var_10))))));
    #pragma endscop
}
