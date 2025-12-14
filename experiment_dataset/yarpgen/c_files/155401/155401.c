/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((var_2 ? (var_2 & var_7) : var_8))) ? (((((var_10 ? var_10 : var_6))) ? ((var_7 ? var_10 : var_8)) : ((var_7 ? var_1 : var_9)))) : (((((var_7 ? var_5 : var_12)) > var_4))));
    var_14 = (max(var_14, var_4));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_11 [14] [14] [i_1] [i_1] [i_1] [i_3] [10] = (((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1]) | ((((((arr_10 [0] [i_1] [0] [i_0] [i_2 + 3]) ? (arr_8 [8] [i_3]) : var_1))) ? ((var_7 & (arr_0 [i_0]))) : var_10))));
                                arr_12 [i_1] [i_3] [i_1] = (((arr_1 [i_0] [i_0]) && (((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) != var_9))))));
                                var_15 -= (((arr_8 [i_3] [i_3]) >> ((((var_0 ? (arr_1 [i_0] [i_0]) : (var_5 && var_0))) - 11567036214352334602))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_1] = (((arr_0 [i_0]) == ((((74 ? 31418 : 180))))));
                }
            }
        }
    }
    var_16 = (max(var_16, ((((((((var_12 ? var_8 : var_2))) ? ((var_2 ? var_3 : var_2)) : var_4))) ? (((((var_8 ? var_9 : var_12))) ? ((var_3 ? var_1 : var_12)) : (var_3 < var_6))) : var_12))));
    #pragma endscop
}
