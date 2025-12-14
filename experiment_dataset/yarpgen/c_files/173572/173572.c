/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_0;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 = min((((arr_4 [i_0 + 4]) ? (arr_5 [i_2 + 1]) : (arr_8 [i_2] [i_0 - 3] [i_2 + 1] [i_3] [i_4]))), -var_15);
                                var_19 = ((min((var_1 >> 0), (((11 ? var_9 : var_11))))));
                            }
                        }
                    }
                    var_20 = (min((((min(var_7, var_7)))), (((arr_7 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_0] [i_0 - 3]) ? var_16 : (arr_7 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_0 - 2])))));
                    arr_10 [i_2] = var_13;
                    var_21 = (max(var_21, var_9));
                    arr_11 [i_0] = arr_9 [0] [i_1] [1];
                }
            }
        }
    }
    #pragma endscop
}
