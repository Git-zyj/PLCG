/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((min(4096, (arr_5 [8] [0]))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = var_13;
                            arr_12 [2] = (min((max((arr_0 [i_0]), (arr_6 [9] [9] [i_2]))), var_9));
                            arr_13 [2] [i_2] [i_1] [5] [i_0] = (min(var_14, var_11));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_9;
    var_21 *= 4;
    #pragma endscop
}
