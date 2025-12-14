/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((-32767 - 1) < 32764));
        arr_2 [7] = (~69);
        var_20 = ((var_10 + (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((!(arr_8 [15] [i_1] [i_2] [i_0])));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_21 *= ((192 - ((32767 >> (18158513697557839872 - 18158513697557839848)))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0] = (var_6 ? 32767 : 196);
                        arr_17 [i_0] [i_0] = var_0;
                    }
                }
            }
        }
        arr_18 [i_0] = ((arr_1 [i_0]) ? var_13 : -7838328004265274711);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_22 = ((!((max(((576460752303423487 ? var_2 : -32765)), 53564)))));
        var_23 -= ((!((max((!80), var_7)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                {
                    arr_27 [i_4] [14] [i_6] [i_6] = ((min(1, var_9)));
                    arr_28 [i_4] [18] [i_6 - 2] = (max((((var_15 & 32764) << (!var_18))), (arr_24 [i_6 - 4] [i_6 - 3] [i_6 - 4])));
                }
            }
        }
    }
    var_24 = var_14;
    #pragma endscop
}
