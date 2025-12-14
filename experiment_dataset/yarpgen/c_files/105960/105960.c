/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-var_11 ? (min((((2321491217719326924 ? var_3 : var_9))), var_8)) : ((((!(((var_5 ? 68348378 : var_4)))))))));
    var_15 = ((68348378 ? (~2321491217719326925) : var_3));
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 |= -2321491217719326925;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (min(2321491217719326925, 2321491217719326920))));
                            var_19 = ((((min(-3467221449323839587, 61618))) && (-2321491217719326939 > 1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
