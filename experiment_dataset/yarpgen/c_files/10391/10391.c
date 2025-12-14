/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        var_19 = (((var_10 % (arr_2 [0]))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 &= var_5;
                        var_21 += (((arr_10 [i_0] [1] [i_2] [i_2] [i_1 + 1]) % var_7));
                        var_22 = (arr_3 [i_0] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 = var_14;
        var_24 &= (((arr_11 [i_4]) ? var_5 : ((var_3 ? var_10 : var_3))));
        var_25 = (((var_2 ? var_16 : (arr_13 [i_4] [i_4]))));
        var_26 = ((-((var_15 << (((arr_13 [i_4] [i_4]) + 5568395970837676290))))));
        var_27 = (((((arr_13 [i_4] [i_4]) & var_17)) & var_10));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_28 = (min(var_28, ((var_1 ? ((min(var_2, (arr_15 [i_5])))) : var_2))));
        var_29 = ((((arr_15 [i_5]) != var_4)));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_30 = ((((min((arr_19 [i_6 + 2]), var_6))) + ((var_9 ? var_2 : (arr_19 [i_6 - 1])))));

                /* vectorizable */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    var_31 = var_10;
                    var_32 ^= var_0;
                    var_33 = ((arr_23 [i_8] [i_8 - 1] [i_8 - 1] [i_7]) ? var_8 : (arr_23 [i_8] [i_8 + 1] [i_6 + 1] [13]));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_34 = (min(var_34, ((((((var_5 | (arr_21 [i_6] [i_6 + 2])))) ? -var_4 : (var_7 / var_6))))));

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_35 = var_10;
                        var_36 = (arr_22 [i_6 + 1] [i_6 + 2] [i_6 + 2]);
                        var_37 = var_6;
                        var_38 = ((~(arr_20 [i_6] [i_6 + 2] [0])));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_39 ^= (arr_22 [i_6] [i_6 + 1] [8]);

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_40 ^= (41921 || 23614);
                            var_41 = var_9;
                            var_42 = ((-32 ? -1 : 30567));
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_43 += ((var_16 & (arr_24 [i_6 + 1] [i_6 + 2] [i_6 + 1])));
                            var_44 = (((arr_12 [i_6 + 1]) & (arr_12 [i_6 - 1])));
                            var_45 += ((var_6 - (arr_18 [i_6 - 1] [i_6 - 1] [9])));
                        }
                        for (int i_14 = 1; i_14 < 22;i_14 += 1)
                        {
                            var_46 = (arr_35 [i_11] [i_11] [i_14 - 1] [i_14] [15] [i_14 + 1]);
                            var_47 = (~var_2);
                            var_48 = (var_11 - var_10);
                            var_49 = (max(var_49, ((((var_10 ? var_12 : var_17))))));
                        }
                        var_50 &= ((!(arr_22 [i_6] [18] [i_11])));
                        var_51 -= var_3;
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_52 &= (var_15 & var_9);
                        var_53 ^= (~90);
                        var_54 = ((var_4 ? (((arr_28 [i_6 + 1] [1] [i_9] [4]) + var_3)) : var_16));
                    }
                    var_55 = (max(var_55, ((((((arr_36 [i_7] [i_7] [i_6] [i_9] [i_7]) != var_3)) ? var_15 : (arr_39 [i_6 + 1] [i_6 - 1] [i_7]))))));
                }
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    var_56 = ((-(var_4 * var_4)));
                    var_57 |= (min(((((arr_22 [i_6 + 1] [i_6 - 1] [i_6 + 2]) / var_5))), (var_14 * var_1)));
                    var_58 = var_10;
                    var_59 = (((~var_7) & var_8));
                }
                var_60 += 28;
                var_61 += ((-((min((arr_40 [i_7] [i_6 - 1] [i_6 - 1] [i_6 + 1]), (min(var_16, var_13)))))));
                var_62 = (max(var_62, var_9));
            }
        }
    }
    #pragma endscop
}
