/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((236 ? 19 : 12058));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] &= ((0 * ((~((max(var_9, var_9)))))));
                arr_5 [i_0] [i_0] [i_0] = ((((arr_1 [i_0]) * var_7)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (arr_1 [i_2]);
        var_13 = ((-((-var_10 - ((var_7 ? var_8 : (arr_6 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                var_14 = var_0;
                arr_17 [i_3] [i_5] [i_5] [i_4] = (arr_14 [i_5 + 2] [i_5 - 1] [i_4 + 1]);
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
            {
                var_15 = var_4;
                var_16 = (!var_5);
                var_17 -= var_7;
                var_18 = ((-var_1 == (arr_13 [i_3] [i_3] [i_4 + 3])));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_19 += (((((arr_0 [i_3]) ^ var_5)) & var_8));
                var_20 ^= var_11;
                var_21 = (max(var_21, (arr_0 [i_3])));
                var_22 = (226 ? 19 : 126);
            }
            var_23 = (min(var_23, -30));
            var_24 = (min(var_24, var_5));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_24 [i_3] [i_3] [i_8] = ((-(arr_3 [i_3] [i_8])));
            var_25 = (((((var_4 ? 4179462618 : (((var_7 && (arr_21 [i_3] [i_3] [i_3]))))))) && var_8));

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                arr_28 [i_8] [i_8] = (arr_0 [i_3]);
                var_26 = var_7;
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {

                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    var_27 = ((+(min((arr_29 [i_11 - 1] [i_8]), (arr_18 [i_11 + 1] [i_11])))));
                    var_28 = var_0;
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_29 = ((((arr_33 [i_3] [i_8] [i_3] [i_12]) ? var_0 : var_8)));
                    var_30 = (226 == (((arr_21 [0] [0] [i_10]) ^ (arr_31 [i_3] [i_12]))));

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        arr_39 [i_3] [i_8] [i_12] = (((arr_15 [i_3] [i_8] [i_13] [i_12]) ? (arr_26 [i_8] [i_10] [i_10]) : (arr_1 [i_3])));
                        arr_40 [8] [i_8] [i_10] [i_12] [i_13] = ((+(((arr_38 [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_20 [i_3] [i_3]) : -5939688715603020111))));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_45 [i_3] [i_3] [1] [i_10] [i_12] [i_14] = (~var_0);
                        arr_46 [i_12] [i_10] [i_3] = (72057594037927935 > 9008441535444576000);
                        var_31 = (~var_9);
                        var_32 ^= (((var_4 - 1790694570856024218) % var_5));
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_33 = (arr_21 [i_3] [i_8] [i_12]);
                        var_34 += (((arr_19 [i_3]) ? (arr_19 [i_15]) : (arr_19 [i_3])));
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    var_35 = ((var_2 << (var_4 + 9010005371762140547)));
                    arr_52 [i_16] [i_16] [i_10] [i_8] [i_8] [i_3] = ((((var_7 ? var_0 : var_7)) >> (((arr_32 [i_3] [i_8] [i_10] [i_16]) & 1))));
                    var_36 = 104;
                    arr_53 [i_3] [i_3] [i_10] [i_16] [i_16] = var_4;
                }
                var_37 = var_6;
                var_38 = (max(var_38, -var_4));
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 0;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    {
                        arr_61 [i_3] [8] [15] [i_19] [i_17] = (arr_32 [i_3] [i_17] [i_17] [i_19]);
                        arr_62 [i_18] [i_17] = (arr_30 [i_3] [i_3] [i_18 + 1]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    {
                        var_39 = (min(var_39, 235239090));
                        var_40 = 109;
                    }
                }
            }

            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                arr_70 [i_3] [i_3] [i_22] [i_3] = var_8;
                var_41 = var_11;
                var_42 = (max(var_42, (~var_2)));
            }
            for (int i_23 = 0; i_23 < 17;i_23 += 1)
            {

                for (int i_24 = 0; i_24 < 17;i_24 += 1)
                {
                    arr_75 [i_3] = (((arr_26 [1] [i_24] [i_23]) == var_9));
                    arr_76 [i_24] [i_23] [9] [i_3] = (((arr_37 [i_24]) * (arr_56 [i_3])));

                    for (int i_25 = 0; i_25 < 17;i_25 += 1)
                    {
                        var_43 ^= ((!((((arr_1 [i_17]) / var_0)))));
                        arr_80 [i_17] [i_23] = (arr_15 [i_3] [2] [i_23] [i_3]);
                        arr_81 [i_3] [i_17] [i_23] [i_24] [i_25] = var_9;
                        var_44 = var_5;
                    }
                    for (int i_26 = 0; i_26 < 17;i_26 += 1)
                    {
                        var_45 = (max(var_45, var_2));
                        var_46 &= 30188;
                        arr_84 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((arr_68 [8]) <= ((var_5 ? 1 : (arr_83 [i_3] [i_3] [10] [i_3] [i_3] [i_3] [i_3]))));
                        var_47 = -8034722134127932500;
                        var_48 *= 1;
                    }
                    for (int i_27 = 0; i_27 < 17;i_27 += 1)
                    {
                        var_49 += (((arr_82 [i_3] [i_17] [i_23] [i_24] [i_27]) ? (var_1 ^ 3469403342) : (var_5 != var_11)));
                        arr_87 [i_24] [10] [i_27] [i_24] [i_24] [i_24] = (((~1) ? (arr_69 [i_27] [i_27] [13]) : (~var_5)));
                    }
                    var_50 = (arr_15 [i_3] [9] [9] [9]);
                    arr_88 [i_3] [i_3] [i_3] [i_3] [3] = (((arr_42 [i_3] [i_3] [i_17] [i_23] [i_24] [i_17]) > var_3));
                }
                arr_89 [i_3] [i_3] = (((var_10 <= (arr_50 [i_3] [i_3] [i_17]))));
                var_51 = var_11;
            }
            for (int i_28 = 1; i_28 < 13;i_28 += 1)
            {
                var_52 = (max(var_52, (((var_11 <= (var_1 > var_10))))));
                /* LoopNest 2 */
                for (int i_29 = 4; i_29 < 16;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 17;i_30 += 1)
                    {
                        {
                            arr_98 [i_3] [i_3] [i_28 - 1] [1] [7] = (var_8 || var_0);
                            arr_99 [i_3] [i_17] [i_28 + 4] [i_17] [12] = (var_3 != 224);
                            arr_100 [i_3] [i_3] [i_28] [i_29 - 1] [i_30] = ((((((!(arr_9 [i_3] [i_30]))))) == (~var_6)));
                            var_53 = (max(var_53, (~30)));
                        }
                    }
                }

                for (int i_31 = 0; i_31 < 17;i_31 += 1)
                {
                    var_54 = var_0;
                    arr_104 [15] [i_17] &= 2321255795;
                }

                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {
                    var_55 = -416602968517537010;
                    arr_109 [i_32] [5] [i_28] [i_32] = var_5;
                    arr_110 [i_32] = var_6;
                    var_56 = (((-1 + 2147483647) << (((arr_58 [i_17] [i_28] [i_32]) - 12933))));
                }
                for (int i_33 = 3; i_33 < 16;i_33 += 1)
                {
                    arr_113 [i_33] [i_33] [i_28] [i_33] [i_28] [i_33 + 1] = (((arr_49 [i_28] [i_28] [i_28 + 4] [i_28 + 4] [i_28 + 4] [i_28]) * 29));
                    arr_114 [i_3] [i_3] [i_3] [i_3] = var_1;
                    arr_115 [i_3] [i_17] [i_33] [i_33] = var_3;
                    var_57 = var_2;
                }
            }
            var_58 &= var_0;
            arr_116 [i_3] [i_3] [i_3] = var_0;
        }
        var_59 *= ((-1328720290 <= (((((5939688715603020111 ? var_11 : var_2))) ? var_2 : var_6))));
        var_60 = ((var_0 / ((-7308466383079780106 ? var_0 : (((var_4 == (arr_55 [i_3] [i_3]))))))));
        arr_117 [i_3] [i_3] = var_9;
        arr_118 [i_3] &= (arr_27 [i_3] [i_3] [1]);
    }
    #pragma endscop
}
