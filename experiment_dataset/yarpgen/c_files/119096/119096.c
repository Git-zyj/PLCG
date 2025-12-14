/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = var_6;
                arr_6 [11] [i_0] = (max((arr_3 [i_0 - 3] [i_0]), (arr_3 [12] [i_1])));
                var_15 = 4169850214;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((!(arr_1 [i_1]))))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] = (((20294 | 1087027763) ? (arr_9 [i_2 + 1] [i_2] [i_2 + 3]) : (arr_10 [i_0] [i_0 - 2] [i_2] [i_2 + 3] [i_2] [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_1 != (min(((min(311933334, -123))), ((3931798069 ? var_11 : -2092521337))))));
    var_18 = -var_10;
    var_19 = (min(var_19, var_12));
    #pragma endscop
}
