/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_2] [i_1] [i_4] [i_4] = arr_7 [i_1] [i_1] [i_3 - 3] [i_4];
                            var_14 = (~57344);
                        }
                    }
                }
            }
            var_15 ^= 1;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_16 = (((arr_4 [2]) ? (arr_4 [2]) : 562915593682944));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_17 -= (!(arr_12 [i_0] [i_7]));
                            var_18 ^= var_6;
                            var_19 = var_5;
                            var_20 = (min(var_20, (~562915593682944)));
                        }
                        var_21 = (var_9 >> 0);
                    }
                }
            }
            var_22 |= (~((562915593682958 ? -562915593682944 : (arr_22 [i_0] [i_5]))));
            var_23 = (min(var_23, ((((arr_7 [8] [i_5] [8] [i_5]) | (((63 == (arr_23 [1] [1] [13] [i_5] [i_5])))))))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_31 [i_0] [i_0] [i_0] = ((-(arr_27 [i_0] [1])));
            var_24 &= 7539455379463466548;
            var_25 = (min(var_25, (((var_5 < (arr_6 [i_0] [i_0] [i_9]))))));
        }
        var_26 += -3227335392;
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        var_27 = var_8;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    var_28 += ((-63 % (arr_37 [i_10 + 1] [i_10 + 1] [i_10 - 2])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_29 += (((-562915593682944 ? 9223372036854775807 : 165)));
                                arr_45 [i_10] [i_13] [i_12] [i_13] [4] = var_12;
                            }
                        }
                    }
                    var_30 = (min(var_30, var_11));
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 21;i_15 += 1)
    {
        arr_48 [i_15] [1] |= ((var_1 | ((~(arr_46 [i_15 - 1])))));
        var_31 = 136;
        var_32 *= ((((min((arr_47 [i_15 + 1] [i_15 + 1]), (arr_47 [i_15] [i_15])))) ? (((arr_47 [i_15 - 1] [i_15 - 1]) ? 1 : var_0)) : (((-1593805351 + 2147483647) << ((((9223372036854775807 >> (-53179437 + 53179489))) - 2047))))));
    }
    var_33 &= ((((((min(193, 49))) ? 32754 : (((3496 ? -2147483646 : 1073741824))))) << ((((562915593682944 ? (~var_4) : (var_6 | 3221225487))) + 7485335921045425418))));
    var_34 &= ((var_13 ^ (((((var_3 ? var_5 : -4143))) | var_9))));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            {
                var_35 += (arr_52 [4] [i_17] [i_17]);
                var_36 *= min(1073741852, 1);
                var_37 = (max(var_37, (((((min(9223372036854775807, (arr_54 [i_16])))) & (!131))))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        {

                            for (int i_20 = 0; i_20 < 23;i_20 += 1)
                            {
                                var_38 *= (((arr_59 [i_18] [i_19] [i_18] [i_19] [i_19 - 1] [i_20] [i_20]) ? 32754 : (arr_59 [i_16] [i_17] [6] [i_18] [i_19 - 1] [i_20] [1])));
                                var_39 = (max(var_39, 3174670082));
                                var_40 = (min(var_40, ((((((((max(1073741852, var_7))) != var_4))) < ((max((arr_51 [i_19 - 1] [i_19 - 1]), (arr_58 [i_17] [i_17])))))))));
                                var_41 -= var_2;
                            }
                            var_42 ^= (!var_13);
                            var_43 = (min(var_43, ((((!(arr_56 [i_19] [i_19] [14] [i_19 - 1])))))));
                            var_44 = (arr_53 [19] [i_19 - 1]);
                            var_45 += var_6;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
