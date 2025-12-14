/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (((5938248773572710173 ^ 236) ? ((var_6 - (arr_0 [i_0 + 3]))) : (arr_5 [i_0 - 3])));
                    var_13 = (((var_0 + 5938248773572710172) / (min(var_10, 15064359471513153375))));
                }
            }
        }
    }
    #pragma endscop
}
