/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 *= ((!((((!1) * (!12281112326787517530))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_22 = (min(-4104416241756437458, (~-1468455741684025647)));
                                var_23 = (!1468455741684025637);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_24 = (((((~((1468455741684025642 ? 1580425945883435964 : var_3))))) ? (24108 && 16119) : (!14464027158789684892)));
                            var_25 *= ((!(!9745960247105415397)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
