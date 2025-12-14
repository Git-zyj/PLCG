/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = var_8;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (arr_2 [i_1 + 2] [i_1]);
                    var_16 = ((var_5 ? var_4 : var_9));
                }
            }
        }
    }
    var_17 -= var_5;
    var_18 = var_2;
    var_19 = ((var_2 ? (((32 ? var_8 : ((max(var_3, var_5)))))) : (max(var_11, var_0))));
    #pragma endscop
}
