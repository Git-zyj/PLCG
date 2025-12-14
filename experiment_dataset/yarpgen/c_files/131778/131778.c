/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_0 + 1] [i_1] = ((-6406133360566193708 ? ((~(min(var_5, (arr_7 [i_1] [i_1] [i_1]))))) : (min(((max(var_17, (arr_6 [i_0 + 1] [i_0 + 1] [i_2] [i_0])))), (min(4035225266123964416, (arr_0 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((min((min((arr_4 [i_4 + 1] [i_3 - 2] [i_0 + 1]), (arr_8 [i_3 + 3] [i_0 + 1]))), ((((arr_7 [2] [i_2] [2]) ? (arr_7 [16] [20] [16]) : (arr_7 [14] [i_0] [14])))))))));
                                var_19 = (min((((((9223372036854775807 ? 1 : 1)) & ((min((arr_6 [i_0] [i_1] [i_0] [i_1]), (arr_1 [i_1]))))))), (max((max(13244403904471902998, (arr_6 [i_4] [i_2] [i_1] [i_0]))), (20376 + 797559004)))));
                            }
                        }
                    }
                    var_20 = (((((var_2 << (((arr_10 [i_0 + 1] [i_0 + 1] [9] [i_0]) + 6442829494755763664))))) << (((arr_6 [i_2] [i_1] [i_0 + 1] [i_0]) - 25201))));
                    var_21 += ((((!((((arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_2]) ? 4035225266123964389 : 1))))) ? (arr_5 [i_0 + 1]) : (max((arr_13 [i_0 + 1] [i_1] [i_2] [i_2] [1]), (arr_13 [i_0 + 1] [i_1] [i_2] [i_2] [1])))));
                }
            }
        }
    }
    var_22 = (max(var_22, 14411518807585587199));
    var_23 = (-((var_0 - (min(var_17, var_6)))));
    #pragma endscop
}
