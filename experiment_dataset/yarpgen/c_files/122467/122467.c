/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_10 = var_9;
        arr_3 [i_0] = var_3;
        var_11 = 0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_12 = (min(var_0, var_1));
                        var_13 -= (min(1, 0));
                        var_14 -= 155;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_15 &= (((((~((min(var_8, var_6)))))) ? 1631897626 : var_2));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] = ((((min(21275, (min(var_3, var_0))))) ? ((-(((5 <= (-9223372036854775807 - 1)))))) : var_2));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_16 = (230 == 6);
                            var_17 -= var_6;
                            var_18 &= 21275;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_6] [i_1] [i_1] = ((-(-8812 && var_0)));
                            var_19 = (1 - 242);
                            var_20 = (((((((min(var_0, 65))) ? var_0 : 228))) ? -2261332490986872577 : (((~((min(var_6, var_6))))))));
                        }
                        var_21 = ((((max((1 + 21275), (min(var_4, 5833311029646335029))))) ? (251 && -9223372036854775786) : (min(((min(-45, var_2))), ((7125342751036870847 ? 3383800563 : 44))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (!214)));
        var_23 = ((min(45, var_5)) <= var_1);

        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            var_24 = ((var_2 == (!44)));
            var_25 = ((0 ? var_6 : 18446744073709551615));
            var_26 = (!13417266315159927912);
            var_27 = ((1257 ? var_5 : var_4));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_28 -= ((!((max(((min(var_9, 214))), (min(1, var_8)))))));
            arr_28 [i_7] [1] [i_9] = (max((min(1574691175, 7049660684067020091)), (var_6 && 0)));

            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                var_29 = (max(var_29, var_3));
                arr_32 [0] [i_9] [i_9] [0] = (max(var_3, ((1 ^ (-9223372036854775807 - 1)))));
            }

            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                var_30 = (max(((((~197) <= 980485194))), (min(197, var_1))));

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_31 = var_9;
                    var_32 += (min((var_2 * var_0), ((9223372036787666944 / ((191 ? 4644682379338297344 : 1))))));
                }
                var_33 = (min(var_33, ((((980485194 ? 1 : var_3))))));
                arr_39 [i_11] [i_11] [i_7] = (224 % 76);
            }
            arr_40 [i_7] [i_9] |= (min(((1 ? ((min(var_3, var_2))) : (6945091763964378278 & 221))), ((max((var_6 * 0), (-9223372036854775807 - 1))))));
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_44 [i_13] [i_7] = ((((((min(var_2, var_6))) != var_6)) ? -1763933033 : (max((-9223372036854775807 - 1), (1 | 119)))));
            var_34 = -var_9;
            var_35 += (((-4211 ? 46 : 1)));

            /* vectorizable */
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_36 = var_3;
                arr_47 [i_7] = ((((var_5 ? 1 : -1587156684486635706)) != (((var_0 ? 1 : -16)))));
            }
        }

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_37 *= (((var_7 % 18446744073709551596) ? (min(2305843009213693696, -13928424477596314261)) : (var_6 + var_1)));
            arr_50 [i_7] = (max((((((-2503 ? var_6 : 1))) ? 17387697356647661345 : 2838894031)), (~15775)));
        }
    }
    var_38 -= ((((max(1, 9))) ? (-32766 / 1) : var_9));
    var_39 = (((((-((2305843009213693674 ? var_9 : 3228445964))))) ? var_9 : var_9));
    var_40 = (max(var_40, ((max((~var_2), var_7)))));
    #pragma endscop
}
