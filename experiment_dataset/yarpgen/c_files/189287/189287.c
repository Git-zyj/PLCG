/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -2082517817969299331;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = var_3;
                                arr_14 [i_2] [i_2] [i_0] [i_0] [i_0] = (min((max((max(2082517817969299331, var_9)), 527154145)), var_2));
                                var_15 = ((!((min((arr_13 [i_4 - 1] [i_1] [i_1 + 1] [i_3] [i_1] [12] [i_3]), (arr_13 [i_4 + 2] [16] [i_1 - 1] [i_1] [i_4 + 3] [i_4] [i_0]))))));
                            }
                        }
                    }
                }
                arr_15 [2] = -2082517817969299331;
            }
        }
    }
    #pragma endscop
}
