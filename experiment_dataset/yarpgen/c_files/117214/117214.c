/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_15 = arr_7 [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (arr_12 [i_1] [i_1]);
                                var_17 = ((var_6 ? (min((arr_13 [i_3 + 1] [i_1] [i_2] [i_1] [i_2 - 2]), 1)) : ((((arr_8 [i_3 + 1] [i_3 + 1] [i_2 + 3]) + 1)))));
                                arr_15 [i_1] [i_1] [i_1] = ((!((max(((((arr_5 [i_1]) ? var_7 : 1))), (arr_11 [i_0] [i_0] [i_0] [i_0] [9]))))));
                                arr_16 [i_1] [i_1] [i_1] = (min(((max(-1626782594, 1))), (arr_12 [i_1] [i_1])));
                                arr_17 [i_0] [i_0] [i_1] [i_0] = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]);
                            }
                        }
                    }
                    var_18 = ((!1) ? ((((arr_10 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2]) ? (arr_10 [i_2 + 2] [i_2 + 2] [i_2] [5]) : (arr_10 [i_2 + 3] [2] [i_2] [5])))) : (max((arr_13 [i_0] [i_1] [i_1] [i_2 + 3] [1]), (arr_13 [i_0] [i_1] [i_1] [i_2 + 1] [i_0]))));
                    var_19 += var_10;
                }
            }
        }
    }
    var_20 = ((-(((((var_0 ? var_5 : 296370581))) ? var_11 : (max(var_2, var_4))))));
    #pragma endscop
}
