/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_0));
                var_14 = 2147483647;
            }
        }
    }
    var_15 = (min(((((((1413406435 ? 1 : var_7))) ? ((16874 ? -1159823460 : var_2)) : var_9))), (max((var_0 != 1), var_3))));
    var_16 = (min(0, var_6));
    var_17 = (min(var_17, var_7));
    #pragma endscop
}
