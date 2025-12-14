/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_10;
    var_20 = var_15;
    var_21 = ((~((112 ? var_10 : var_16))));
    var_22 = ((var_3 ? var_6 : var_7));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_23 = (min(var_23, (arr_1 [i_0])));
                    var_24 = var_3;
                }
            }
        }
        var_25 = (arr_8 [i_0] [i_0] [16]);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        arr_13 [i_3] = (arr_2 [i_3 - 2] [i_3 - 2]);
        var_26 = -3;
    }
    #pragma endscop
}
