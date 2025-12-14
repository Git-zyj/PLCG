/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ^ ((((max(68821701, var_9))) + (max(var_6, 4467))))));
    var_12 = min(var_2, (var_9 != var_7));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((~-32755) ? (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_4]) ? ((15 ? var_8 : 1)) : (((0 ? (arr_15 [i_0] [i_1]) : var_9))))) : (((var_6 ? (arr_0 [i_0 - 3]) : (130 >= 16264413574473394384)))))))));
                                var_14 = (arr_2 [i_0 + 2] [i_0 + 2]);
                            }
                        }
                    }
                }
                var_15 &= (max(((var_5 / ((68821701 ? var_6 : var_3)))), (arr_4 [i_1 - 2] [i_1])));
                var_16 = 1;
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_17 = (min((((((var_9 ? var_8 : var_0)) >= (((var_2 ? 1081766676 : (arr_0 [i_0 - 3]))))))), 0));
                                arr_25 [i_0] [i_0 - 2] [i_0 + 1] [i_6] [i_0 - 3] &= (!var_4);
                                arr_26 [i_5] [i_1] [i_1] [i_6] = (((var_5 ? var_5 : var_2)));
                            }
                        }
                    }
                }
                var_18 ^= (!var_2);
            }
        }
    }
    #pragma endscop
}
