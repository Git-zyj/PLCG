/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_17) ? (max((min(var_6, var_14)), 218)) : var_3));
    var_20 = var_9;
    var_21 = 31457280;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_22 = var_14;
                            arr_14 [i_3] [i_1] [i_2] [0] [i_3] = (arr_9 [i_0 - 1] [i_0 - 1]);
                            var_23 = ((min(var_9, (max(var_14, var_18)))));
                        }
                    }
                }
                var_24 = var_4;
            }
        }
    }
    #pragma endscop
}
