/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = var_14;
                var_18 = (((1 >= var_10) > (max((min(var_9, (arr_3 [i_1] [i_1] [i_0 + 1]))), 78))));
            }
        }
    }
    var_19 = (((((((max(4841958668574262588, var_0))) ? 8192 : (62 - var_13)))) != var_7));
    #pragma endscop
}
