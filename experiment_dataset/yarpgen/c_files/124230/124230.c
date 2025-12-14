/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 -= (((arr_1 [i_0]) % ((20 ? 1 : (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((((((arr_2 [i_2]) ? (arr_4 [i_1] [i_3]) : (arr_6 [i_0] [i_3])))) ? -177828591 : ((var_9 ? var_6 : var_3)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_10 [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 3]) ? var_2 : (arr_10 [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 ^= (arr_4 [i_6] [i_6]);
                                arr_23 [1] [1] = -1063848272;
                                arr_24 [i_0] [i_1] [i_1] [11] [1] = (((arr_3 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? ((29 * (arr_14 [i_2] [i_2] [i_2] [i_2]))) : (((arr_7 [i_0] [i_1] [i_1]) ? (arr_16 [i_0] [i_1] [i_2] [i_2]) : var_5))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_28 [13] [i_7] = (+-1063848271);
        var_19 = (arr_16 [i_7] [i_7] [i_7] [i_7]);
        var_20 += ((47 ^ (((arr_8 [i_7] [i_7]) ? (arr_9 [i_7] [i_7] [i_7] [i_7]) : var_13))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_21 = (min(var_21, var_1));
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_41 [i_10] [i_10] [i_10] [14] [14] |= (((arr_17 [i_9 - 3] [i_9] [i_9 - 1] [i_9] [10]) ? var_4 : -var_3));
                                arr_42 [i_8] [i_11] [6] [16] [i_8] &= var_12;
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_22 = (max(var_22, (~var_13)));
                        var_23 = (((var_1 ^ (arr_44 [i_8] [i_9] [i_10] [i_13]))));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_48 [i_10] [9] = (((((var_12 ? (arr_27 [13]) : (arr_16 [19] [i_9] [18] [i_14])))) ? (((arr_7 [i_8] [i_8] [i_8]) ? 1063848272 : 122670558)) : (!0)));
                        arr_49 [i_9] [i_9] [i_8] [i_8] [i_9] = (((arr_33 [i_8] [i_9 - 2]) ? var_10 : (arr_33 [i_8] [i_9 + 1])));
                        arr_50 [i_10] &= var_3;
                    }
                }
            }
        }
        arr_51 [1] [i_8] = (!141);
    }
    var_24 ^= ((!var_5) ? var_0 : var_14);
    #pragma endscop
}
