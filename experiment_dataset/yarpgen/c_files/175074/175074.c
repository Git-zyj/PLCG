/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, 1125899906842624));
                                var_21 = ((+(((arr_7 [i_0] [i_0]) ? (!-47) : ((min(73, var_1)))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] = (max((((((~(arr_0 [i_0]))) ^ (9725 | 6570)))), (((arr_9 [i_0] [i_1] [i_2] [i_2]) ? (arr_9 [i_0] [i_1] [i_2] [i_1]) : (arr_10 [i_0] [i_0])))));
                    var_22 += (arr_9 [i_2] [8] [i_1] [i_0]);
                }
            }
        }
    }
    var_23 = (min(((var_7 ? (!var_19) : var_18)), (((var_15 < (!var_18))))));
    #pragma endscop
}
