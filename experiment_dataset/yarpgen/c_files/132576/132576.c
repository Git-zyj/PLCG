/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_15 = 1;
        var_16 = (((min(1, 1)) ? ((max((max(1, 1)), 1))) : ((((arr_0 [i_0] [i_0]) && (max(1, (arr_0 [i_0] [4]))))))));
        var_17 *= -123;
        var_18 = (max(var_18, 65535));
        var_19 = (((max((arr_0 [i_0] [i_0 + 1]), 1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_20 -= 1;
        arr_5 [i_1] [i_1] = (arr_2 [8]);
        var_21 -= (((arr_1 [i_1 + 1]) && (arr_1 [i_1 + 1])));
        var_22 = var_6;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = var_13;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_18 [i_5] [i_4] [i_2] = (((arr_16 [1] [i_4 + 1] [i_4 - 1] [i_5 + 2]) ? ((max((arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_5 - 1]), -14))) : (((arr_16 [i_3] [i_4 - 1] [i_4 + 2] [i_5 - 3]) << var_10))));
                        var_23 = (((~(arr_6 [i_4] [i_4]))));
                        arr_19 [i_2] = ((!((78 || (arr_7 [i_2] [i_2])))));
                        arr_20 [i_5] [i_4 - 1] [i_3] [i_2] = 1;
                        var_24 = (max(var_24, ((max(var_9, (arr_15 [i_3]))))));
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_25 = (1 > (((((((arr_13 [i_6] [i_6]) ? var_6 : 1))) < ((var_4 << (2653906854 - 2653906831)))))));
        arr_23 [16] |= 1;
    }
    var_26 = (1 == 13165);
    #pragma endscop
}
