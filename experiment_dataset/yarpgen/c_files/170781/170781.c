/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_7 << (var_7 - 561969973389401678))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [8] [i_3] [i_0] [i_3] = ((((var_5 || var_3) || (0 || 82))));
                            var_14 = (max(var_14, var_9));
                            arr_12 [i_0] [i_0] = (((((7168823729727983020 ? ((var_11 ? 1 : 320266347)) : -1935175447))) ? -var_1 : (((-(((arr_9 [4] [i_2] [i_1] [i_0 + 2]) ? 1 : var_3)))))));
                        }
                    }
                }
                var_15 = (max(var_15, ((min((0 / var_11), ((var_10 ? 7168823729727983020 : (arr_4 [0]))))))));
            }
        }
    }
    var_16 = (max(var_16, var_0));
    var_17 = var_6;
    var_18 = var_11;
    #pragma endscop
}
