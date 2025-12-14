/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [2] [i_1 - 1] [i_1] [i_1] = (arr_2 [i_2 + 3]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((var_6 ? (arr_9 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 3]) : (arr_1 [i_2 - 1]))))));
                                var_18 = (min(var_18, (arr_0 [i_1 - 3])));
                                arr_13 [i_3] = var_15;
                            }
                        }
                    }
                }
            }
        }
        var_19 -= ((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0]));
        var_20 -= -144;
        arr_14 [i_0] [i_0] = ((var_12 ? (arr_7 [i_0] [i_0] [9]) : (arr_7 [i_0] [i_0] [i_0])));
        var_21 = ((arr_1 [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0]));
    }
    var_22 -= var_9;
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_23 [i_7] [i_6] [i_6] [i_6] = (((((max((!var_11), (arr_18 [i_6]))))) | ((143 ? (arr_21 [i_5 - 1] [i_5 + 1]) : (arr_5 [i_5 + 1] [i_5 - 1] [i_5 + 1])))));
                    var_23 -= ((((((~(arr_7 [0] [i_6] [i_6]))) / var_8)) <= var_1));
                    var_24 += (min(((((arr_9 [i_5 - 1] [i_5] [i_5 - 1] [i_5]) ? (arr_19 [i_5] [i_6] [i_7]) : (var_6 == -4257108537130977774)))), -var_7));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_27 [8] = (max((arr_26 [8] [i_8]), (min(var_4, var_13))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    var_25 += (arr_26 [i_9 - 3] [i_9]);
                    var_26 = ((~(113 && var_0)));
                    var_27 = (max(var_27, -var_12));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_39 [i_8] [i_10] [i_8] [i_8] [i_8] = (max(var_3, var_5));
                                arr_40 [i_12 - 3] [i_11] [i_10] [i_9] [22] = (max((((((var_13 ? var_9 : 113)) - (arr_29 [i_10] [i_10] [i_8])))), var_4));
                                arr_41 [i_10] [i_9] [i_9] [i_9] [i_9] [i_9] = (((((!145) != ((108 | (arr_28 [i_8] [i_9]))))) && ((min(-1575404096268102647, 0)))));
                            }
                        }
                    }
                    arr_42 [i_10] [i_10] [i_10] [i_9] = 150;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 22;i_16 += 1)
                        {
                            {
                                arr_53 [3] [i_15] [i_13] = (i_13 % 2 == zero) ? (((((var_15 >> (((arr_52 [i_8] [i_13 + 1] [i_14] [i_14] [i_13]) - 254399525615518105)))) - 105))) : (((((var_15 >> (((((arr_52 [i_8] [i_13 + 1] [i_14] [i_14] [i_13]) - 254399525615518105)) + 2846843522299782998)))) - 105)));
                                arr_54 [i_13] [i_13] = (max((arr_51 [i_16 - 1] [i_13] [i_16 + 1] [i_16 + 1] [i_16 + 1]), (((arr_51 [i_16 + 1] [i_13] [i_14] [i_13] [i_8]) ? (!var_3) : var_5))));
                            }
                        }
                    }
                    var_28 = (min(var_28, (min(-4513895926162834893, 22))));
                }
            }
        }
    }
    for (int i_17 = 3; i_17 < 17;i_17 += 1)
    {
        arr_58 [i_17 - 2] = ((150 ? 16 : -7853205386972567321));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 19;i_20 += 1)
                {
                    {
                        arr_66 [12] [i_17] [i_19] [12] [i_17] [i_17] = 0;
                        arr_67 [i_19] [i_19] = ((~(!var_12)));
                    }
                }
            }
        }
    }
    var_29 = (min(((var_0 ? (min(var_10, -7853205386972567321)) : (min(var_7, -1644221854)))), var_7));
    #pragma endscop
}
