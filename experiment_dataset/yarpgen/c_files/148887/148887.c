/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((-((107 ? var_7 : var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_0 [i_0 - 1])));
                                var_19 = (max((max((((arr_13 [i_0] [i_1] [i_2] [2] [i_4]) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) : var_6)), ((min((arr_14 [i_4] [i_3] [i_2] [i_1 - 2] [i_0 - 3]), (arr_14 [i_4] [8] [i_2] [i_1 + 2] [i_0])))))), (arr_11 [i_0])));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((107 & (((~var_15) ? var_13 : var_12))));
                    var_20 = ((-(min(-var_9, (((var_12 || (arr_14 [i_0 - 2] [i_1] [i_2] [i_1] [i_1 + 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
