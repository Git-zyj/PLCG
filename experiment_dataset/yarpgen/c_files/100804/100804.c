/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = var_1;
                            var_13 = (min(var_13, (((-((-(!var_3))))))));
                            var_14 = ((((!(!-1659655047)))));
                        }
                    }
                }
                arr_10 [i_1] [i_0] [16] = var_11;
                arr_11 [i_0] [i_0] &= (max((((var_7 ? -2110704180 : var_11))), (((arr_4 [i_0] [i_0]) ? ((var_6 / (arr_7 [i_0] [i_1]))) : -23002))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {
                arr_16 [1] [1] &= (((arr_15 [i_5 + 2] [i_5]) <= var_10));
                var_15 = (-(1 >> 1));
                var_16 = arr_15 [i_4 + 1] [i_5 + 1];
            }
        }
    }
    #pragma endscop
}
