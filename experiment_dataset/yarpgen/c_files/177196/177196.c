/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = max((((var_8 ? var_11 : var_18))), ((max(var_8, (!1046393981)))));
    var_22 = (min(var_22, ((((~var_6) <= ((max(var_4, (var_17 >> var_11)))))))));
    var_23 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [i_1] [i_0] = (min((((var_15 / var_11) ? 15816 : var_4)), (((max(var_12, var_4))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_24 = ((((max(var_14, (min(var_16, var_11))))) * (~var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((((min(var_19, var_17)))) > var_15))));
                                var_26 = (max(var_26, (((~((((var_7 && var_7) || (((-1133483698 ? 4080 : -2)))))))))));
                                var_27 = var_8;
                                arr_17 [i_0] = (min(var_0, (((!(!-2))))));
                            }
                        }
                    }
                    arr_18 [i_0 + 3] = (!-var_7);
                }
                var_28 = (min(var_28, (((~(max(var_7, var_13)))))));
                arr_19 [i_0] [i_1 - 1] = (var_2 & var_13);
            }
        }
    }
    #pragma endscop
}
