/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = (((arr_2 [i_1 - 2]) ? (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 3]) : var_0));
                    arr_11 [i_0] [i_1 + 1] [i_1] [i_1] = var_8;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_16 [i_2] = var_7;
                        arr_17 [i_0] [i_1 - 4] [i_1] [i_1 - 4] [i_1] = (arr_5 [i_0] [i_1] [i_3]);
                        arr_18 [i_0] [i_1] [i_1] [i_1] = (max((arr_13 [i_0] [i_1] [i_2] [5] [i_2]), var_2));
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((~(((arr_5 [i_1 + 1] [i_1 - 4] [i_1 - 1]) ? (arr_5 [i_1 - 4] [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 4] [i_1 - 4] [i_1 - 3])))));
                        arr_20 [i_0] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
    }
    var_15 = ((var_7 ? (max(var_0, -var_13)) : ((((!(((var_14 ? var_11 : var_12)))))))));
    var_16 = (min(-33, (((960 + var_4) * var_9))));
    #pragma endscop
}
