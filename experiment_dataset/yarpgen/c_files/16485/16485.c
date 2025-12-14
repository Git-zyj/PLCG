/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = 173;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (1 | 87);

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                arr_7 [i_0] [i_0] [i_0] [i_1] = (var_7 / -59);
                var_18 = var_3;
                var_19 = -87;

                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_20 = ((var_10 ? (var_15 && -88) : (var_8 | 715588179)));
                        var_21 -= 165;
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_22 = (max(var_22, var_7));
                        var_23 += ((-88 ? -88 : (var_4 & 86)));
                    }
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_24 -= ((65522 ? ((-88 ? 3436425734491125265 : 87)) : (-2147483647 - 1)));
                    var_25 = 9463811234828025798;
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, var_4));
                    var_27 = var_11;
                    var_28 &= ((1048575 ? var_14 : 65522));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_0] [i_2] [i_8] = var_11;
                    var_29 &= 1048575;
                }
                var_30 = (min(var_30, (((1048575 >> (var_5 - 3115784716449103412))))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_31 = (var_0 < 18);
                var_32 = -88;
            }
            arr_28 [i_0] [i_0] = 1048575;
        }
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            var_33 = var_16;
            arr_32 [i_10] = (((((33863 ? (0 <= 5250860277462257636) : var_14))) & (min(var_0, 87))));
            var_34 = 15010318339218426340;

            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                arr_36 [i_10] [i_10] [i_10 + 1] = ((-((15010318339218426333 ? 18446744073709551615 : var_7))));

                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    var_35 = (((!var_9) ? (min(var_12, var_5)) : var_12));
                    var_36 = (min(-39, (max((0 - var_9), ((max(1, 1)))))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_42 [i_0] [i_0] [5] [5] [i_0] [i_10] = 1048575;
                    arr_43 [i_0] [i_10] [i_10] [i_0] = ((((652900046 ? var_3 : 1561552216)) / (3649151457 <= var_10)));
                    arr_44 [0] [i_0] [i_10] [i_13] [i_11] = -39;
                }
                arr_45 [i_10] [i_10] = (max(-88, (!1)));
            }

            for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
            {
                arr_48 [i_10] [i_10 + 1] [i_10] [i_10] = ((-var_8 ? var_2 : -645815852));
                arr_49 [i_10] [i_10] = 3649151449;

                for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        arr_54 [9] [i_10] [i_10] [i_10] [9] = (min(31668, (min(6826668678781987443, (var_7 || 4294967295)))));
                        var_37 ^= var_5;
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = ((((var_6 | (var_1 % var_3))) & (3895287143 <= var_0)));
                        var_38 = (var_10 % 16);
                    }

                    /* vectorizable */
                    for (int i_17 = 4; i_17 < 11;i_17 += 1)
                    {
                        var_39 = ((1 ? (18446744073709551606 / 1) : 23494));
                        arr_58 [i_0] [i_10] [i_17] = 11064137098323578384;
                        var_40 += (0 >> (126749903 + 70));
                    }
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        var_41 = ((var_3 << (var_0 - 39)));
                        var_42 = ((min(var_9, (min(var_5, var_7)))));
                        var_43 ^= (max((min(var_13, (max(6826668678781987444, -94)))), var_2));
                        var_44 ^= (11620075394927564172 && 15586621392621795939);
                    }
                    var_45 |= var_5;
                    var_46 = (min(var_46, (((1710015961 <= (4294967272 & var_11))))));
                }
                for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
                {
                    arr_65 [i_0] [i_14] [i_10] = ((min(63, -18083)));
                    arr_66 [i_10] [i_14] [i_14] [i_0] = (((((max(127, 18446744073709551615)))) || 131071));
                }
                arr_67 [i_10] [i_0] [i_10 + 1] [i_14] = (((((max(63, 11620075394927564173)))) ? ((((((min(var_13, -64))) && (var_3 <= 106))))) : (max(0, var_13))));
            }
            for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
            {
                arr_71 [i_10] [i_10 + 1] [i_20] = min((((39354 || 1) % (var_6 & var_9))), 68);
                arr_72 [i_10] [i_10 + 1] = 1;
            }
        }
        arr_73 [i_0] = (1 % 18388);
    }
    for (int i_21 = 2; i_21 < 11;i_21 += 1)
    {
        var_47 = (((953 && 15381754756997986491) | 15381754756997986500));
        arr_77 [i_21] = ((var_16 * ((15381754756997986500 ? var_1 : var_7))));
    }
    var_48 -= (((max((min(0, var_14)), (4294967295 - 4294967295))) + (13005448049363870 + 399680136)));
    var_49 = (max(var_49, (6826668678781987427 - var_14)));
    var_50 = var_5;
    #pragma endscop
}
