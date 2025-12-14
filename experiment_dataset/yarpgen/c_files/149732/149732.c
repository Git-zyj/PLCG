/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] = var_18;
                            arr_14 [i_0] [i_1] [i_2] [i_4] = var_1;
                            arr_15 [i_1] = (var_12 == var_0);
                        }
                        arr_16 [i_1] [i_1] = (arr_2 [i_2 + 3] [i_1 + 2]);
                        arr_17 [i_1] [i_1] [i_2] [i_3] = (((arr_5 [i_0]) - var_19));
                    }
                    arr_18 [i_0] [i_1] [i_2] [i_1] = (var_12 ? (~var_14) : ((var_16 << (var_16 - 35680))));
                    arr_19 [i_1] [i_1] = var_18;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, var_9));
                                var_21 += (-((-(arr_21 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
                                var_22 = 0;
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    arr_27 [i_1] [i_1] [i_7] = var_13;
                    arr_28 [i_1] [i_1] = ((!(arr_11 [i_1] [i_1] [i_7] [i_7] [i_7 + 1])));
                }
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    arr_31 [i_1] [i_8 - 1] [i_1 + 2] [i_1] = (!(arr_29 [i_8] [i_0] [i_0]));
                    arr_32 [i_0] [i_1] = (var_18 != var_12);
                }
                arr_33 [i_0] [i_1] [i_1] = var_15;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_40 [i_1] [i_1] = ((-(1 - 319534887)));
                            arr_41 [i_1] [i_0] [i_1] [i_9] [i_10] = var_6;
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    arr_46 [i_1] [i_1] [i_1] = var_6;

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        arr_49 [i_12] [i_1] [i_1] [i_1] [i_1] [i_0] = (var_19 % (arr_6 [i_1] [i_1] [i_1 + 1] [i_12 - 2]));
                        arr_50 [i_1] [i_1] [i_11] [i_11] [i_12] [i_12] = var_15;
                    }
                    for (int i_13 = 1; i_13 < 11;i_13 += 1)
                    {
                        var_23 = (max(var_23, var_16));
                        var_24 = var_12;
                    }
                    var_25 = ((-(((arr_53 [i_0] [i_1 + 1] [i_1] [i_0] [i_1]) - var_4))));
                }
            }
        }
    }
    var_26 = 2972292049;
    #pragma endscop
}
