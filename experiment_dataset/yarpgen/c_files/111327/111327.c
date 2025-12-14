/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 25;
    var_17 &= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = 16458241361211799006;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((((18119401230578665581 - var_15) ? 20 : ((var_12 ? 42161 : 327342843130886034)))) + ((((var_7 ? 244 : 211)))));
                            var_19 = (((!var_7) * var_8));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
