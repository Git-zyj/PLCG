/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (((((min(var_13, var_1))) ? var_6 : var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = var_13;
                arr_4 [i_0] [2] [i_1] = arr_0 [i_0 - 1] [i_1];
            }
        }
    }
    #pragma endscop
}
