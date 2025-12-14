/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [15] = ((var_15 + (((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [7] [i_3] [i_4] [i_2] [4] = (((arr_14 [i_2]) - (((arr_5 [i_2] [i_1] [i_0]) ? (arr_5 [i_0] [i_0] [i_2]) : var_7))));
                                arr_17 [i_0] [i_0] [i_4] [i_3] [i_1] [i_1] = ((((min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_4] [i_3] [i_2] [16] [i_0])))) && (((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_16 = ((max((arr_13 [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0] [12] [i_1] [i_2]))));
                }
            }
        }
    }
    var_17 = (max(var_11, ((var_13 & (var_14 % 121)))));
    #pragma endscop
}
