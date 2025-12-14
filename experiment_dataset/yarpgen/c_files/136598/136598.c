/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = ((~((~(!-5689)))));
                var_19 = ((~(arr_5 [i_0 + 2] [i_0 + 2])));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_20 = (~-5689);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((!(arr_0 [i_3])));
                                var_22 = arr_12 [i_0] [i_1] [i_2] [i_0] [i_4];
                                var_23 |= (arr_0 [i_0]);
                                var_24 = (arr_0 [i_0 - 1]);
                                var_25 = (max(var_25, (((~(arr_9 [i_0]))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_26 = (arr_11 [16] [i_1] [i_1] [i_2] [i_2]);
                        var_27 = (arr_10 [i_1] [i_1]);

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_28 |= (arr_2 [i_0]);
                            var_29 = (!-818975873);
                        }
                        var_30 = ((-((~((-(arr_1 [i_0])))))));
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_31 = (arr_9 [i_7]);
                            var_32 = ((~(~-30753)));
                            var_33 ^= (!0);
                            var_34 = (max(var_34, (((~((~(arr_13 [i_0] [i_0] [i_0]))))))));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_35 = (arr_14 [i_0]);
                            var_36 = (arr_5 [i_1] [i_1]);
                            var_37 = (arr_19 [i_0] [i_1 + 2] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_38 = (arr_19 [i_1] [i_1] [i_10]);
                            var_39 ^= (arr_16 [i_0] [i_0] [i_2]);
                            var_40 = (!(arr_7 [11] [i_1] [i_0 - 2]));
                        }

                        for (int i_11 = 4; i_11 < 19;i_11 += 1)
                        {
                            var_41 = (-(arr_12 [12] [i_1 + 2] [i_2] [i_7] [i_11]));
                            var_42 = (arr_8 [i_1 + 1] [i_1 + 1] [i_11 - 4]);
                            var_43 = (min(var_43, (arr_7 [i_0] [i_1] [i_2])));
                            var_44 = ((~(arr_26 [i_1] [i_2] [i_1] [i_11 + 1])));
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_45 = (arr_8 [i_0] [i_1] [i_2]);
                            var_46 = 32;
                            var_47 = (arr_4 [i_1] [i_1 - 1]);
                            var_48 = ((!(arr_9 [i_0])));
                        }
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        var_49 = ((!((!((!(arr_10 [8] [i_1])))))));
                        var_50 = ((~((~((~(arr_2 [i_0])))))));
                    }
                }
                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 19;i_16 += 1)
                        {
                            {
                                var_51 = (arr_40 [19] [i_1 + 1] [i_14] [5] [i_16 + 2]);
                                var_52 = (~(arr_21 [i_0] [i_0] [8] [8] [i_0]));
                            }
                        }
                    }
                    var_53 = (~-450177976);

                    for (int i_17 = 2; i_17 < 20;i_17 += 1)
                    {
                        var_54 = ((-(((~(arr_8 [i_0] [i_1] [5]))))));
                        var_55 = (arr_5 [i_1 + 1] [i_17]);
                    }
                }
                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    var_56 = (arr_14 [i_0]);
                    var_57 = (!(((~(arr_17 [i_0] [i_1] [i_18 - 1] [i_0] [i_1 + 2])))));
                    var_58 &= (arr_38 [i_0] [i_0] [i_18 + 1] [i_18 + 1] [i_1] [i_18]);
                }
            }
        }
    }
    var_59 = var_7;
    var_60 = var_16;
    var_61 = -var_12;
    var_62 = var_11;
    #pragma endscop
}
