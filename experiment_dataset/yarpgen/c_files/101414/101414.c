/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 &= ((((0 ? 1 : 1)) ^ (arr_4 [i_0 - 1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = -91;
                                arr_17 [i_1] [i_1] [i_1] = ((2 ? (75 < -850675288) : (!1)));
                                var_18 = (arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_3]);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] = (~((((!-91) > ((var_3 ? (arr_15 [0] [i_1] [i_1] [i_1] [0]) : 0))))));
                }
            }
        }
    }
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 = ((((arr_22 [18] [i_5] [i_6]) ^ (arr_22 [i_5] [2] [i_5]))));
                var_21 = (max(var_21, (((((((min((arr_23 [i_5]), 1)) >= (!var_14)))) - 1)))));
                var_22 = -127;
            }
        }
    }

    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_23 = (((((-(arr_16 [i_7] [i_7] [i_7] [i_7] [9])))) ? (arr_2 [i_7]) : 1));
        arr_26 [10] [10] &= (arr_13 [10] [10] [2]);
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_24 = (arr_24 [2] [2]);
        var_25 = (max(var_25, (arr_11 [i_8] [14] [16] [14])));
        var_26 = ((!(((-2039213669 - (1 - 2545602687))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_27 -= -2039213669;
        var_28 = (((arr_2 [i_9]) ? (arr_2 [i_9]) : (arr_30 [i_9])));
        var_29 = (arr_30 [i_9]);
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_30 = var_9;
        arr_33 [i_10] = (arr_22 [i_10] [i_10] [i_10]);
        arr_34 [i_10] [i_10] = 0;
        arr_35 [i_10] [i_10] = -6;
    }
    #pragma endscop
}
