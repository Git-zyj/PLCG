/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((((max(0, 0)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (~var_6);
                                var_14 = var_8;
                            }
                        }
                    }
                    var_15 = (min(var_15, var_3));
                    arr_14 [i_1] [i_1] [i_2] = ((-544192137888117322 ? 486569158 : 4653641583130473297));
                    arr_15 [i_1] [i_1] [i_1] [20] = ((!((((arr_8 [i_0] [16] [i_0] [i_0] [i_0]) ? (((arr_10 [i_0] [i_2] [3] [i_1]) ^ 2147483647)) : ((min(var_10, var_3))))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_16 = ((var_6 < (arr_2 [i_9])));
                                arr_31 [i_5] [2] [i_5] [i_5] [i_5] = ((~(arr_8 [i_8 - 1] [12] [i_7] [i_6 - 1] [i_9 - 1])));
                            }
                        }
                    }
                    var_17 = var_1;
                    var_18 = var_7;
                    arr_32 [i_5] [i_5] [i_6] [i_7] = ((-(max((((arr_6 [8] [i_6] [i_7] [i_6]) ? var_8 : (arr_8 [1] [i_7] [i_6 + 1] [i_6] [i_5]))), var_9))));
                }
            }
        }
        var_19 = ((((((min(1937972356, var_6))) / var_11)) | 0));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 11;i_12 += 1)
            {
                {
                    var_20 = (max(-3823357454184723094, (((-(!var_4))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_46 [i_10] [5] [i_12] [7] [i_14] [i_14] = ((!1148417904979476480) / (min(((var_3 ? 14623386619524828522 : var_0)), (((var_8 ? 1 : (arr_13 [21])))))));
                                arr_47 [i_10] [5] [i_12] [i_13] [10] = ((~((var_0 / (arr_35 [i_12 - 2])))));
                            }
                        }
                    }
                    arr_48 [i_10] [i_11] |= 8610911248918846083;
                }
            }
        }
        var_21 += var_11;
        var_22 = ((~(((((arr_3 [i_10]) ^ 15))))));
    }
    #pragma endscop
}
