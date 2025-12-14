/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (!1);
                                arr_12 [i_0] [i_0] [i_2 + 1] [i_3] [i_4] [i_0] = ((((arr_6 [i_1 + 3] [i_1] [i_2 + 2]) && (arr_9 [i_0] [i_0] [i_0] [i_0]))));
                                var_21 = (min(var_21, -var_8));
                                var_22 = (arr_6 [i_0] [i_0] [i_0]);
                                var_23 = (arr_5 [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_5] [i_5] [i_0] = 4932097390172323379;
                    var_24 = 1;
                    var_25 = ((((!(1 != 1)))) > (~1));
                    var_26 = 14237686838158174863;
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_6] [i_6] = var_7;
                    arr_22 [i_0] [i_0] [i_0] [i_6] |= ((!((max((arr_1 [i_1] [i_6]), ((-(arr_1 [i_1] [i_6]))))))));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_27 [16] [i_7] = var_19;
                    var_27 = (!(arr_11 [i_1] [i_1 + 1] [i_7 + 2] [i_1 + 1] [i_1 + 1] [i_0] [i_0]));
                    arr_28 [i_7] [i_7] [i_7] [i_7] = ((+(min((max((arr_5 [i_1] [i_1] [i_1]), 1)), 1))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_28 *= (arr_13 [i_0] [i_1] [i_0]);
                    var_29 = -18010000462970880;
                }

                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_30 = (!1);
                                var_31 = (max(var_31, 10161490740705403266));
                                var_32 = (1 & -1260716622);
                                var_33 = (min((arr_31 [i_9 + 3]), (arr_29 [i_0] [i_1] [i_9 - 1] [i_0])));
                            }
                        }
                    }

                    for (int i_12 = 4; i_12 < 22;i_12 += 1)
                    {
                        var_34 &= (((arr_8 [i_0] [12]) * (arr_3 [i_0])));
                        var_35 += var_9;
                        var_36 = ((((arr_15 [i_0]) - (arr_1 [i_0] [i_0]))));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_37 = 9653870766604287539;
                        var_38 = (arr_20 [i_0] [i_1] [i_9] [i_13]);
                    }
                    /* vectorizable */
                    for (int i_14 = 3; i_14 < 22;i_14 += 1)
                    {
                        var_39 = (arr_34 [i_9] [i_9] [i_9] [i_9] [i_9]);

                        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_1] [i_9] [i_1] [i_15] = 1;
                            arr_54 [i_0] [i_1] [i_0] [i_14] [i_15] [i_14] = (!4209057235551376752);
                            arr_55 [i_9] [i_9] [i_1] = 4592282884310249279;
                            arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_26 [i_9 - 1] [i_9 - 1] [i_14 - 3] [i_9 - 1];
                            var_40 = -1745957715;
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                        {
                            var_41 = (min(var_41, (arr_19 [i_0] [1])));
                            var_42 = 719423675;
                        }
                        arr_61 [i_0] [i_1 + 2] [16] [i_14] [i_1 + 3] = (arr_46 [i_0] [i_1] [i_0]);
                    }
                }
            }
        }
    }

    for (int i_17 = 1; i_17 < 8;i_17 += 1)
    {
        var_43 = (4209057235551376762 + 3);
        var_44 &= 16928678369049016502;
        arr_66 [i_17 + 4] [i_17 + 4] = 0;
    }
    var_45 = (max((!17293350833551137879), -18446744073709551612));
    #pragma endscop
}
