/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~(arr_3 [i_1 + 1])));

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_0] [12] [11] = 17;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1 - 1] [i_4] [i_1] [i_4] = ((var_10 * (((arr_9 [i_0] [i_0] [i_0]) - (4660 | 3482935617728045490)))));
                                arr_19 [i_0] = (arr_3 [i_4]);
                                arr_20 [i_1] [i_2 + 1] [i_3] = ((-((((3482935617728045490 != 4676) <= var_16)))));
                            }
                        }
                    }
                    arr_21 [i_2 - 2] = (max(((((-127 - 1) <= 3482935617728045513))), (max((arr_15 [i_2 + 2] [i_2] [i_2] [i_2] [i_2 + 2] [i_2]), var_7))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_24 [i_0] [i_5] = (arr_2 [i_5] [i_1] [i_0]);
                    arr_25 [i_5] [i_1] [i_1] [i_0] = (max(4643, (((((3482935617728045490 ? (-127 - 1) : -4665))) / 2359698072810370087))));
                }
                arr_26 [i_1 - 1] [i_0] |= ((-((min((arr_2 [i_1] [i_1 + 1] [i_0]), 1)))));
                arr_27 [i_0] [i_0] [i_0] |= var_13;
                arr_28 [3] = (max(var_13, ((-4671 ? 1 : 17286591001083139366))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_39 [i_8] [i_9] = (arr_38 [i_6] [5] [i_8] [i_9 - 3] [5] [i_6]);
                                arr_40 [i_6] [i_7] [i_8] [i_9 - 1] [i_10 + 1] = ((+((+((((arr_33 [i_6] [i_7] [i_7] [i_10]) && (arr_23 [i_10 - 1] [i_7]))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_43 [i_6] [i_6] [i_8] [i_11] [i_11] = -14963808455981506128;

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_46 [i_6] [9] [i_11] [i_11] [i_12] [i_12] = var_14;
                            arr_47 [i_6] [8] [12] [i_11] [i_11] [12] [i_6] |= (arr_37 [i_6] [i_7] [i_8] [i_8] [i_11] [i_12]);
                            arr_48 [i_12] [i_12] [i_11] = var_2;
                            arr_49 [i_7] [i_7] [i_6] [8] [1] [i_6] [i_11] = ((var_12 ? var_16 : var_5));
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            arr_53 [i_6] [i_7] [i_8] [i_8] [8] [i_13] = (~var_10);
                            arr_54 [i_6] [i_7] [i_8] [i_11] [i_11] [i_13] = (((((-127 - 1) ? 16087046000899181529 : var_18))) ? ((15522701723572026995 ? 1160153072626412276 : -20007)) : (arr_15 [i_6] [i_7] [i_7] [i_8] [i_11] [i_13]));
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        arr_57 [i_6] [i_7] [i_7] [i_8] [i_14] [12] = ((-4660 ? ((var_18 ? 3482935617728045491 : var_13)) : (125 == -3977195765161823741)));
                        arr_58 [i_6] [i_7] [i_14] [10] = (var_16 ? (arr_30 [i_14 + 1]) : (arr_30 [i_14 - 1]));
                        arr_59 [i_14] [8] [8] [i_6] = (((arr_36 [i_6] [i_7] [i_8] [i_14]) ^ var_18));
                        arr_60 [i_14] = var_18;
                    }
                    arr_61 [i_6] = (max((min(((((arr_45 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) < var_17))), ((var_0 ? var_19 : var_9)))), var_15));
                    arr_62 [i_7] = 4665;
                }
            }
        }
    }
    #pragma endscop
}
