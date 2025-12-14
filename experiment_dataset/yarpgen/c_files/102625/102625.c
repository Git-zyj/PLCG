/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((((max((arr_3 [i_0]), (min((arr_1 [i_0]), (arr_3 [i_0])))))) ? (arr_2 [15]) : 60252));
                    var_10 = var_3;
                    arr_10 [i_1] [i_1] = ((((!((((arr_7 [14]) / var_6))))) ? ((((!(var_4 && var_0))))) : var_8));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_11 *= (arr_13 [i_3 - 1]);

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_12 = (max(var_12, ((min(((~(min(var_4, (arr_12 [i_5] [i_5]))))), (arr_12 [i_5] [i_3 - 2]))))));
                    var_13 = (arr_14 [i_3 - 2] [i_4]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_14 = (min((((arr_12 [i_3] [i_6]) ? (arr_15 [i_3 - 3]) : var_3)), (((var_3 ? 91614853 : (arr_11 [i_3] [i_3]))))));
                                arr_21 [i_7] [i_6] [i_3] [9] [i_3] [i_3] [i_3] = (arr_18 [i_3] [i_4] [i_7] [1] [i_7] [i_6]);
                                arr_22 [i_3] [i_3] = ((10596 ? 56 : (-127 - 1)));
                                var_15 -= (max((max(6367, (arr_18 [i_3 - 1] [i_3 - 1] [i_4] [i_5] [i_6 + 1] [i_7]))), var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
