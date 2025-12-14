/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_14 *= ((!(!var_3)));
                var_15 = (arr_0 [i_0] [i_1 - 1]);
                arr_6 [i_0] = (!-7564522906791934778);
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
