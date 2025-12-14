/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = -116596022;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_2] [i_1] [i_0] = var_11;
                arr_10 [i_0] [i_1] [i_2] = (arr_1 [i_2]);
            }
            arr_11 [i_0] [i_0] = ((1 != (arr_0 [i_0])));
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_22 [i_3] [i_4] = (arr_14 [i_3]);

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        arr_26 [i_3] [i_4] [i_3] [i_6 - 2] |= (arr_25 [i_3] [i_6 - 2] [i_3] [i_3]);

                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            arr_30 [i_5] [i_5] [i_5] [i_5] = var_0;
                            arr_31 [i_7] [i_7] [i_7] [17] [i_7] = 255;
                            arr_32 [0] [i_4] [i_5] [i_6 - 2] [0] = 70;
                            arr_33 [i_3] [i_3] [i_6] [i_7] = ((0 ? (-2147483647 - 1) : -83));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_36 [i_3] [i_3] [i_4] [i_3] [i_3] [i_6] [i_8] = var_4;
                            arr_37 [i_3] [7] [i_4] [i_5] [i_6 + 1] [i_4] = ((var_15 ? (arr_28 [i_6 - 2] [i_6 - 2] [i_6 - 1]) : 2147483647));
                            arr_38 [i_3] [i_4] [i_5] [i_5] [i_6 - 1] [15] [i_4] = 51;
                            arr_39 [i_3] [6] [i_5] [i_5] [i_3] [6] [6] = ((var_15 ? 0 : (arr_20 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6 + 1])));
                            arr_40 [i_3] [i_3] [i_5] [i_6] [13] = (var_4 + 13);
                        }
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            arr_43 [i_5] [i_9] [i_9] [i_5] [i_9] [i_3] [i_3] = ((var_15 ? 1 : (arr_24 [i_6 + 1] [i_9 - 3] [i_6 + 1] [i_6 - 2] [i_5])));
                            arr_44 [i_3] [i_6] [i_6] [i_6] &= var_0;
                            arr_45 [i_3] [i_9] [i_9 + 4] [i_6 - 2] [i_9] = ((2147483635 ^ (arr_29 [i_3] [i_6 - 1] [i_6 + 1] [i_9 + 3])));
                        }
                        arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] = var_14;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_49 [i_3] [i_4] [i_3] = var_14;
                        arr_50 [i_3] [8] [i_3] [i_10] [i_10] = var_15;

                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            arr_53 [i_3] [i_3] [i_5] [i_3] [i_11 - 1] = ((var_5 ? ((3201296547017161538 >> (2147483635 - 2147483580))) : var_9));
                            arr_54 [i_5] [i_11] [i_5] = (max((arr_51 [i_3] [i_11] [i_10]), var_10));
                            arr_55 [i_3] [i_11] = ((((var_12 || 11252124247546429742) ? (arr_20 [i_10] [i_10] [i_10] [i_10]) : var_13)));
                            arr_56 [i_11] [1] [i_5] = var_6;
                            arr_57 [i_3] [i_3] [i_5] [i_3] [i_10] [i_11 + 2] = ((var_9 * (((!(arr_47 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 2]))))));
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            arr_60 [i_3] [i_4] [i_12] = ((2147483647 ? 0 : 1));
                            arr_61 [i_3] [i_3] [i_5] [i_10] [i_5] = (((arr_16 [i_4] [i_4]) ? ((((min(var_3, var_10))) ? ((var_11 ? var_11 : var_6)) : (-82 % -1524586467))) : ((max(871, ((var_3 ? (arr_35 [i_3] [i_3] [i_5] [i_10] [i_10] [i_12]) : 255)))))));
                            arr_62 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_4;
                        }
                    }
                    arr_63 [i_3] [i_4] [i_5] = var_9;
                }
            }
        }
    }
    var_16 = var_7;
    var_17 = var_11;
    #pragma endscop
}
