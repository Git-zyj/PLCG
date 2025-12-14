/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(1, (min(-262143, (~var_6)))));
    var_15 |= 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (arr_2 [i_3 - 1])));
                                var_17 = ((~(arr_13 [i_4 - 3] [i_3] [i_4] [i_4 - 2] [i_4] [i_4] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = var_11;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_18 = (max((((((max(var_8, 1))) ? (~1) : ((var_12 ? var_13 : var_2))))), 3111321574314356716));
                    arr_25 [i_5] [i_7] = (((((-19912 ? var_9 : ((min(1, (arr_11 [i_5] [i_5] [i_5] [i_5]))))))) | (arr_2 [i_5 + 1])));
                    arr_26 [i_5] [i_6] [i_5] [i_7] = var_7;
                    var_19 = (min(var_7, var_12));
                }
            }
        }
        var_20 = (max(((-(arr_10 [i_5 + 1] [i_5] [i_5]))), (arr_20 [i_5])));
    }
    for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] [i_8] = var_1;
        arr_30 [i_8] = (min(((-19918 ^ (arr_24 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8]))), ((((144115187002114048 >= var_3) < ((-(arr_11 [i_8] [i_8] [i_8] [i_8]))))))));
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_41 [i_9 + 3] = (((min((!var_1), (arr_19 [i_8 - 1] [i_8] [i_8]))) * ((((((4691 ? 35184372088831 : var_6))) ? (var_9 >> 1) : (((0 && (arr_34 [i_9] [i_10])))))))));
                        arr_42 [i_8] [16] [i_8] [i_8] [i_8 - 1] = (((arr_11 [i_8 - 1] [i_9 - 2] [i_10] [i_11]) ? var_3 : var_7));
                        arr_43 [i_8] = ((((min((arr_23 [i_9] [i_10]), 2880590583678035451))) ? (arr_23 [i_10] [i_11]) : ((~(arr_23 [i_10] [i_8])))));
                        arr_44 [i_8] [i_9] [i_10] [i_10] [i_11] = var_11;
                    }
                }
            }
        }
        arr_45 [1] [11] = arr_11 [i_8] [i_8] [i_8] [i_8];
    }
    #pragma endscop
}
