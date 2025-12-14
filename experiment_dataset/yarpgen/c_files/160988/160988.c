/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_15 - var_19);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [i_0] = (arr_2 [i_0] [i_1]);
                                arr_16 [i_4] [i_4] [8] [i_0] [i_4] = arr_11 [i_0] [i_1] [i_2] [i_0];
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((0 ? (arr_4 [i_0] [i_0]) : (arr_12 [0] [i_3] [0] [i_1] [5] [i_0] [i_0])))) ? ((max(1, 1))) : (((min(1, (!var_2)))))));
                            }
                        }
                    }
                    arr_18 [i_0] [4] = var_14;
                    var_21 = (min(var_21, ((max((max((((var_11 ? (arr_8 [i_1]) : var_8))), ((-(arr_4 [i_2] [i_2]))))), (arr_9 [i_1 + 1] [6] [i_1 - 3] [i_1] [i_1]))))));
                    arr_19 [10] [i_0] [i_0] [i_0] = var_17;
                    arr_20 [i_0] [10] [9] [i_2] = (arr_5 [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
