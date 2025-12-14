/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (~var_9);
                                var_13 |= ((((var_5 ? (arr_2 [i_1 - 3] [i_1 - 2] [i_1]) : (min(var_1, 0)))) * (((var_4 & ((1 ? 1 : var_7)))))));
                            }
                        }
                    }
                    var_14 = var_8;
                    var_15 = 1;
                }
            }
        }
        var_16 = (~1);
    }
    #pragma endscop
}
