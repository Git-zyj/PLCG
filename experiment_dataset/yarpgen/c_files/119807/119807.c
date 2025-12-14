/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 *= (max((((arr_1 [i_0 + 1] [i_0 - 1]) | (arr_1 [i_0 + 1] [i_0 + 1]))), ((-1 & (arr_1 [i_0 + 2] [i_0 + 1])))));
        arr_2 [i_0] = (arr_1 [i_0 - 1] [i_0 - 1]);
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_5 [2] [10] &= (arr_3 [i_1 + 2]);

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_18 = (~224);
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_19 = (arr_12 [i_4] [i_4] [i_1] [i_1] [i_2] [i_1]);
                        var_20 ^= (((arr_8 [16]) < (arr_4 [i_2] [i_4])));
                    }
                }
            }
        }
        arr_14 [i_1] [i_1] = ((arr_9 [i_1 + 1] [i_1]) | (arr_8 [i_1]));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_23 [i_7] [i_1] = (((arr_15 [i_1 + 2] [i_1 + 2]) ? (arr_15 [i_1 + 1] [i_1 - 2]) : var_16));
                        arr_24 [i_1] [i_1] [i_1] [i_7] = (arr_3 [i_5]);
                        arr_25 [i_1] [i_6] [i_5] [i_1] = ((~(((arr_4 [i_1] [i_1]) ? (arr_17 [i_1]) : var_16))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_21 = (min(var_21, (arr_27 [i_8] [i_8])));
        var_22 = (max(var_9, (min((max((arr_27 [i_8] [i_8]), (arr_27 [i_8] [i_8]))), (max((arr_27 [i_8] [i_8]), var_16))))));
    }
    #pragma endscop
}
