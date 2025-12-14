/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(((max(var_8, ((max(var_4, var_4)))))), (((~var_6) ^ (~1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 |= ((~(var_7 && var_3)));
                                var_17 &= ((-((var_3 ? (arr_3 [i_0] [i_4]) : var_5))));
                                var_18 = (max(((min(0, 1))), (((arr_7 [i_1]) ? (arr_6 [i_4] [i_1]) : var_11))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] [i_1] = ((!(arr_13 [i_0] [i_0])));
                                var_19 = -8492308975546417296;
                            }
                        }
                    }
                }
                var_20 = (max(var_7, (((~255) ? ((~(arr_3 [i_0] [i_1]))) : (~255)))));
                var_21 = (min(var_21, ((((~var_11) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
