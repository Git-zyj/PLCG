/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_11, (arr_3 [i_2])));
                            arr_9 [9] [i_2] [i_2] [i_2] [i_1] [i_0] = 239926302;
                            arr_10 [i_3] [i_2] = (((0 && 1) ? ((var_3 ? 1847286115 : 3063599731362983996)) : (((arr_6 [i_0] [i_1] [i_2] [i_2]) * (min(255, (arr_1 [0])))))));
                            var_15 -= var_4;
                        }
                    }
                }
                var_16 |= (((((((var_11 ? (arr_1 [8]) : (arr_8 [i_0] [i_0] [i_0] [i_1]))) <= (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) | 0))))) / ((0 - (arr_5 [i_1] [i_0])))));
                arr_11 [i_1] [i_0] &= (~1);
            }
        }
    }
    var_17 = 11232301517889467079;
    var_18 = (max(((~((378086028 ? var_9 : var_12)))), var_12));
    #pragma endscop
}
