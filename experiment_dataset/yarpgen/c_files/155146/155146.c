/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((((1 ? (arr_9 [i_0 + 1] [i_0 + 2] [i_0 - 3] [i_0 - 2]) : (arr_9 [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 + 2])))) ? var_8 : ((((arr_9 [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 3]) : (arr_9 [i_0 - 1] [i_0 - 3] [i_0 - 2] [i_0 + 1]))))));
                                arr_14 [5] [i_3] [i_1] [i_1] [i_0] = (arr_2 [9] [i_2]);
                                var_17 = (arr_3 [i_0] [i_0 - 3] [i_0]);
                                arr_15 [i_1] [i_4] = ((~(min((arr_13 [1] [i_0] [7] [i_0] [i_0] [i_0 + 1]), (arr_13 [i_0] [i_0] [9] [i_0] [i_0] [i_0 - 3])))));
                                var_18 = ((((min((arr_2 [6] [i_0 - 3]), (arr_2 [2] [i_0 + 1])))) ? var_11 : (arr_8 [i_1] [i_1])));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [1] [i_0] = (arr_0 [i_1]);
                    var_19 = (arr_2 [5] [3]);
                }
            }
        }
    }
    var_20 -= ((var_1 ? var_11 : var_3));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_21 = (arr_19 [i_6]);
                            arr_28 [11] [11] [11] [i_7] [i_8] = (min((arr_19 [i_5]), -var_7));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    arr_32 [12] [i_6 - 1] [1] = (((arr_21 [i_5 + 1] [18]) ? (arr_27 [15] [i_6] [i_9] [18]) : var_1));
                    arr_33 [i_5 + 2] [8] [i_6] [i_9] = (min((((arr_31 [i_5] [i_5 + 2] [13]) ? var_11 : (arr_31 [i_5] [i_5 - 2] [3]))), ((var_9 | (arr_31 [13] [i_5 - 2] [i_6 + 1])))));
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_22 = ((!(arr_23 [i_5] [i_5 + 2] [i_5 + 2] [i_11])));
                                var_23 -= 1;
                            }
                        }
                    }
                    arr_40 [i_5] [i_6] [i_10] [i_5] = (arr_23 [i_6 + 1] [1] [i_6 + 1] [i_5 + 1]);
                    arr_41 [18] [18] [1] [i_5 - 1] = (arr_20 [6] [15] [i_10]);
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_24 = (min(1, ((((!(arr_24 [i_6 - 1] [i_13] [i_6 - 1]))) ? ((var_15 ? (arr_19 [i_13]) : 3020322466)) : var_1))));
                                arr_46 [i_13] [i_13] [i_13] = (arr_36 [i_13 + 1] [i_10] [i_6 - 2]);
                                arr_47 [i_5] [i_6] [0] [i_5] [i_14] = ((!((((arr_29 [i_5 + 2]) ? (!1) : 1035848166)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
