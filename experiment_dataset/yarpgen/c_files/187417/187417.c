/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (arr_0 [i_0 + 1] [i_0 + 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [9] [i_2] [i_3] [0] [i_4] = var_18;
                                arr_14 [i_3] [i_2] [6] [i_3] [i_0] = ((((18446744073709551615 != var_7) ? ((29178 ? var_15 : var_2)) : ((2670543918 ? 1624423377 : 18133074893634040800)))));
                            }
                        }
                    }
                }
                var_21 = (((~var_2) || ((min(var_9, (arr_12 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2] [i_1]))))));
                var_22 = (max(var_22, (((137438953472 ? ((min(1624423377, ((min(0, 1961812778)))))) : 4715651022704086489)))));
            }
        }
    }
    var_23 |= var_12;
    var_24 = var_19;
    #pragma endscop
}
