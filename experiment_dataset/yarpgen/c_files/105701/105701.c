/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = -1349243578;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((((((arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 2] [12] [i_4 + 2]) | var_5))) ? (1125899906842623 | 15) : ((((arr_14 [i_4 + 1] [i_4] [i_4 - 2] [1] [i_4 + 2]) & (arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4] [i_4 + 2]))))));
                                arr_16 [i_1] = ((!(((((((arr_0 [i_4] [i_0]) / var_13))) ? 38818 : ((~(arr_4 [i_1] [i_1] [i_3]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_5] [i_5] = (arr_2 [i_5] [i_5]);
                arr_23 [0] [i_6] [0] = var_13;
            }
        }
    }
    var_16 = ((var_5 ? var_7 : ((((min(15, var_2)))))));
    var_17 = ((((var_5 ? (var_1 / var_0) : ((-29 ? -1317783417490381227 : var_3)))) - ((((((1467734104 ? 38818 : var_3))) / var_14)))));
    var_18 = (min(1657182146, ((var_1 ? var_14 : -var_11))));
    #pragma endscop
}
