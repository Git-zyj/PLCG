/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 -= 1;
                arr_6 [i_0] [2] [3] = (min((((~var_0) ? ((1 ? var_2 : var_0)) : var_0)), 1));
            }
        }
    }
    var_15 = (((4084477896 + -32) << (max(((0 ? 1 : 1)), var_7))));
    var_16 *= ((3426084421123709912 ? ((var_6 ? 1 : -1358912360)) : (((var_7 ^ var_11) ? var_12 : (max(var_11, var_13))))));
    #pragma endscop
}
