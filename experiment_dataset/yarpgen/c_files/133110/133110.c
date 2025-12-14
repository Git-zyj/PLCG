/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 ? (((var_14 ^ var_1) ? ((max(var_1, var_11))) : var_0)) : (((var_14 % (((209 ? var_17 : var_2))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [4] = (((arr_0 [i_0]) || var_0));
        var_19 &= (((arr_0 [i_0]) - (arr_0 [i_0])));
        var_20 = ((var_2 ? 0 : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((-((var_17 ? (arr_0 [0]) : (arr_2 [i_1] [i_1])))));
        var_21 ^= 62048;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_22 = (arr_10 [i_1]);
            arr_11 [i_2] [i_1] [i_1] = (-38 ^ -var_11);
            arr_12 [i_1] [i_1] [i_1] = (12 | var_8);
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_23 = ((arr_14 [i_1] [i_3]) ? var_1 : var_7);
            var_24 = ((var_11 != (arr_6 [i_3 + 1] [i_3 + 1])));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_22 [i_1] [i_3] [i_1] [i_5 - 1] = -94;

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_25 = (max(var_25, (((((var_12 ? var_1 : var_15)) ^ (((var_3 ? (arr_17 [i_1] [i_1] [i_1] [i_6]) : var_10))))))));
                            arr_25 [i_1] [i_3 + 1] [i_1] [2] [2] [2] = ((-(arr_10 [i_1])));
                        }
                        arr_26 [10] [i_3] [i_4] [i_5] |= (((244 * 0) & 1768614056002281906));
                    }
                }
            }
            var_26 = (((((9 ? var_3 : var_14))) ? (~var_5) : (((arr_17 [i_1] [i_3] [i_3] [i_1]) ^ (arr_10 [i_1])))));
            arr_27 [i_1] = 35046;
        }
    }
    #pragma endscop
}
