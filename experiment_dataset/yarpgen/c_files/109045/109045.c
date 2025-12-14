/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_2] [i_1] [i_2] = var_12;
                        arr_10 [4] [i_2] [i_2] [i_0] = ((2464545865655712514 / (~var_9)));
                        arr_11 [i_0] [2] [i_2] [i_0] [i_0] [i_3] = ((~((-(arr_1 [i_2])))));
                        arr_12 [i_2] [i_2] [i_2] [i_3] = (((((max((arr_1 [i_0]), (arr_0 [21])))) ? ((var_7 ? (arr_4 [i_1] [1]) : (arr_1 [i_0]))) : ((var_3 ? (arr_7 [i_3] [i_2]) : var_10)))));
                    }
                }
            }
        }
        arr_13 [i_0] = ((!((((arr_8 [i_0] [i_0] [1] [i_0]) ? (arr_3 [i_0]) : var_9)))));
        arr_14 [i_0] &= ((((max(-var_4, (((arr_1 [i_0]) ? (arr_6 [i_0] [14] [1] [i_0]) : (arr_0 [10])))))) ? (((((1926480258 ? (arr_4 [i_0] [14]) : (arr_3 [i_0])))) ? -4 : (((-(arr_5 [2])))))) : ((max((((!(arr_8 [i_0] [i_0] [i_0] [i_0])))), ((var_12 ? var_5 : var_5)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((2368487037 ? ((-1 ? (arr_6 [18] [18] [18] [14]) : 70360154243072)) : (var_4 * 1)));
        arr_18 [i_4] [10] = (((arr_1 [3]) ? 1 : (arr_8 [21] [21] [21] [7])));
        arr_19 [i_4] = (2634254249236954855 == var_0);
        arr_20 [i_4] = (((arr_7 [i_4] [6]) ? (arr_6 [i_4] [i_4] [1] [6]) : (arr_5 [4])));
    }
    var_15 = ((var_10 ? var_14 : (~1926480258)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        {
                            arr_32 [i_5] [8] [i_7] [i_8] = ((!(((var_5 ? ((0 ? (arr_3 [i_5]) : (arr_16 [8] [8]))) : (arr_16 [1] [i_7]))))));
                            arr_33 [2] [1] |= var_11;
                            arr_34 [i_8] = var_4;
                        }
                    }
                }
                arr_35 [i_5] [i_6] [1] = (((((~(((arr_8 [i_5] [i_6] [i_5] [i_6]) | var_8))))) ? var_13 : ((((min((arr_8 [i_6] [i_5] [i_5] [i_5]), var_3))) ? ((var_0 ? 5466765246199675331 : (arr_23 [i_6]))) : ((((arr_16 [i_5] [1]) ? var_3 : (arr_21 [i_5]))))))));
            }
        }
    }
    var_16 = 16;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            {
                arr_42 [i_9] [i_9] [i_10] = (arr_38 [i_9]);
                arr_43 [22] = 16176678407974061413;
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_53 [i_10] [1] [i_9] [i_10] = (arr_50 [i_9] [5] [i_11 + 1] [i_12] [i_11 + 1]);
                                arr_54 [4] [i_12] [16] [4] [4] = (arr_52 [i_9] [i_9]);
                                arr_55 [i_13] [6] [i_12] [i_9] [i_10] [i_10] [i_9] = 5740136349704522004;
                                arr_56 [i_13] [i_9] [13] [i_12] [i_13] = 14923239893488007555;
                            }
                        }
                    }
                }
                arr_57 [i_9] = (max(var_4, ((-1 - (((arr_41 [i_9] [i_9]) ? var_11 : var_11))))));
            }
        }
    }
    #pragma endscop
}
