/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = ((max(var_2, (min(var_4, (-2147483647 - 1))))));
                            var_18 = (max(((-12040 ? (-2147483647 - 1) : (arr_3 [i_0] [18] [i_2]))), ((max((var_8 != var_8), var_9)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_19 = (((var_16 ? var_4 : var_6)));
                            arr_18 [i_0] [21] [i_1] [i_1] [i_5] = (((max(((min(var_4, var_15))), var_2)) < (((var_4 < var_15) | (1 / var_8)))));
                            arr_19 [i_0] [i_0] [i_1] [i_4] [15] = ((((max((12 | var_16), (~var_1)))) ? (((arr_16 [3] [i_1 + 1] [11] [3]) ? (arr_14 [i_1 + 2] [i_1 + 1] [i_4]) : (arr_16 [i_0] [i_1 - 1] [14] [3]))) : (((!-3167818767159016733) ? (var_11 || var_16) : ((var_9 ? -66 : var_6))))));
                            var_20 = ((((((var_15 | 0) >> (!-5829)))) ? ((((((arr_14 [i_0] [i_0] [i_0]) ^ (arr_5 [i_0] [i_0] [i_0]))) / ((max(5975, var_12)))))) : ((~((var_11 ? var_1 : var_10))))));
                            var_21 = ((+((~(((arr_17 [14] [18] [i_4] [i_5]) ? 12 : var_0))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_30 [4] [4] [i_6] [4] [11] [11] [6] = (((((min(var_2, 527849656))) ? (max(var_3, 2441141757)) : (arr_3 [i_8] [i_8] [i_8]))) & (((max(var_1, var_12)) | var_0)));
                                var_22 = (min(var_22, (((-(max((~var_5), var_16)))))));
                                var_23 = 5829;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 8;i_12 += 1)
                    {
                        {
                            var_24 = (max((max(var_7, var_5)), (((((var_10 ? (arr_27 [i_12]) : (arr_4 [i_7] [i_11] [i_12]))) <= var_10)))));
                            arr_37 [i_6] [i_6] [i_6] [i_6] = ((var_3 || var_6) | ((max((arr_16 [i_11 + 1] [i_11] [i_12 + 4] [i_12 - 1]), (arr_15 [i_12] [i_12 + 3] [i_12 - 1] [10])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
