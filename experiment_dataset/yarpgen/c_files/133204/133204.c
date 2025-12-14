/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_2;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_17 = ((-127 - 1) ? (arr_1 [i_0]) : -85);
        arr_2 [i_0] = 98;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 += (arr_4 [13]);
                        arr_9 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_3] = (arr_6 [i_2] [i_2]);

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_19 = (arr_8 [i_0] [i_0] [i_4 + 2] [i_4 + 3]);
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_0] = ((~(arr_10 [i_0 - 1] [i_0 - 1] [i_4 + 3])));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_2] = ((arr_0 [i_0 + 2] [i_4 + 1]) ? -1152921504606846976 : ((var_9 ? (arr_11 [i_1] [i_2] [i_3]) : (arr_5 [i_0] [i_4]))));
                            var_20 = ((((arr_1 [i_0]) < var_8)));
                        }
                        arr_14 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] = ((var_4 & (arr_3 [i_0 - 1])));
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = (((arr_4 [i_0 - 1]) ? var_5 : var_12));
        var_21 = (min(var_21, 32436));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [i_6] [i_7 + 3] = (arr_20 [i_5] [i_5] [i_5] [i_5]);
                    arr_23 [i_6] [i_7 + 1] = (arr_20 [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 - 1]);
                    arr_24 [5] [i_6] [i_7] = (arr_16 [i_5] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
