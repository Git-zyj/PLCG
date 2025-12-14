/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0 - 2] [i_0] = (!0);

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_9 [i_0] [i_1 - 1] [i_0] [10] = 147;
                arr_10 [4] [i_0] [i_0] [i_0] = var_15;
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_13 [i_1] [i_0] = 0;
                var_16 = 33;
                arr_14 [i_0] = var_0;
            }
            var_17 = (min(var_17, 93));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_18 = var_14;
            var_19 = (arr_0 [9] [i_0]);
            var_20 = var_0;
            var_21 = 69;
            var_22 = (-2147483647 - 1);
        }
        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            arr_20 [i_0] [i_0 - 2] = (((~76) + var_15));
            var_23 = ((!(arr_17 [i_0 + 1])));
        }
        arr_21 [i_0] = ((var_2 ? (arr_8 [i_0] [i_0 - 2] [i_0 + 1]) : (arr_8 [i_0] [i_0 - 3] [i_0])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_24 = (max(var_24, var_8));
                    arr_28 [i_0 + 1] [i_0] [i_0] [i_0] = 95;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_25 -= (18446744073709551615 - 243);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_38 [i_8] = (!18446744073709551615);
                    var_26 = ((1898282956 < (arr_29 [i_8])));
                }
            }
        }
        var_27 = (((arr_33 [i_8] [i_8] [i_8]) ? var_9 : 18446744073709551615));
    }

    for (int i_11 = 2; i_11 < 20;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_28 = var_9;
                        arr_50 [i_14] [i_14] [10] [i_14] [i_14] &= (-2049653093 <= 0);
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_29 = var_4;
                        var_30 &= (min((((var_13 <= (max(2689153688460365210, 3))))), (min(608577375, (11023175534902879083 <= 9223372036854775807)))));
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_31 = (min(var_31, ((min((max((arr_41 [i_11 - 1]), 18446744073709551615)), (((arr_49 [i_11 + 1] [i_12] [9] [i_11 + 1]) ^ var_2)))))));
                        var_32 = var_10;
                        arr_56 [i_11] = (min(((((arr_55 [14] [14]) ? (var_4 || var_9) : ((var_1 ? 2130706432 : var_7))))), 1540748473963674955));
                    }
                    for (int i_17 = 3; i_17 < 22;i_17 += 1)
                    {
                        var_33 = ((((~(arr_43 [5] [i_11])))) ? ((2 ? 6 : 0)) : (var_8 || var_11));
                        arr_61 [i_11] [i_12] = ((var_13 + ((-(arr_47 [0])))));
                        var_34 = ((225 ? ((214 >> (var_2 + 1288273740))) : 9223372036854775809));
                    }
                    var_35 = (((!0) << ((((!17470642270663034438) || (((var_13 ? (arr_46 [i_11] [19] [i_11] [i_11]) : 5))))))));
                }
            }
        }
        arr_62 [i_11] [i_11] = ((!((min(((var_11 | (-2147483647 - 1))), (~var_8))))));

        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            var_36 = var_12;
            arr_65 [15] [i_11] [i_11] = (7 == 86);
            arr_66 [4] &= (max(255, var_11));
        }
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            var_37 = (((!(23 - 254))));
            arr_69 [i_11] = (227615559 ? var_11 : (max(((var_4 ? (arr_59 [i_11 + 1] [0] [i_11 - 1] [i_11] [17]) : var_15)), var_5)));
        }
        for (int i_20 = 3; i_20 < 22;i_20 += 1)
        {
            var_38 -= 0;
            var_39 = ((~(((var_10 / var_10) - 22))));
            arr_72 [i_11 - 1] [i_20 + 1] [i_11] = min((((arr_52 [i_11]) + 232)), var_2);
        }
    }
    var_40 = (min(19, ((13591666131770927192 ? 126 : (~125)))));
    var_41 = var_4;
    var_42 |= var_8;
    #pragma endscop
}
