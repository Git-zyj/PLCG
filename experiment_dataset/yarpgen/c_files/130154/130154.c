/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((-(!var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (+-237)));
                var_14 = ((!(((-(~var_1))))));
                var_15 = ((~(--627229918894242450)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 = ((!(--16060358743426225379)));
                            var_17 = (max(var_17, (!-22213)));
                            var_18 = (max(var_18, (((!(!var_6))))));
                            var_19 = (!-1932815757);
                        }
                    }
                }
            }
        }
    }
    var_20 = 1906544408;
    #pragma endscop
}
