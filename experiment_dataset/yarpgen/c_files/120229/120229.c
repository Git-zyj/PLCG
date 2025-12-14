/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_0 ? ((max(var_6, 418291690))) : var_3)));
    var_12 &= (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (arr_6 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_3] = ((-((max(0, 11)))));
                            arr_13 [i_2] [i_1] [i_0] = (arr_9 [3] [i_1]);
                            var_14 = var_0;
                        }
                    }
                }
                arr_14 [i_0] [i_1] = arr_1 [i_0 + 1];
            }
        }
    }
    #pragma endscop
}
