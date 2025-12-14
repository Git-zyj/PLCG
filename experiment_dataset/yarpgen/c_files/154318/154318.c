/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] = (((var_0 || 1499693786) || (arr_1 [i_0 + 1])));

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    arr_8 [4] = var_3;

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1 - 1] [i_2] [i_3] = (!3);
                        var_17 = (max(((((arr_2 [i_1 + 2] [i_3 + 2]) < (arr_10 [i_3])))), -13484));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_4] [i_1] [i_2 - 1] = 127;
                        arr_16 [1] [i_4] [i_2] [19] = ((+(((((arr_14 [1] [i_1] [1] [3] [i_4]) - var_15)) * (((((arr_13 [i_4] [i_4]) < (arr_13 [i_4] [i_1 - 1])))))))));
                        var_18 += (((((((max((arr_1 [i_2 - 3]), (arr_13 [i_0] [i_1 + 2])))) ? var_1 : (max(var_11, 0))))) ? (((min(var_5, (arr_12 [i_0] [i_1] [i_2] [i_4] [i_4 - 1] [i_0]))) + (0 && -7))) : ((((((arr_4 [i_2] [i_0]) * 0))) ? var_13 : var_13))));
                    }
                    var_19 += (((((arr_14 [i_0] [i_1] [i_2] [i_0 - 1] [i_0]) | (arr_14 [i_0] [i_1] [i_2] [i_2] [i_0])))) < ((7141374613108614080 / (arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 += ((-(arr_9 [i_0] [i_0 - 2] [i_0] [i_0])));
                                var_21 += 80;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    arr_24 [i_0] [i_1 - 1] [i_1] [i_7] = (arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_7]);
                    var_22 = ((2697098815 ? 255 : var_11));
                    arr_25 [i_0] [i_0] [i_1] [i_7] |= ((-(arr_18 [i_7 + 1] [i_1] [i_1 + 1])));
                }
                arr_26 [i_0] [i_0] [i_1] = ((((((arr_4 [i_0] [i_1 - 1]) / ((max(var_11, (arr_13 [i_0] [i_1]))))))) ? 9223372036854775807 : (max((max((arr_18 [i_0] [i_0] [i_1]), (arr_4 [i_1] [i_0]))), (arr_18 [i_0] [16] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 8;i_9 += 1)
        {
            {
                var_23 = (((((arr_29 [i_9 + 1] [i_9 + 1]) ? var_4 : var_10)) < (((-256 ? -101 : 108)))));
                arr_34 [i_8] = ((((((((6945 ? 17592186044415 : -9223372036854775807))) && (((-9223372036854775807 / (arr_21 [i_8] [i_9] [i_9] [1]))))))) % (var_12 | var_12)));
                arr_35 [i_8] [i_9] = (max((arr_18 [i_8] [i_9] [i_8]), 135));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 8;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_24 = (max(var_24, (~-9223372036854775800)));
                    arr_44 [i_11] = ((((min(var_0, (arr_42 [i_10 - 1])))) ^ ((-(arr_42 [i_10 + 1])))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_25 = ((~(!254)));
                                var_26 *= (((max(var_14, (arr_39 [i_11 + 1]))) == ((-(arr_14 [i_10 + 2] [i_12] [i_14] [i_14] [i_13])))));
                                arr_49 [i_10 - 1] [i_11] [i_12] [i_13] [10] [i_12] [i_11] = (max((arr_39 [i_10]), 8));
                            }
                        }
                    }

                    for (int i_15 = 3; i_15 < 9;i_15 += 1)
                    {
                        var_27 += ((-(arr_40 [i_11] [i_12])));
                        arr_52 [i_11] [i_11] [i_12] [i_15 + 1] = (max(((9866593256868825252 ? (arr_10 [i_15 + 2]) : var_10)), (arr_10 [i_15 + 3])));
                        arr_53 [i_10] [i_11] [i_12] [i_15 - 1] = ((!(((var_12 ? -58 : (arr_36 [i_11 + 3] [i_10 + 2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
