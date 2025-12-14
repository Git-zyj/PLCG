/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 ^= (~var_1);
                                var_12 = (min((min((arr_5 [i_4] [i_0 - 1] [i_2]), ((var_2 ? 118 : 2879719432)))), ((-1 ? var_6 : -var_1))));
                            }
                        }
                    }
                    var_13 ^= ((+((var_3 << (((arr_9 [i_1 - 1] [i_0] [i_2] [i_0 - 1] [i_1]) - 1192160428))))));
                    var_14 &= var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_5] [i_1] |= var_10;
                                var_15 = (max(var_15, var_7));
                            }
                        }
                    }
                    var_16 ^= ((var_10 ^ (((var_0 <= var_3) + var_1))));
                }
            }
        }
        var_17 = (var_6 ^ -1415247864);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_18 = var_10;
        var_19 = (~1415247841);
        var_20 = (max(var_20, (((~((-(arr_20 [6]))))))));
        var_21 = (var_7 >= var_3);
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            var_22 = var_4;
            var_23 = ((((max(var_7, 2243003720663040))) ? ((var_10 ? 4294967295 : var_7)) : (arr_26 [i_9 - 3] [i_9 - 1])));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_24 = var_4;
            var_25 = -2524125835;

            /* vectorizable */
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                var_26 = (~var_2);
                var_27 += (~(arr_21 [i_11 + 2]));
                var_28 = ((!0) ? -15392 : 4177920);
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
            {
                arr_34 [i_8] [i_10] [i_12 - 1] = -8;
                var_29 = (min(var_29, (arr_27 [i_10] [i_12 - 1] [i_12])));

                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    var_30 = (var_8 && 13906369917297472881);
                    var_31 = (i_8 % 2 == zero) ? (((2879719422 << (((arr_31 [i_12 + 1] [i_8] [i_12 + 1]) - 8912297770698641948))))) : (((2879719422 << (((((arr_31 [i_12 + 1] [i_8] [i_12 + 1]) - 8912297770698641948)) + 9065757782889085904)))));
                    var_32 = 1415247864;
                }
                for (int i_14 = 3; i_14 < 22;i_14 += 1)
                {
                    var_33 -= var_1;
                    var_34 += -var_0;
                    var_35 = ((var_7 ? var_0 : 55706));
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_36 = arr_35 [i_15] [i_15] [i_15] [i_15];
                    arr_45 [i_8] [i_10] [i_8] [i_15] = var_6;
                    arr_46 [i_8] [i_10] [i_10] = -1929669726;
                }
            }
            for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
            {
                var_37 = arr_30 [i_8] [i_8] [i_8];
                var_38 = (((((~(arr_28 [i_16 + 2] [i_16] [i_10])))) ? ((~(arr_47 [i_16] [i_16 + 2] [i_16 - 1]))) : (min(1415247867, ((1415247864 ? 645175641 : 2026700395))))));
            }
        }
        var_39 |= (min((min((var_4 & var_8), 114)), -44));
        var_40 = 148;
    }
    var_41 = 70368735789056;
    var_42 += (!var_9);

    /* vectorizable */
    for (int i_17 = 0; i_17 < 10;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                {
                    var_43 = ((arr_37 [i_17] [i_18] [i_19] [i_17] [i_17]) << (((arr_37 [i_17] [i_18] [i_19] [i_18] [i_17]) - 3473695557)));
                    var_44 = (~(arr_8 [i_17] [i_18] [i_19]));
                    arr_59 [i_17] = (((~var_9) || (!1)));
                    var_45 = 65535;
                }
            }
        }
        var_46 = var_5;
        var_47 = (var_1 / 1506936025);
    }
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        var_48 = (!-var_5);
        var_49 = (((((((min(var_3, 2879719431))) ? (max((arr_26 [i_20] [i_20]), var_5)) : (arr_1 [i_20])))) ? ((var_10 ? 132 : (min(9085797305942655764, var_7)))) : ((min((max(var_4, 2853759662)), (min(1415247840, var_3)))))));
    }
    for (int i_21 = 0; i_21 < 17;i_21 += 1)
    {
        var_50 = (max(var_50, 7236287906461234409));
        arr_66 [i_21] = (var_4 << 0);

        for (int i_22 = 0; i_22 < 17;i_22 += 1) /* same iter space */
        {
            var_51 = ((~((~(arr_37 [i_21] [i_21] [i_21] [i_22] [i_21])))));
            var_52 = (min(-18446673704973762557, var_1));
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 17;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 17;i_24 += 1)
                {
                    {
                        var_53 = (arr_44 [i_24] [i_21] [i_23] [i_24] [i_24] [i_22]);
                        var_54 = var_3;
                    }
                }
            }
            var_55 = var_1;
            var_56 = ((-2857311463 + ((max(var_9, (var_10 + 33))))));
        }
        for (int i_25 = 0; i_25 < 17;i_25 += 1) /* same iter space */
        {
            var_57 = (((~-2061685297) / (min(2147483647, -895944369429184750))));
            var_58 = (arr_26 [i_21] [i_25]);

            /* vectorizable */
            for (int i_26 = 0; i_26 < 17;i_26 += 1)
            {
                var_59 &= ((!(arr_70 [i_26])));
                var_60 = (min(var_60, (((var_4 ? (var_7 | var_9) : 224)))));
                var_61 = (min(var_61, var_10));
            }
            /* vectorizable */
            for (int i_27 = 2; i_27 < 14;i_27 += 1)
            {
                arr_81 [i_25] [i_25] [i_25] &= ((var_2 && (arr_48 [i_27 - 2] [i_27 + 3] [i_27 + 1] [i_27 - 1])));
                var_62 = 59;
                var_63 = (105 && 3157797777);
            }
            for (int i_28 = 2; i_28 < 16;i_28 += 1)
            {

                for (int i_29 = 0; i_29 < 17;i_29 += 1)
                {
                    var_64 = (~-10020);
                    var_65 = 27;
                    var_66 = (min(var_66, ((((arr_24 [i_21]) || (~3588351413))))));
                    var_67 = (max(var_67, var_5));
                }
                var_68 = var_4;
            }
            var_69 = (17 ? 3054380485119749993 : -892995964);
        }
    }

    /* vectorizable */
    for (int i_30 = 0; i_30 < 14;i_30 += 1)
    {
        var_70 = (((2408908137 <= var_9) == var_7));
        var_71 = (((arr_89 [i_30]) ? 1415247864 : (arr_65 [i_30])));
        var_72 += -var_4;
        var_73 = (~var_8);
        var_74 = (arr_85 [i_30] [i_30] [i_30] [i_30]);
    }
    #pragma endscop
}
