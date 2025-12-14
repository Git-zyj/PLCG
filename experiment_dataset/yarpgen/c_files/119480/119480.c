/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 < (((~(!0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1 - 1] [i_1] = (3543054632 ^ 0);
                            var_15 = (!var_7);
                        }
                    }
                }
                var_16 -= ((!(((((arr_6 [i_1] [12] [6] [12]) ? (arr_1 [i_0] [i_1 - 1]) : 248)) <= ((min((arr_1 [i_0] [i_1]), var_5)))))));
            }
        }
    }
    var_17 = (!var_3);
    var_18 = ((~(((max(var_12, var_1))))));
    var_19 = var_2;
    #pragma endscop
}
