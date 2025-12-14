/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((((arr_2 [i_0]) ? (arr_2 [i_3]) : (arr_2 [i_1])))) ? var_14 : (((((arr_2 [i_0]) < (arr_2 [i_3])))))))));
                                var_21 = -2;
                                arr_14 [i_0] [i_1] [i_2] [i_3] [2] [i_1] = ((((((arr_8 [i_4] [i_3] [i_2] [i_1]) == (arr_8 [i_3] [i_1] [i_2] [i_3])))) | (arr_8 [i_0] [i_1] [i_4] [i_3])));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_22 = (~-2);
                    var_23 = 1073067871;
                    var_24 = var_15;
                    var_25 = arr_3 [i_0];
                }
            }
        }
    }
    var_26 = (min((((var_4 ? var_2 : var_12))), (((~-1073067877) ? ((var_5 ? var_18 : 2)) : (1073067881 && 88)))));
    #pragma endscop
}
