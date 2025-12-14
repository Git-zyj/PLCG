/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (((min((arr_4 [i_0 + 1] [i_1]), (arr_5 [i_0 - 1] [i_0] [i_0 + 2]))) % (~36760)));
                    var_21 = (!var_2);
                    var_22 = 28;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [10] [i_4] [10] [i_2] = var_19;
                                arr_13 [i_2] = var_3;
                                arr_14 [i_2] = (((((~((39064 | (arr_4 [i_4] [i_0])))))) ? ((~((2129929146059637606 ? 36782 : 11230)))) : 16605));
                                arr_15 [i_2] [i_1] [i_2] [i_2] = (~22170);
                                var_23 = ((((var_11 != (arr_11 [i_2]))) ? (min(var_3, (arr_11 [i_2]))) : (arr_11 [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (var_1 > var_13);
    var_25 -= ((-(((!28753) * (28775 || var_16)))));
    #pragma endscop
}
