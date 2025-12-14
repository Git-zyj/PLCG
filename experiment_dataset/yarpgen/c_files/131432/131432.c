/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = (!((((max(var_5, (arr_7 [i_2] [i_3]))) ? var_2 : (~var_8)))));
                            arr_11 [i_0] [i_1] = (min((arr_10 [i_0] [i_2] [i_3]), (~0)));
                            var_12 = ((~(~0)));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((1 & (max(var_7, ((max(var_0, var_4)))))));
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = ((var_6 >> ((var_5 ? ((var_2 ? 0 : var_1)) : (var_9 != var_5)))));
                var_13 = (max(var_13, (max((max((arr_9 [i_0] [i_1]), (arr_9 [i_0] [i_1]))), (min(1, (arr_9 [1] [i_1])))))));
                arr_14 [i_1] [i_1] = (~var_9);
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
