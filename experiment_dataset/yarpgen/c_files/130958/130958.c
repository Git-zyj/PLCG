/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (((arr_6 [i_0]) ? (((arr_6 [i_0]) ? (arr_0 [i_0]) : (arr_6 [i_1]))) : (!60326)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = 4966840082026548314;
                            var_21 = (((arr_12 [i_2]) ? 1 : (arr_12 [i_0])));
                            arr_15 [i_0] [i_0] [i_2] [i_0] = (((min((((arr_11 [i_0] [i_0] [i_0]) / 1)), ((max((arr_14 [i_1] [i_1] [i_1]), (arr_0 [i_0])))))) == (arr_8 [i_2 - 1] [i_3] [i_3])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_19 [i_0] [i_0] = -var_17;
                                var_22 = (min(var_22, 232));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 |= (max((max(((min(var_17, var_0))), (min(var_19, var_3)))), 232));
    #pragma endscop
}
