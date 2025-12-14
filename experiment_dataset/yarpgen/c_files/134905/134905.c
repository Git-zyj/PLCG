/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = var_16;
                    arr_10 [0] [i_1] = var_11;
                    arr_11 [i_0] [i_1] [11] = (arr_5 [i_2 + 1] [i_2] [i_2 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
