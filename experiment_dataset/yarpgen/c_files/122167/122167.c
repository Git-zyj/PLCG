/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min(((var_0 ? var_9 : var_3)), (((0 ? 0 : 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = var_14;
        var_20 = var_9;
        var_21 ^= ((((arr_1 [1]) < var_15)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_22 = (!var_0);
                        arr_11 [i_0] [i_0] = var_5;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (((((arr_13 [i_4] [i_4 - 1]) ? ((((arr_14 [i_4]) < (arr_12 [i_4] [i_4])))) : (arr_13 [1] [1]))) / (((((min(255, var_13))) && ((max((arr_13 [9] [i_4]), 22))))))));
        var_23 = ((+((~(((arr_13 [i_4 - 1] [i_4]) ? 122 : var_16))))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_24 &= ((0 ? 1 : 8));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_25 [1] [i_5] [1] [i_7] [i_7] = -1;
                        arr_26 [i_5] [i_6] [i_7] [i_8] [i_5] [i_6] = ((((var_4 / (arr_21 [i_8] [i_7] [i_6] [i_5]))) < (((((1 != 255) >= (((arr_20 [i_7] [i_6]) ? 18446744073709551615 : 18446744073709551615))))))));
                        var_25 = var_11;
                    }
                }
            }
        }
    }
    #pragma endscop
}
