/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 &= (((65535 < var_4) >> (((arr_1 [24] [i_0]) + 9359))));
        arr_2 [i_0] = var_9;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (min(((var_19 / (arr_3 [i_1 + 2] [i_1 + 3]))), var_0));
        var_21 = (min(var_21, ((max(((~(((arr_4 [i_1]) ? var_14 : var_9)))), var_11)))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (((((min(65530, 65532)))) && ((max((arr_6 [i_2] [i_2 + 1]), var_5)))));
        var_22 = (max(var_22, (((!(((-1161797407660045006 ? var_17 : var_3))))))));
        var_23 = var_13;
        var_24 = (max(var_24, (((~((44653 >> (1161797407660045005 - 1161797407660044982))))))));
    }
    var_25 = 7427;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_22 [11] [i_3] [i_3] [i_3] [i_3] = 64;
                            var_26 = (107 - -var_9);
                            var_27 = (((arr_19 [i_4] [1]) < ((((~(arr_20 [9] [i_6] [i_6] [13] [i_4] [i_4] [9]))) ^ 64))));
                            arr_23 [i_3] [i_4] [i_5] [i_6] [i_5] [i_7] = var_14;
                            arr_24 [i_7] [i_6] [i_5] [i_3] = (((((((var_5 ? var_14 : (arr_15 [12] [i_4] [i_5] [2])))) + 1161797407660045005)) > ((((min(65144, var_6)) - (((max(-9925, var_3)))))))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_28 [i_8] [i_8] [i_8] [8] [i_8] [i_8] = (max((arr_1 [i_8] [i_6]), (~107)));
                            arr_29 [i_3] [i_3] [i_8] [i_6] [i_3] = (((((arr_12 [i_3] [i_4]) < 106)) ? (!var_19) : (max((arr_12 [i_4] [i_4]), (arr_8 [i_8])))));
                            var_28 = -109;
                            var_29 = (((var_10 + 28755) || var_3));
                            arr_30 [i_8] = (((((arr_8 [i_3]) >> (var_16 - 57091)))));
                        }
                        var_30 = (min(var_30, ((min((65535 >= 1161797407660045005), ((var_6 * (arr_19 [i_3] [i_4]))))))));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            var_31 = ((((1556354537 ^ (-127 - 1))) << (((arr_8 [i_5]) - 1073624510))));
                            var_32 = (((((~(-127 - 1)))) == (arr_34 [i_3] [i_4] [i_10 + 1] [i_9] [i_10])));
                        }
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            var_33 = (min(var_4, (((((var_7 ? 127 : var_15)) < -20641)))));
                            arr_40 [i_3] [i_3] [i_5] [i_9] [i_11] [i_9] = var_9;
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            arr_43 [16] [i_9] &= (((arr_3 [i_12 + 1] [i_12 + 3]) + 0));
                            arr_44 [i_3] [i_4] [i_5] [i_9] [i_12] = (((var_7 < -28756) == -1161797407660045020));
                            var_34 += (((((-1161797407660045013 ? 9920 : 1161797407660045005))) ? 1 : 1161797407660044992));
                            var_35 += 9950;
                        }
                        /* vectorizable */
                        for (int i_13 = 4; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            arr_47 [i_9] [i_4] [i_5] [1] [1] = (((var_11 < 9352) > var_3));
                            var_36 = -var_10;
                        }
                        arr_48 [i_4] [i_4] = (-123 && -69);
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        arr_52 [1] [i_5] [17] = (var_1 > var_3);
                        var_37 = (24 == 13206);
                        var_38 = (arr_36 [i_3] [i_4] [i_4] [i_5] [3] [i_4]);
                    }
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        var_39 = var_17;
                        var_40 -= var_0;
                    }

                    /* vectorizable */
                    for (int i_16 = 3; i_16 < 17;i_16 += 1)
                    {
                        arr_60 [i_16] [i_5] [0] [i_16] = (((arr_38 [i_3] [i_3] [14] [i_3] [i_3]) - var_13));
                        var_41 &= var_17;
                        var_42 = (min(var_42, (((+(((arr_38 [i_3] [i_3] [i_4] [i_5] [11]) - -1161797407660045006)))))));
                    }
                    var_43 = (min((((((arr_53 [5] [i_3] [i_4] [i_4] [i_5] [i_5]) + 2147483647)) >> (((arr_56 [i_3] [i_3] [i_5] [i_3]) - 93)))), ((((var_17 | (arr_34 [i_5] [i_4] [i_4] [i_4] [i_4]))) | var_8))));
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 17;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            {
                                var_44 = (((((0 - (arr_61 [i_4] [i_4] [i_17] [i_18])))) || ((((arr_35 [i_3] [i_3] [i_3] [i_3] [i_3]) * var_2)))));
                                var_45 = 0;
                                arr_66 [i_3] [i_3] [i_3] = ((-((((-123 == -48) < 10982)))));
                                var_46 = (min(var_46, -var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
