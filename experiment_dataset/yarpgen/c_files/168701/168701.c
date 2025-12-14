/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (min((((!var_17) ? var_11 : 1)), 1));
                                var_19 = (!28066);
                                var_20 = (max((4968756403879059612 ^ 1), ((min(1, 1)))));
                            }
                        }
                    }
                    var_21 = var_12;
                }
            }
        }
    }
    var_22 = (max(var_22, (min(((((min(1507362404, 0)) - (1 & 1)))), (min((!var_2), ((1 ? 1 : var_12))))))));
    #pragma endscop
}
