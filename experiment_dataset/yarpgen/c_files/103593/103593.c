/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? var_3 : (((!(-1708387932261787692 && var_11))))));
    var_16 = (min(var_2, -31071));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_3 [i_0] [i_0]);
                arr_6 [i_0] [i_1 + 1] [i_0] = ((((((arr_3 [i_0] [i_1 + 2]) ^ (-127 - 1)))) ? -25433 : 55));
                var_17 = (!var_13);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = ((62496 * ((((arr_11 [i_0] [i_0] [i_3] [i_0]) | var_0)))));
                                var_19 = var_9;
                                var_20 = max((!15682852972072710070), var_4);
                                var_21 = (max(((min(((21090 ? 35118 : 2177040359)), -3156))), 14479492294226092831));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 2727641771193054807;
    #pragma endscop
}
