/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = (((((var_10 ^ var_13) != 56)) ? ((max(var_11, var_6))) : ((674 ? var_0 : var_13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = var_3;
                    var_16 = (arr_0 [i_0]);
                    var_17 = (((((~var_1) + 2147483647)) << (((max(4294967284, 56)) - 4294967284))));
                }
            }
        }
    }
    #pragma endscop
}
