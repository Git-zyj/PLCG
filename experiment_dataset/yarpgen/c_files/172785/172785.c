/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 -= (((~((var_1 ? var_2 : var_2)))));
        var_15 = (((((~(!-399824833)))) ? (((var_9 ? var_7 : var_1))) : (min(var_10, var_3))));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = (min(var_16, (((~((~(var_6 >= var_3))))))));
        var_17 *= ((~(min(var_8, (~var_1)))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_18 = (!5589);
                var_19 = ((-(max(var_5, -9223372036854775786))));
                var_20 = (((((~(var_13 & var_12)))) ? (((((var_1 ? var_10 : var_10))) ? ((var_12 << (var_12 - 13863647714121865153))) : (var_3 & var_4))) : ((min(var_6, (min(30, 1859196249)))))));
            }
            var_21 += ((((var_9 >= ((var_6 ? var_8 : var_12)))) ? (((-var_13 != (!var_10)))) : (((((max(2615310908699461626, -788))) && ((min(var_7, var_13))))))));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_22 = (min(((min(var_6, (var_3 || 1506298603)))), var_8));
                var_23 += var_2;
            }
            var_24 ^= (((((-var_12 ? var_5 : var_1))) ? var_3 : (max((~var_13), (~var_3)))));
            var_25 = (min((min(2251798739943424, -125)), (var_11 << var_11)));
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_26 = (var_4 != var_0);
        var_27 &= ((var_9 || (~var_1)));

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_28 += ((~(var_10 | var_13)));
                arr_25 [i_8] [i_8] = (var_10 - var_8);
                arr_26 [i_8] [i_8] [i_8] = ((!(!var_8)));
                var_29 = (max(var_29, (((var_1 << ((((var_7 ? var_7 : var_13)) - 2063166132)))))));
                arr_27 [i_6] [i_8] [i_6] = (((((var_10 << (var_6 - 210)))) || var_7));
            }
            var_30 -= var_12;
        }
        var_31 = (var_1 || var_4);

        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            var_32 *= (((!var_12) || (((var_11 ? var_11 : var_5)))));
            var_33 = (var_10 != var_5);
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_34 = var_12;
            var_35 = (((var_1 ? var_11 : var_11)));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_36 = (max(var_36, ((((var_3 + var_4) != (var_8 != var_7))))));

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_37 = (~var_10);
                            var_38 = (((!30735) ? ((var_12 << (var_2 + 2018658924))) : (var_13 || var_1)));
                            var_39 = var_7;
                            var_40 = (max(var_40, var_9));
                            arr_42 [i_6] [i_10] [i_11] [i_10] [i_13] [i_13] [i_11] = ((((var_11 ? var_12 : var_4)) ^ (((var_0 ? var_13 : var_9)))));
                        }
                        for (int i_14 = 2; i_14 < 11;i_14 += 1)
                        {
                            arr_46 [i_6] [i_10] [i_10] [i_14] [i_14] = var_9;
                            var_41 = ((((var_9 ? var_1 : var_10)) ^ (~var_9)));
                        }
                        arr_47 [i_10] = (((1883458043 | var_11) << (3791341724316991196 - 3791341724316991184)));
                        arr_48 [i_6] [i_10] [0] [i_10] = (!var_8);
                    }
                }
            }
            var_42 -= ((-(var_3 / var_5)));
        }
    }

    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        arr_52 [2] = ((-(((((17541 ? 110 : 3650)) >= ((min(var_6, var_3))))))));
        arr_53 [i_15] [i_15] = var_11;
        arr_54 [i_15] = var_9;
        var_43 = -192;
    }
    var_44 = ((48 ? var_6 : ((19 ? var_6 : (var_9 - var_10)))));
    #pragma endscop
}
