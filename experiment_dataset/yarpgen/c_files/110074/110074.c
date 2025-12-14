/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = 117;
                    var_17 = max((max(32767, var_8)), -117);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_18 = var_9;
                                var_19 ^= 133955584;
                            }
                        }
                    }
                    var_20 ^= (max(100, var_10));
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
