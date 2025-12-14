/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (arr_1 [i_1 + 1] [i_1]);
                arr_7 [i_0] [i_1 + 4] [i_0] = max((arr_0 [i_0]), (arr_1 [i_0] [13]));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1 + 4] [i_2 + 4] [i_0] [i_3] [4] = arr_9 [i_1 + 3] [20] [i_3] [i_4];
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_16 [i_1 + 1] [i_1] [i_2] [i_2] [i_2 + 4] [i_2 + 2]) != ((((arr_16 [i_1 + 1] [i_1] [i_2] [i_2] [i_2 - 1] [i_3]) && (arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_2]))))));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_3] = ((((((max(var_8, (arr_13 [i_0]))))) <= (max((arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2]), var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = (max(((max(var_9, var_0))), (((((var_8 ? var_4 : var_4))) ? var_8 : var_0))));
    #pragma endscop
}
