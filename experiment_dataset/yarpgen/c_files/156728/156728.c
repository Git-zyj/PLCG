/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 &= (((arr_11 [i_3]) ? -115 : ((118 ? (arr_11 [i_0]) : -123))));
                                arr_16 [i_0] = (((((((arr_13 [i_0] [12] [14] [i_0] [10] [12] [i_0]) ? 1327606581 : 1))) ? (((((arr_8 [i_0] [i_0]) == 4796059712183183727)))) : var_19)));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [12] [i_0] = var_17;
                                var_21 *= ((!((((arr_3 [i_4]) ? var_3 : (((arr_14 [0] [10] [i_2] [i_4] [10] [0]) ? 122 : (arr_5 [i_1] [i_1]))))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, (arr_14 [i_1] [i_0] [2] [i_1] [i_1] [i_0])));
                    var_23 = var_19;
                }
            }
        }
    }
    var_24 *= (min(var_0, ((var_4 ? var_19 : var_14))));
    #pragma endscop
}
