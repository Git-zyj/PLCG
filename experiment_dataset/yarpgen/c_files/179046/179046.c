/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(var_4, (min((min(var_16, var_2)), ((max(var_9, var_11))))))))));
    var_19 = (max((min(var_1, (min(var_14, var_12)))), (min(((min(var_1, 0))), (min(var_12, var_14))))));
    var_20 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_21 += var_1;
                            var_22 = (min(var_22, var_17));
                            arr_11 [i_0 + 2] [i_0 - 1] [i_1] [i_2] [i_3 - 3] = (min((min((min(var_6, var_6)), ((min(var_7, var_3))))), var_8));
                        }
                    }
                }
                arr_12 [i_0 + 2] [i_0 + 2] = (min((max((min(var_13, var_17)), var_11)), ((min(((max(var_5, var_9))), (min(var_3, var_17)))))));
                arr_13 [i_0 + 2] [i_1] [i_1] = var_2;
            }
        }
    }
    var_23 = (max(var_23, ((min(0, 628548387)))));
    #pragma endscop
}
