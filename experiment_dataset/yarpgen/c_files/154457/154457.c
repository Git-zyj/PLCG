/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (arr_5 [6] [i_1] [i_0]);
                    var_11 = (arr_2 [i_0] [19] [i_2]);
                    var_12 = (arr_4 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
