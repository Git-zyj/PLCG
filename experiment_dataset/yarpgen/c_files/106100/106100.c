/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (8571167292660364130 ? (max(6755399441055744, -52)) : var_10);
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = ((!((((arr_6 [i_2] [i_1 + 1] [i_0]) ? (arr_3 [5]) : (max((arr_7 [i_2] [i_2] [i_2]), -49)))))));
                    var_18 = (arr_7 [i_0] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
