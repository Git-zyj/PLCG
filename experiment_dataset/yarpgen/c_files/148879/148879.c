/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] = (((((var_9 ? 128 : (arr_8 [i_0] [i_1 - 4] [i_2 + 1] [i_3])))) ? (max((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 - 2] [i_1 - 2]))) : (((((2 ? 128 : (arr_3 [i_2] [i_3]))) * 45)))));
                            arr_10 [i_0] [i_1] [13] [i_2] [i_2] |= (((((arr_2 [i_0]) ^ var_9))) ? var_1 : (max((arr_7 [i_1] [i_0]), (arr_1 [i_0]))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = (((((min((arr_4 [i_2 + 1]), (arr_4 [i_2 - 2]))))) < (max((arr_4 [i_2 + 1]), (arr_1 [i_2 + 1])))));
                        }
                    }
                }
                arr_12 [i_0] = ((((min((((94 ? (arr_4 [i_0]) : 206))), (((arr_8 [i_1] [i_1] [7] [i_0]) ? -5211987517728527857 : 128))))) ? ((-(arr_7 [i_0] [i_1 + 1]))) : -8097035760413830254));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_4] = (arr_7 [i_1 - 3] [i_1 - 2]);
                            arr_21 [16] [i_1] [i_1] [16] [3] [i_1 - 2] = ((((!var_8) ? (arr_17 [i_1 - 2] [i_1] [i_4 + 2] [i_1]) : (arr_5 [i_0] [i_1 - 2] [i_0] [i_1 - 2]))));
                            arr_22 [i_0] [i_1 + 1] [i_4 - 2] [i_5] = (arr_6 [i_0]);
                        }
                    }
                }

                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    arr_27 [i_0] [i_1 + 1] [i_1 - 4] [i_6] = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (min((arr_19 [i_8] [i_7] [i_6] [i_0] [i_0] [i_0]), ((22 ? 70 : (-9223372036854775807 - 1)))));
                                arr_33 [i_8] [i_1] [1] [i_1] [i_8 - 1] = 11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_38 [i_0] [i_6 - 1] [i_9] = 0;
                                arr_39 [i_0] [i_1] [i_9] [i_10] = max(var_5, (min((arr_5 [i_0] [i_0] [i_0] [i_0]), var_9)));
                                arr_40 [i_0] [i_0] [i_6 + 1] [i_9] = (min(((var_14 % (arr_15 [i_0] [i_0] [i_6]))), ((var_3 ? var_14 : (arr_29 [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 - 2])))));
                            }
                        }
                    }
                    arr_41 [i_0] = (((arr_7 [i_1] [i_1 - 1]) ? ((((min(141753311018374388, 60))) ? (arr_35 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6]) : (var_6 / var_2))) : (min((arr_23 [i_0] [i_0]), (((arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_6 - 3]) | var_11))))));
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_49 [i_0] [i_1 - 1] [i_11] [i_11] [i_12] [i_13 - 3] = ((((118635763 ? (((var_10 + (arr_0 [i_12] [i_13])))) : -5211987517728527855))) ? (min(var_15, ((var_8 ? var_15 : 4176331533)))) : 3517166787);
                                arr_50 [i_13 - 3] [i_13 - 3] [i_13] [i_13] [i_13] &= 4294967295;
                                arr_51 [i_11] = ((22 ? 132 : 62));
                            }
                        }
                    }
                    arr_52 [i_11] [i_11] [i_0] = ((var_5 >> ((((~((min(1, (arr_0 [i_1 + 1] [i_1 + 1])))))) + 11))));
                }
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        arr_57 [i_0] = (+-85);
                        arr_58 [i_0] [i_0] [i_0] [i_0] = arr_3 [i_15] [i_1];
                    }
                    arr_59 [i_14] [i_1] [i_0] = ((max((max((arr_46 [i_0] [i_0] [i_0] [i_0]), var_1)), (arr_29 [i_0] [i_0] [i_14] [i_0]))));
                    arr_60 [i_0] [i_1 - 4] = ((68448603 ? 563316403 : 1));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    arr_64 [i_1] [i_1] [i_16] [i_1 - 3] = (!131008);
                    arr_65 [i_0] [i_0] [i_16] [i_16] = (arr_3 [i_1 + 1] [i_1 - 4]);
                    arr_66 [i_0] [15] [i_1 + 1] [i_16] = 128;
                }
            }
        }
    }
    #pragma endscop
}
