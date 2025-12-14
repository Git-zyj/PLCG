/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [10] = var_1;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_11 [4] [2] = (((((21 >> (1099511627775 - 1099511627758)))) || ((!(arr_10 [i_3 + 1] [i_2 + 1] [14] [i_1] [4])))));

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [6] [6] [8] [i_3 + 1] [i_4] = var_0;
                            arr_16 [i_0] [4] [i_3] = 111;
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_20 [16] [i_5] [i_2] [0] [i_2 + 1] = ((arr_13 [17] [i_1 - 1] [i_5] [i_2 - 2] [10]) ? (arr_13 [15] [i_1 + 1] [i_5] [1] [14]) : var_7);
                        arr_21 [9] [8] [12] [11] [i_5] = ((-((1 >> (9223372036854775807 - 9223372036854775803)))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_25 [i_5] = ((var_10 ? 3840 : 29607));
                            arr_26 [i_5] [i_6] [i_2] [i_5] [i_2] [i_2] [0] = (((!var_1) ? (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]) : 1));
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_31 [i_7] [i_5] = (arr_24 [i_1 - 1] [i_2 - 2] [1] [1] [1] [i_7 + 1] [i_7]);
                            arr_32 [14] [i_1] [12] [2] [6] = 16400005371063519605;
                            arr_33 [7] [i_1] [i_5] [15] [1] [0] = ((49765686 % (arr_30 [i_7 + 1] [i_5] [10] [i_1 + 1] [i_5] [i_0])));
                            arr_34 [7] [i_5] [1] [i_5] [i_0] = ((((var_8 ? var_6 : var_5)) & var_1));
                        }
                    }
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        arr_38 [13] [19] [i_2 + 2] [i_8] [9] [5] = var_1;
                        arr_39 [1] [18] [10] [11] = (arr_9 [9] [i_1 - 1] [13] [9] [i_0]);
                        arr_40 [2] [i_0] [i_1] [i_2 - 2] [i_8] = (((1 / 3061821365707937302) ? var_5 : var_4));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_46 [7] [9] [i_1 - 1] [3] [8] [2] = 2717500433;
                                arr_47 [13] = 64;
                                arr_48 [i_9] [i_9] [1] [i_9 + 2] [i_9] [2] [8] = 1061830209;
                                arr_49 [8] [19] [7] [16] [i_10] = -32765;
                                arr_50 [i_0] [12] [15] [14] [6] [i_9 - 1] [i_2] = (199 > (arr_17 [11] [i_1] [i_2 - 2] [19]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = ((-((var_4 ? var_1 : var_4))));
    var_12 = var_1;
    var_13 &= var_4;
    var_14 = (min(3834, (((((var_2 ? var_8 : 3061821365707937302))) ? var_3 : var_9))));
    #pragma endscop
}
