/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = (min((((3 ? -6392241229215523603 : (((-2 ? -4 : -6)))))), -126));
                                var_11 = (min(16077, ((-9 ? -890121414 : 23))));
                                var_12 = (max(((10666745348289902478 ? 17703671425442645962 : 32754)), (~6702461180479893801)));
                                var_13 = (((!-50) ? ((1932941180 ? 26265 : -890121414)) : -3));
                            }
                        }
                    }
                }
                var_14 = (min(-32762, (~-3)));
            }
        }
    }
    var_15 = var_3;
    #pragma endscop
}
