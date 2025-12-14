/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 254;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = 255;
                            var_16 -= 1048575;
                            var_17 *= (max(((min(73, -56))), (min(2240343220, -1512256777))));
                        }
                    }
                }
                var_18 = min(((min(104, -105))), -19443);
                var_19 = 6752;
            }
        }
    }
    #pragma endscop
}
