/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = arr_5 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [13] [13] [13] [i_0] = ((((((!4064) ? (arr_1 [i_0]) : var_12))) ? ((var_1 | (arr_5 [i_2]))) : (var_4 + var_10)));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] |= ((-((-((var_6 ? (arr_10 [i_0] [13] [i_2] [4] [i_4 - 3]) : var_10))))));
                                var_17 |= ((-(max(((1976 ? var_5 : 477383739)), -var_12))));
                                arr_15 [13] [i_0 - 4] [i_1] [i_2] [i_3 - 1] [i_4] = (max((((((min(var_4, var_2))) && (arr_11 [i_0] [8] [i_2] [i_3 + 3] [i_4 + 3])))), ((-1977 ? (arr_10 [i_0] [i_3 - 1] [i_4 + 3] [i_4 + 3] [i_0 - 4]) : (!var_1)))));
                            }
                        }
                    }
                    arr_16 [i_0 + 1] [i_1] [i_2] = (~10442060558402397733);
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
