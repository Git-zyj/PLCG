/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 620502712538670103));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = ((((((((-1930187861 ? 620502712538670114 : 111))) ? 0 : ((1 ? 2874135411513869789 : (-32767 - 1)))))) ? ((-1 ? 7246 : 77)) : (((((0 ? 0 : 11)))))));
                        var_17 = 1591219501;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_18 = (((-620502712538670115 ? 54433 : 1795401800)));
                                arr_17 [i_5] [i_4] = 54043195528445952;
                                var_19 = ((((201 ? -1595677584 : 54433))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
