/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((var_3 - (~-22393)))) ? ((max(7, 1))) : (max(((var_5 ? 1 : var_6)), var_11)));
    var_13 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [8] = (((arr_1 [i_0 - 1]) ? -9 : -8));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((-11 ? (arr_8 [i_3] [i_2] [i_3] [i_0 + 2]) : var_0));
                                var_15 = ((((arr_3 [i_0]) - 15523)));
                                var_16 += ((((var_10 ? var_3 : var_4)) | ((-1932050333 ? (arr_6 [i_3]) : 62298))));
                                var_17 = (((arr_3 [i_4]) > var_11));
                            }
                        }
                    }
                    var_18 = (arr_4 [i_2] [i_0] [i_0]);
                    arr_12 [i_0] [i_0] [4] = ((-956202747 ? 0 : ((((arr_11 [i_1] [i_1] [i_1] [i_1]) ? var_11 : var_0)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 = (((arr_0 [i_0]) != var_10));
                                var_20 = ((var_5 ? (arr_15 [i_6 + 1] [i_5 + 1] [0] [i_5 + 1] [i_0 + 1]) : var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
