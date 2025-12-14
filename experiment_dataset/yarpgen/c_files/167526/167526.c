/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 &= ((((~(arr_2 [8]))) <= ((((arr_2 [12]) <= var_2)))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_21 |= ((54980 - (~var_1)));
            var_22 &= ((~(((var_13 > (min(9223372036854775807, var_16)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    {
                        var_23 ^= ((((min(3015, 46469))) ? 46469 : (arr_0 [i_0])));
                        var_24 |= (max(61163, 0));
                        var_25 = (min(var_25, (arr_2 [20])));
                    }
                }
            }
        }
        var_26 = (46469 <= 5710);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
            {
                var_27 |= (((((arr_11 [i_0] [i_4] [20]) ? var_13 : var_6)) ^ 46));
                var_28 = (((((arr_14 [i_0]) ? 5710 : (arr_4 [i_0]))) & (arr_8 [i_0] [i_0] [i_5 + 4])));
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
            {
                var_29 -= (((arr_11 [20] [i_4] [16]) & (arr_11 [16] [i_4] [10])));

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_30 &= ((512 && (((arr_9 [i_0] [i_4] [18] [i_7]) || (-9223372036854775807 - 1)))));

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_31 = (min(var_31, (((var_10 >> (var_2 - 10709))))));
                        var_32 &= var_6;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_33 = var_11;
                        var_34 = (min(var_34, ((((!19067) ? (arr_11 [i_6 + 4] [i_6] [2]) : (32720 <= 65024))))));
                        var_35 |= (arr_7 [1] [i_0] [i_6] [i_6 + 3]);
                    }
                }

                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_36 = 32815;
                    var_37 ^= (arr_28 [i_0] [i_4] [i_4] [i_6 + 4] [1] [i_0]);
                    var_38 = ((var_12 != (~225)));
                    var_39 = (min(var_39, var_1));
                    var_40 = var_6;
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    var_41 ^= ((var_5 ? (~var_4) : (arr_2 [16])));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_42 = (255 ? -1902719485697974070 : -5617205615960703899);
                        var_43 = ((((-(arr_1 [i_0]))) % 161));
                    }
                    var_44 |= ((56471 ? 46 : var_1));
                }

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_45 = (min(var_45, (arr_12 [i_6 + 1] [i_6 - 2])));
                    var_46 ^= (arr_34 [i_0] [i_4] [i_6] [i_13]);
                    var_47 = (18931 | 153);
                }
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    var_48 = ((46469 != (!0)));
                    var_49 = ((((32815 >> (((arr_16 [i_0] [i_4] [i_6] [i_14]) - 217)))) ^ ((var_13 ? var_9 : var_2))));
                }
                var_50 = (max(var_50, (((var_16 ? (arr_0 [i_6 - 1]) : ((16128 ? 46469 : 46468)))))));
            }
            for (int i_15 = 2; i_15 < 18;i_15 += 1) /* same iter space */
            {
                var_51 -= 127;
                var_52 -= -104;
            }
            var_53 *= ((+((var_6 ? (arr_1 [i_4]) : (arr_1 [i_0])))));
        }
    }
    for (int i_16 = 2; i_16 < 6;i_16 += 1) /* same iter space */
    {
        var_54 = (min(var_54, (((((min((var_6 && 65024), var_2))) < (arr_30 [10] [12] [i_16] [4] [i_16]))))));
        var_55 = (min(var_55, ((((~0) | ((~((var_6 ? 210 : var_17)))))))));
        var_56 ^= arr_11 [8] [i_16] [4];
    }
    /* vectorizable */
    for (int i_17 = 2; i_17 < 6;i_17 += 1) /* same iter space */
    {
        var_57 = 25744;
        /* LoopNest 2 */
        for (int i_18 = 2; i_18 < 7;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                {

                    for (int i_20 = 3; i_20 < 8;i_20 += 1)
                    {
                        var_58 = (min(var_58, ((((arr_17 [i_17 + 2] [i_17 + 2]) ? var_2 : (!var_16))))));
                        var_59 |= (((arr_43 [i_17] [i_17] [i_19] [i_20]) ? (arr_31 [i_18 - 1] [i_17 - 1]) : 35997));

                        for (int i_21 = 0; i_21 < 10;i_21 += 1)
                        {
                            var_60 ^= ((-(arr_52 [i_17 + 2] [i_17 + 3])));
                            var_61 = 192;
                            var_62 = (min(var_62, (((~(var_11 * var_9))))));
                            var_63 |= (((arr_0 [i_18 - 1]) ? 170 : var_5));
                        }
                        for (int i_22 = 0; i_22 < 10;i_22 += 1)
                        {
                            var_64 -= ((~(255 && 209)));
                            var_65 = (((arr_62 [i_20 + 1] [i_18] [i_17 + 3]) ^ var_12));
                            var_66 = (min(var_66, (arr_10 [i_17 - 1] [i_18] [i_18])));
                        }
                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            var_67 = (arr_37 [1]);
                            var_68 = (203 || 86);
                            var_69 = (max(var_69, (((var_8 * (arr_56 [i_23] [i_19] [i_17 - 1]))))));
                        }
                    }
                    var_70 = (~var_11);
                }
            }
        }
        var_71 |= (~220);
    }
    var_72 *= ((var_15 ? var_6 : 128));
    #pragma endscop
}
