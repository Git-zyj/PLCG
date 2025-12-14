/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_13 ? var_3 : var_0))) ? ((var_10 ? var_3 : (((867594708435786578 ? var_0 : var_8))))) : ((min(var_2, ((var_0 ? var_12 : var_16)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = arr_4 [i_0] [i_0] [i_0];
                            arr_11 [i_1] = var_10;
                            var_20 = (max(var_20, (arr_6 [1] [i_1 + 3] [i_1] [i_1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_21 = ((1461916104 != (arr_7 [i_0] [i_1] [i_4] [i_1 + 3])));
                            var_22 = -391457845;
                        }
                    }
                }
                var_23 += var_12;
                arr_18 [i_1] = ((~((~(arr_4 [19] [i_1] [1])))));
            }
        }
    }
    #pragma endscop
}
