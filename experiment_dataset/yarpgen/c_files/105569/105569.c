/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_7, -var_5))) | var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 += arr_0 [i_0] [i_2];
                    var_12 = ((-(max((((arr_1 [3]) ? var_2 : var_9)), var_5))));
                }
            }
        }
    }
    #pragma endscop
}
