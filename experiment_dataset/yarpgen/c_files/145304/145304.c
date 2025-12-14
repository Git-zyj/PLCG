/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [17] [17] [i_1] = arr_3 [i_0];
                var_10 &= ((var_9 ? ((~(arr_4 [i_1 - 2] [i_1 - 2]))) : (!3125459544)));
                var_11 = var_3;
            }
        }
    }
    var_12 = 58313;
    var_13 = ((((((min(var_4, var_9)) && 23524)))));
    #pragma endscop
}
