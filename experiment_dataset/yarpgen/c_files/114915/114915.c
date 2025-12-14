/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (min(((min((arr_4 [i_1] [0] [i_1 + 1]), (arr_4 [i_1] [10] [i_1 - 2])))), ((42 ? 44 : 42))));
                    var_21 = (max(var_21, (((214 ? 1 : 22)))));
                    arr_9 [7] [i_1] [i_1] [i_0] = var_0;
                }
            }
        }
    }
    var_22 = ((-(max(((1 ? var_11 : var_0)), var_1))));
    #pragma endscop
}
