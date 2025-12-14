/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) * -var_9));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (~4294967282);
                        var_22 = ((!(arr_4 [i_0] [i_1 + 1] [i_2 + 2])));
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, var_1));
    var_24 = (((max(var_8, var_2)) / (~0)));
    #pragma endscop
}
