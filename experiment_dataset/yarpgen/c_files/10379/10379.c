/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = var_13;
                    var_19 = var_11;
                }
            }
        }
        var_20 = (max((!2010963049), (arr_0 [i_0] [i_0 - 1])));
        arr_6 [i_0] = var_10;
    }
    #pragma endscop
}
