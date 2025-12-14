/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = var_5;
    var_12 = ((max(var_1, (var_5 ^ var_4))));
    var_13 = ((var_2 ? (var_3 < var_9) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(var_8, ((min(31, 127)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_9, (var_0 <= var_0)));
                                var_15 = (min(var_15, ((((max(var_3, var_6)) & (var_7 != var_7))))));
                            }
                        }
                    }
                }
                arr_14 [5] [i_0] [i_1] = (max((var_2 >= var_9), (max(var_8, var_0))));
            }
        }
    }
    #pragma endscop
}
