/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min(var_10, var_10)))));
    var_14 = (min(var_14, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = ((((max(100, 2529755410))) < (arr_1 [i_0])));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = -7;
                }
            }
        }
    }
    var_16 = (min(var_0, ((-8276776738336854998 ? 91 : 1))));
    var_17 = var_1;
    #pragma endscop
}
