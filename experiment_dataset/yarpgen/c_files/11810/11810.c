/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 60687;
    var_18 = ((var_7 ? var_4 : ((min(var_9, (var_4 >= var_16))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (max(-22467, (max(var_13, var_6))));
                    var_20 = ((((min((arr_0 [i_2] [i_1]), (((arr_0 [i_2] [i_1]) ? (-127 - 1) : 5))))) ? (arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2]) : ((((!(!-22458)))))));
                    var_21 *= (((!1023) >= ((min((!22466), (!-120))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = max(((2 ? 4 : 1023)), (52088 >= var_16));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = (arr_5 [i_0] [i_1] [2] [i_4]);
                                arr_14 [i_0] [i_0 + 2] [i_1] [i_0] [i_2] [9] [i_4 - 2] = (((((0 ^ ((11039 ? var_11 : 59357))))) ? 4431212635356450753 : 3));
                                var_22 = -20346;
                                arr_15 [i_0] [i_1] [i_2 - 2] [i_3] [i_4] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_8;
    #pragma endscop
}
