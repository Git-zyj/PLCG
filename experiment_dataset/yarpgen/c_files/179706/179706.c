/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? var_9 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [4] [4] [1] = ((max((min(var_10, var_10)), (arr_0 [i_0]))));
                arr_5 [i_1 - 2] [i_1] [i_0] = ((~((0 ? 1 : 31009))));
            }
        }
    }
    #pragma endscop
}
