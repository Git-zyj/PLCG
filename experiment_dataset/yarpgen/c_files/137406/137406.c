/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_1] [i_3] [i_3 - 2] = 57;
                                var_13 = (max(var_13, ((max(var_6, var_11)))));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, ((min(-var_8, (arr_1 [i_0]))))));
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
