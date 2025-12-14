/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (!((((((-9206023734421195638 ? -7 : var_14))) & (~var_18)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((var_17 ? -var_11 : -0));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = (arr_2 [i_1] [i_2]);
                            var_19 = -9206023734421195628;
                            arr_12 [i_2] [i_1] [i_2] [i_3] [i_1] [i_3] = var_1;
                        }
                    }
                }
                var_20 += (max((((~1319234855) ^ var_0)), var_15));
                var_21 = (44 % 855405114);
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_16 [i_4] = var_6;
        var_22 *= var_14;
        arr_17 [i_4] [i_4] = (((((-((var_11 ? var_9 : var_10))))) ? (!52) : ((min(var_9, (((var_8 && (arr_14 [i_4])))))))));
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_35 [i_5] [i_9] [1] [i_8] [i_9] [i_5] [i_7 - 1] = 18446744073709551615;
                                var_23 = var_5;
                            }
                        }
                    }
                    var_24 += var_10;

                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        var_25 = 9206023734421195629;
                        arr_38 [i_5] [i_5] [i_5] [i_5] [7] [i_5] = (((arr_15 [i_5]) + ((((!(((var_10 ? var_1 : var_1)))))))));
                        var_26 = (max(((((arr_22 [i_10 - 1] [i_10 - 1] [i_7 + 3]) ? var_14 : var_1))), (max(9206023734421195638, var_14))));
                    }
                    var_27 = ((~(arr_32 [i_5] [1] [i_5] [i_5] [1] [1] [1])));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_43 [i_12] = ((~(((arr_32 [10] [10] [12] [8] [i_11 - 3] [i_11 - 1] [4]) ? var_3 : (arr_32 [i_7 + 2] [i_11] [i_11] [i_11 - 2] [i_11 - 3] [i_11 - 3] [10])))));
                                arr_44 [i_5] [i_11] [i_7] [i_6] [i_5] = var_3;
                            }
                        }
                    }
                }
            }
        }
        var_28 = 6620702294106461713;
        arr_45 [i_5] = ((+(((var_18 < -110) ? (arr_14 [i_5]) : (arr_25 [i_5] [i_5] [i_5])))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        var_29 |= ((32827 ? ((~((-11 ? var_10 : 63)))) : (((59 * ((min(var_6, var_12))))))));
                        var_30 = (max(1, 4019008597));
                        var_31 += 507022179;
                        var_32 = -9206023734421195638;
                        var_33 = ((~(((arr_34 [i_5] [i_13] [i_14] [i_14] [i_15]) ? (arr_34 [i_5] [i_13] [i_14] [i_15] [i_15]) : var_0))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            {
                arr_61 [i_17] = ((!(((var_15 ? (arr_20 [i_17]) : (arr_20 [i_16]))))));
                var_34 = var_3;
                arr_62 [i_16] [i_17] = var_17;
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        {
                            var_35 = (var_17 - 13905546833256399375);
                            var_36 = (((((var_6 ? (arr_49 [i_16] [i_16]) : var_8))) ? (var_11 / 7) : ((max(22, (min(-2036324760459627647, -53)))))));
                            arr_70 [i_16] [i_17] [i_18] [i_19] = ((~(max((max(1602092620, var_6)), 1))));
                            arr_71 [i_17] = (!6);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 3; i_20 < 9;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        {
                            var_37 = (max(var_37, ((((!((min(7600313929417454930, (arr_60 [i_16] [i_16]))))))))));
                            var_38 = 3301420360;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
