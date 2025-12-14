/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((((!var_2) <= ((var_13 << (var_2 - 3346542901)))))) << (((min((min(var_4, var_2)), 6587227733519842670)) + 1781149776826869302)))))));
    var_21 = (min(var_14, ((1 / (min(var_0, var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_22 *= ((!(!-92)));
                            var_23 = (((((arr_4 [i_1] [i_1 - 1]) ? 3912086046 : (min(11588403400442505132, (arr_5 [16] [16] [i_3]))))) % var_0));
                            var_24 = (min(((min(var_4, var_1))), ((((arr_2 [i_0 + 2]) ? var_8 : (~127))))));
                            arr_12 [19] [i_1 + 1] [19] [i_1 - 1] = (!3837018503);
                        }
                    }
                }
                var_25 = 1772346676598667495;
                arr_13 [i_0] [i_0 - 1] = var_3;
            }
        }
    }
    #pragma endscop
}
