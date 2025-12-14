/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_18 *= ((((arr_2 [i_1] [i_1 - 1] [i_1 + 1]) + -29050)));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_19 = ((!(((16496489165932492816 ? (arr_0 [1]) : var_13)))));
                            var_20 = -27454;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_21 *= ((~(!var_14)));
                        var_22 = (((arr_10 [i_0] [i_1] [i_5] [i_6]) ? (arr_2 [i_6] [i_5] [i_0]) : ((67100672 ? (arr_4 [i_1]) : var_13))));
                        var_23 &= (arr_0 [i_2 + 2]);
                        var_24 = (arr_21 [i_1] [i_2] [i_2]);
                        var_25 = ((-(arr_1 [i_0 + 1])));
                    }
                    var_26 = arr_20 [i_0] [i_0] [i_0] [i_0];
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_27 = -27454;
                    var_28 -= (arr_2 [i_2 + 1] [i_1] [i_1]);
                    var_29 = arr_17 [i_7] [i_7] [i_1] [i_7];
                    var_30 = (min(var_30, ((((-67100672 + 9223372036854775807) << (((arr_7 [i_0 - 2] [i_1] [i_2] [i_7]) - 71)))))));
                    var_31 = 250;
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_32 = ((arr_12 [i_1] [i_2] [i_2] [i_2] [i_0] [i_0]) ? 11 : (arr_12 [i_0 - 1] [i_1] [i_2] [i_2] [i_8] [i_8]));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_33 = ((!(var_14 && var_2)));
                        var_34 = (((var_11 / (arr_4 [i_0]))));
                    }
                    var_35 &= var_11;
                }

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_36 = var_2;
                    var_37 = (((arr_10 [i_0] [i_0] [1] [3]) ? var_14 : (arr_0 [i_1 - 1])));

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_38 &= (((arr_13 [i_1 + 1] [i_1] [i_2 + 1] [i_2] [8] [i_0]) ^ (arr_0 [i_1 + 1])));
                        var_39 = 4292870144;
                    }
                }
            }
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                var_40 = (arr_10 [7] [i_1] [i_12] [i_1]);
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_41 = 4292870144;
                            var_42 = var_8;
                            var_43 = ((((var_5 ? var_15 : (6926918570125901926 ^ -67100665))) << (((max(1, (((-27454 + 2147483647) >> var_14)))) - 1073728095))));
                            var_44 *= ((27471 >> (((!(arr_22 [i_0]))))));
                            var_45 |= 5;
                        }
                    }
                }
                var_46 = ((min(((-1966205007431926738 ? (arr_38 [i_1 - 1] [i_12]) : var_4)), (((-(arr_25 [i_0])))))));
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_47 = (min((arr_34 [i_0] [i_1] [i_15] [i_15] [i_0]), ((29 ? 67100672 : (((min(248, 156))))))));
                            var_48 &= min((max((arr_21 [i_0] [i_0] [i_1 - 1]), var_12)), (arr_21 [i_0 - 2] [i_0] [i_1 - 1]));
                            var_49 = (max((((arr_17 [i_15] [i_1 + 1] [i_0 + 1] [2]) ^ (arr_17 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_0]))), 1));
                        }
                    }
                }
            }
            var_50 = (((max((var_2 & var_11), -2784210032758455152)) >= ((var_12 % (arr_43 [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_1])))));
        }
        /* vectorizable */
        for (int i_18 = 2; i_18 < 11;i_18 += 1)
        {
            var_51 = 50;

            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                var_52 |= (arr_50 [0] [i_0 - 2] [i_0] [i_0 - 2] [i_18 + 2] [i_18] [i_18 + 2]);
                var_53 = (!var_3);
                var_54 = (((127 ^ 46963854434509533) ? (!129) : (~94)));
            }
            for (int i_20 = 3; i_20 < 11;i_20 += 1)
            {
                var_55 = 0;
                var_56 *= (((~var_10) ? ((var_7 ? (arr_1 [i_0]) : 150)) : (!-5046811124566940125)));
            }
        }

        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            var_57 = 0;
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 0;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 12;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 13;i_24 += 1)
                    {
                        {
                            var_58 *= (15 / var_2);
                            var_59 = (arr_0 [i_0 - 2]);
                        }
                    }
                }
            }
            var_60 = ((~(17 || 13354563199525221887)));
            var_61 = 110;
        }
        for (int i_25 = 1; i_25 < 11;i_25 += 1)
        {
            var_62 |= var_17;
            var_63 |= (((arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) && (arr_54 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
        }
    }
    /* LoopNest 2 */
    for (int i_26 = 2; i_26 < 23;i_26 += 1)
    {
        for (int i_27 = 0; i_27 < 25;i_27 += 1)
        {
            {
                var_64 = 215;

                /* vectorizable */
                for (int i_28 = 0; i_28 < 25;i_28 += 1)
                {

                    for (int i_29 = 1; i_29 < 23;i_29 += 1)
                    {
                        var_65 = ((arr_85 [i_29 + 1] [i_29 + 2] [22] [i_26]) ? 0 : 2380653444691718620);
                        var_66 = 2172986733597511418;
                    }
                    for (int i_30 = 0; i_30 < 25;i_30 += 1)
                    {
                        var_67 = var_3;
                        var_68 = -1;
                        var_69 &= arr_90 [i_28] [i_28];
                    }
                    /* LoopNest 2 */
                    for (int i_31 = 1; i_31 < 24;i_31 += 1)
                    {
                        for (int i_32 = 3; i_32 < 23;i_32 += 1)
                        {
                            {
                                var_70 = (arr_88 [i_26] [i_26]);
                                var_71 -= (arr_88 [i_27] [i_32 - 1]);
                            }
                        }
                    }
                }
                var_72 ^= (max((min(215, 3951583276596615634)), (arr_87 [i_26 - 1] [i_26 - 1])));
            }
        }
    }
    var_73 -= var_3;
    #pragma endscop
}
