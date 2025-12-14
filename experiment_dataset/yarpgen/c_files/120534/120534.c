/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((~-74) % var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((var_3 ? (min(1, -9118638777137807733)) : ((((((1 ? var_9 : 11))) ? -91 : 9429)))));
                var_21 = ((((min(var_17, (6442201258262304105 > -3574868182679051571)))) ? var_9 : ((((16316 % 28487) > 0)))));
                arr_4 [i_1] = (arr_0 [i_1 + 2]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [6] [i_1] [i_2] [12] = var_16;
                            var_22 += (((((max(-15, -6)))) % ((161 ? var_15 : (arr_5 [i_1 + 3] [i_1 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_23 = 49219;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_24 = ((~(1 % var_18)));
                    arr_18 [i_4] [i_5] [i_5] [i_5] = (max(16317, -0));
                    arr_19 [8] = ((((1894248449 ? 22668 : 22662)) % ((var_14 ? 264349990 : (arr_0 [i_4])))));
                }
            }
        }
    }
    #pragma endscop
}
