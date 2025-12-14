/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (max(158, (min(3734149874, 1))));
    var_20 = 1;
    var_21 = -93;
    var_22 = (max(var_22, ((max(11798293551727138168, 8593417728213637157)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_23 += 5631;
                                var_24 = 8755807400612967616;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_25 = (min(var_25, -8593417728213637170));
                            arr_20 [8] [8] [8] [i_0] [i_5] [i_6] = 1;
                            var_26 += (min((min(16383, 8063959400218028493)), 1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
