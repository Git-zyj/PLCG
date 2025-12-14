/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 &= 9727653050936201236;
                                var_19 = (min(-1546814482804936851, -1546814482804936851));
                                var_20 = (min(((max(127, 1546814482804936851))), (min(127, ((1546814482804936851 ? -1546814482804936863 : -1546814482804936847))))));
                            }
                        }
                    }
                }
                var_21 = min(-110, -97);
            }
        }
    }
    var_22 = var_15;
    var_23 = var_13;
    #pragma endscop
}
