/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 |= var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 = (arr_0 [6] [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [11] [i_0] [i_0] [i_0] = 1;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [1] [i_0] [1] [i_2] [i_3] [i_3] = ((!(arr_12 [i_0] [i_0] [i_0 - 2])));
                        var_16 = (~2147483636);
                    }
                    var_17 = (min(var_17, (arr_6 [7] [0] [i_2])));
                    arr_14 [i_1] [i_0] = var_3;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        arr_17 [i_4] [9] = 1;
        arr_18 [0] &= 1;
        arr_19 [i_4] = 56;
    }
    var_18 = var_1;
    #pragma endscop
}
