/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 ? ((max(4230189935, var_4))) : 3760688252323365897));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((+(((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_1 [i_1]))) + ((-10 ? -19 : (arr_1 [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] = (max((arr_5 [i_0]), (arr_9 [i_0])));
                                var_16 -= 279721187;
                                var_17 = (arr_11 [i_2] [i_3 - 1] [i_3] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
