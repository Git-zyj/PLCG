/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1 + 2] = (-121 % -4133098123);
                var_12 = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = -3338607380;
                                var_14 = (max(var_14, var_9));
                                var_15 = (((var_10 > 15799354568426760775) == (var_2 / var_3)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_0;
    var_17 = var_11;
    #pragma endscop
}
