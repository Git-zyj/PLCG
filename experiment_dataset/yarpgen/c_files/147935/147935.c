/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (610381667605754970 ? (((!((((arr_5 [i_0] [i_0] [i_0]) ? (arr_3 [i_0]) : 610381667605754978)))))) : 50591);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3] [i_0] [i_3] [i_0] = (arr_4 [i_0]);
                                var_18 = (max(-64, 268435456));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 522174977;
    var_20 += var_0;
    #pragma endscop
}
