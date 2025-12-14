/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, (((var_13 >> (var_2 - 21014))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (~1059102517);
                    var_18 *= ((var_4 ? var_9 : var_5));
                }
            }
        }
    }
    var_19 = ((((var_8 ? var_15 : var_14))));

    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        arr_11 [i_3] = -var_12;
        arr_12 [i_3] = (!(var_9 + var_3));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        arr_17 [0] &= (((1059102530 ? -7669 : 1472922994)));
        arr_18 [i_4] = var_0;
    }
    var_20 = ((((var_4 ^ (-9223372036854775807 - 1)))));
    #pragma endscop
}
