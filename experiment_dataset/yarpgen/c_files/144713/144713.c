/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [9] [3] [i_0 - 1] = 126;
                arr_6 [1] = var_0;
                var_21 = 124;
            }
        }
    }
    var_22 &= ((((((var_14 + 2147483647) << (((((min(-4247621326973554673, var_10)) + 4247621326973554682)) - 9))))) ? var_3 : var_1));
    var_23 &= 4247621326973554672;
    #pragma endscop
}
