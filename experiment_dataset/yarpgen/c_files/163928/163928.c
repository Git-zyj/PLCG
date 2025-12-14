/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 | ((((var_11 ? var_5 : var_2))))));
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_5 [i_1] [i_1]) && ((1 && (arr_4 [i_0] [i_0])))));
                arr_7 [2] [i_0] = 1;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = ((!(((max(var_7, (arr_11 [i_0])))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_16 [i_0] = 16777215;
                                arr_17 [i_0] [i_1] [i_1] [i_1] = (((arr_0 [i_2 + 2]) && (((var_6 ? var_1 : var_9)))));
                                arr_18 [i_0] [i_0] [i_0] [i_2] [1] [i_0] [i_0] = ((((30241 && (arr_12 [14] [2] [i_0] [i_4] [i_0] [10]))) ? ((35294 ? 1 : var_11)) : var_10));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                arr_23 [i_0] = (((arr_15 [i_2 - 2] [i_2] [i_2 + 2] [i_2 - 1] [i_2 - 2]) | 0));
                                arr_24 [8] [i_0] [i_2] [i_0] [i_2] = (((arr_21 [8] [i_2 - 2] [i_2 + 2] [i_0]) | (arr_21 [i_2] [i_2 - 2] [i_2 + 2] [i_0])));
                                arr_25 [i_0] [14] [i_2] [i_0] [10] = var_9;
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0] [6] [i_0] [i_0] = (((((arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1]) && (arr_10 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1]))) ? (((14 && (arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1])))) : ((var_2 * (arr_10 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 - 2])))));
                                arr_31 [i_0] [i_0] [i_0] [i_0] [0] [1] = (arr_10 [9] [9] [i_2] [9]);
                                arr_32 [i_0] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
