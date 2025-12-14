/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 &= (((((((arr_7 [i_3] [0]) ? 1 : 0))) ? ((18 ? var_6 : var_9)) : (arr_10 [i_0] [i_0] [i_0] [i_0]))));
                            var_15 = ((var_3 ? ((min((18 != 252), (!-1754257570697630807)))) : (((!((min((arr_2 [i_0 - 1] [i_1]), -1))))))));
                        }
                    }
                }
                var_16 += (~0);
                var_17 = (min(((var_2 && (!var_7))), ((!(!16)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_18 *= (24 / (max(317, (max(324, -2177793302039262494)))));
                            var_19 = (arr_15 [0] [i_4] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_20 = (((20156 ^ -1) | var_6));
    #pragma endscop
}
