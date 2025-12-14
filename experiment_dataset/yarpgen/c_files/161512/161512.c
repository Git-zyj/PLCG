/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = -1702269943;
                    arr_9 [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_4] [i_3] = ((!(arr_11 [i_3] [i_4])));
                arr_18 [i_3] = (min((max(2465611775250501993, 1702269944)), (arr_2 [i_3])));
                arr_19 [i_3] [i_3] = (arr_6 [i_3] [i_4]);

                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_22 [i_3] [i_3] [i_5 - 1] = (var_4 == var_2);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_29 [i_3] [i_4] [i_5] [i_6 + 1] [i_3] = var_3;
                                arr_30 [i_3] [i_4] [i_3] = ((!(~0)));
                            }
                        }
                    }
                    arr_31 [i_3] [i_3] [i_4] [i_5] = (arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_36 [i_3] = var_5;
                    arr_37 [i_3] [i_4] = (((arr_34 [i_3]) ? (arr_1 [i_3]) : ((((1 || (arr_27 [i_3] [i_3] [i_3] [i_3])))))));
                    arr_38 [i_3] [i_3] [i_3] [i_3] = ((arr_3 [i_8] [i_8]) ? (arr_3 [i_8] [i_3]) : (arr_3 [i_3] [i_3]));
                }
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    arr_41 [i_3] = (((((((max(var_4, -6368373083280277162))) ? (arr_15 [i_3] [i_3] [i_9 + 4]) : 1))) | ((((arr_32 [i_3] [i_3] [i_3] [i_9]) ? var_1 : var_7)))));
                    arr_42 [i_3] = (max((((((71 | (arr_26 [1] [i_4])))) ? (~var_11) : (max(-111, -1812296741)))), -32122));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_48 [i_3] [i_4] [18] [i_3] [i_11] = (((!var_14) ? var_4 : (arr_0 [i_3] [i_4])));
                                arr_49 [i_3] [i_4] [i_9 + 4] [i_3] [i_11] = (min(((max((arr_15 [i_3] [i_3] [1]), (arr_15 [i_9] [i_3] [i_9])))), (arr_15 [i_3] [i_3] [i_9])));
                            }
                        }
                    }
                    arr_50 [i_3] [i_4] [i_3] [i_3] = (max(((var_5 ? var_6 : 1)), ((((max(var_7, (arr_24 [i_3] [1] [i_3] [1] [1])))) ? (((arr_13 [i_3] [i_3]) ? var_1 : var_10)) : (((arr_2 [i_3]) * var_1))))));
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    arr_55 [i_3] [i_4] [20] [20] = -var_2;
                    arr_56 [i_3] [i_3] [i_12] = (var_8 ^ (-var_3 / -var_11));
                    arr_57 [18] [20] [i_4] [i_12] = (((18 - ((max(var_13, (arr_21 [20])))))));
                }
            }
        }
    }
    var_15 = (max((var_7 + var_3), var_13));
    #pragma endscop
}
