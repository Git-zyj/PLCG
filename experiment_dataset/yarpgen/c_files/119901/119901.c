/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 -= (((min((arr_5 [i_1] [i_0] [i_0]), 133))));
                var_21 = ((!(arr_0 [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [16] [i_0] &= (min(-1434693757, 535822336));
                                var_22 = (max(var_22, 7526820484983619734));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (((((-var_18 <= (((((arr_9 [i_0] [i_2] [i_2] [i_3]) <= (arr_2 [i_4])))))))) >= (0 != 3759144972)));
                                arr_17 [i_2] [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] &= (((!535822337) ? (min(535822318, 3759144952)) : (arr_6 [i_1 - 1] [i_1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_4, (max(31, var_2))));
    #pragma endscop
}
