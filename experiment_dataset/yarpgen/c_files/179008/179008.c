/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (((~var_5) ? (~var_2) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = (min((((min(3337863307, -104)))), (((var_7 ? var_3 : var_13)))));
                    arr_8 [i_1] [i_1] [1] = (((min(var_10, var_5))) ? (max(957103989, -78)) : var_6);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [9] [i_4] [i_2] &= (min(var_9, (max(var_13, var_2))));
                                arr_15 [i_0] [i_0] [13] [i_0] [12] [12] [i_0] = (max(var_7, (((var_9 ? var_5 : var_7)))));
                                arr_16 [i_4] [i_3 - 1] [i_2] [i_2] [i_0] [i_0] = (max(((~(!var_7))), var_0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [i_6] = max((((var_11 ? var_11 : var_8))), ((var_13 ? var_6 : var_10)));
                                arr_25 [i_0] [i_0] [i_6] [i_5] [i_6] = (max(var_13, (max(-36692556, -22601))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    arr_37 [i_7] [i_7 + 1] [i_7] [i_7] = ((max(var_9, var_13)));
                    arr_38 [i_7 - 2] [1] [i_8] [i_9] = max(((min(2333390604, 0))), (min(var_1, var_12)));
                    arr_39 [i_7] [4] [i_7] = var_12;
                    arr_40 [i_7] [i_8] [i_7] = (max(var_1, ((max(var_5, var_7)))));
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    arr_43 [i_10] [i_10] = (min(var_9, (max(var_2, var_13))));

                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {

                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            arr_50 [i_10] [i_10] [i_10] [10] = ((-(max(var_0, var_8))));
                            arr_51 [i_10] [i_11] [i_10] [i_10] = var_13;
                            arr_52 [i_7] [i_8] [i_10] [i_11] [0] = (min(var_8, (!3219559000)));
                        }
                        arr_53 [i_7] [8] [i_10] [i_7 + 1] [i_7] = var_2;
                        arr_54 [i_10] [8] [i_10] = ((max((min(78, -4052092154405259317)), ((max(-90, var_2))))));
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_64 [i_7] [i_14] [i_13] [i_14] [i_15] = var_3;
                                arr_65 [i_7] [i_8] [i_8] [i_7] [i_14] = var_2;
                                arr_66 [i_7] [i_7] [8] [i_7] [i_7 - 3] [i_7] |= var_9;
                                arr_67 [i_14] [i_14] [i_8] [i_13] [10] [i_15 - 1] = var_6;
                            }
                        }
                    }
                    arr_68 [i_13] = var_5;
                    arr_69 [i_7] = var_10;
                }
                arr_70 [i_7] [6] = ((max(var_11, ((var_11 ? var_13 : var_8)))));
                arr_71 [i_7] [i_7] [i_7] = ((((min(var_2, var_8))) ? var_12 : (min(var_1, var_2))));
                arr_72 [0] [6] = var_10;
            }
        }
    }
    #pragma endscop
}
