/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_4 ? var_6 : (-127 - 1))))) ? ((var_0 | (var_8 > var_5))) : var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (min(0, (max(0, (-2147483647 - 1)))));
                var_12 = (0 <= 1);
            }
        }
    }
    #pragma endscop
}
