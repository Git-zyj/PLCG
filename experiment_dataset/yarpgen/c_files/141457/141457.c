/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = -100;
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((((arr_5 [i_0] [i_0 + 2] [3]) + var_4)) != (arr_0 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
