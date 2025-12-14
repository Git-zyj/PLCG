/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 7582954418091609342;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 2] [13] [i_1] [0] = (max(((((((arr_2 [i_0 + 1]) ? 2387485423 : 1907481873)) >= (((var_5 ? (arr_10 [i_1] [i_1]) : var_8)))))), (max(1, (arr_5 [i_2 - 2])))));
                                arr_15 [i_1] [i_1] [i_3] = ((!(arr_9 [i_2 - 1])));
                                arr_16 [i_0] [i_0] [i_2] [i_2 - 2] [i_1] [i_4] = (min(255, ((max((arr_7 [i_3]), 255)))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_20 [i_0 + 2] [i_1] [i_1] = ((((0 >= 127) && ((min((arr_1 [i_0] [i_0]), var_3))))));
                    arr_21 [i_1] [1] [i_1] [i_1] = ((~(((!(arr_5 [i_5]))))));
                    arr_22 [i_1] = 255;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_27 [4] [4] [i_1] [i_1] [i_6] [2] = arr_8 [i_0] [15] [15];
                                arr_28 [1] [i_1] [1] [i_7] [i_1] = (((2047 ? var_14 : (min(var_9, 3241841343)))));
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_7 - 1] = (((((~(arr_13 [i_1] [i_1] [i_7 + 3] [4] [i_0 - 1])))) ? (max(var_14, (arr_0 [i_0 + 1]))) : (((arr_5 [i_7 - 1]) / (arr_5 [i_7 + 1])))));
                                arr_30 [0] [11] [i_1] [13] [i_1] [i_7] [i_7 - 1] = ((142 && (arr_26 [i_0 + 3])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    arr_33 [12] [i_1] [i_8] [i_1] = var_1;
                    arr_34 [i_0] [0] [i_8] [10] = (!2097151);
                }
                for (int i_9 = 3; i_9 < 14;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_41 [i_1] = (((max((arr_5 [i_9 - 3]), ((min(var_6, 65535))))) >> (((((((arr_9 [i_0]) ? var_8 : (arr_19 [i_0] [i_1] [8] [i_1]))) << ((((max(1, 28638))) - 28623)))) - 3962011644))));
                        arr_42 [i_0 + 1] [i_1] [2] [2] = ((((max(var_8, -65510))) ? (max(((1 ? (arr_31 [i_1] [3] [i_9] [3]) : 136)), 65419)) : ((((arr_32 [i_0 + 2] [4] [i_10] [i_10]) ? (arr_19 [i_0 - 1] [i_9] [i_9] [i_9 + 2]) : 1130718879)))));
                    }
                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {
                        arr_45 [8] [i_9 - 1] [i_11 - 1] = ((((var_0 + (((((arr_40 [i_0] [i_1]) && 1)))))) % ((max(0, ((var_11 ? var_3 : var_9)))))));
                        arr_46 [14] [i_1] [14] [i_1] = ((-((min(var_7, 65401)))));
                    }
                    arr_47 [5] [i_1] [5] = max(var_3, (min((arr_19 [13] [6] [13] [6]), ((max(1, 0))))));
                    arr_48 [14] [i_1] = (max(((var_0 ? -var_5 : (((!(arr_40 [14] [14])))))), (arr_6 [i_0] [10] [i_0])));
                    arr_49 [i_0 + 3] [i_1] = (max((var_10 && -73), var_7));
                    arr_50 [i_1] = 65393;
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_53 [i_1] = (max(((max((arr_51 [7] [i_0 + 1]), var_1))), (min((var_5 | var_4), 142))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_58 [i_0] [0] [i_12] [i_13] [i_1] = ((3241841343 ? (-122 > -83) : ((65533 ? ((224903416804980101 ? -64 : (arr_17 [i_0] [i_1] [i_12]))) : (~-6)))));
                                arr_59 [i_1] [10] [i_14] = 11450878065000314947;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                arr_64 [i_12] [i_1] [i_16] = var_11;
                                arr_65 [7] [i_1] [7] = 18;
                            }
                        }
                    }
                }
                arr_66 [i_0] [i_1] [i_1] = -21;
            }
        }
    }
    #pragma endscop
}
