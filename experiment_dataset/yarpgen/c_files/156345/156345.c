/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-9223372036854775807 - 1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_18 += (((-9223372036854775807 - 1) || (-8487450425391226878 != 9)));
                var_19 ^= 18446744073709551612;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_7 [14] [i_1] = ((+(((3135454521274848991 & 4) >> 0))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] |= (188 % 3603816476);
                    var_20 = (min(var_20, (((-((((9223372036854775807 % -8257613661971589187) <= (67 > 255)))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] = 124;
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = 1;
                        var_21 = (max(var_21, 1066879528));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] [i_2] [i_4] [10] [24] |= (((!1) % ((((~1) < 0)))));
                                var_22 = 1;
                            }
                        }
                    }
                }
                var_23 -= ((~((~(~19390)))));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_25 [i_6] [i_7] [i_6] = 6556750162038157240;
            var_24 = 5571800409934356766;
            arr_26 [i_6] [i_7] [i_6] = (-2147483647 - 1);
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            arr_29 [i_6] [2] [i_6] = (~3228087768);
            var_25 = 41042;
            arr_30 [i_6] [i_6] [i_6] = (15206 / -2147483634);
        }
        arr_31 [i_6] [i_6] = 0;

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_26 = (max(var_26, -17033137432468455779));
            var_27 = (~10079998777528053293);
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            var_28 = (((((1 << (2147483647 - 2147483622)))) % -18446744073709551612));
            arr_38 [i_6] = (!2);

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_29 = 242;
                var_30 += (!1);
            }
            var_31 |= ((164 - (-2870 - 20)));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {
            var_32 -= (15728640 && 576179277326712832);
            var_33 = (1098139821740883125 & 202);
            var_34 = ((!(-2147483634 > -5)));
            var_35 = 12;
            var_36 = (min(var_36, (29 ^ 0)));
        }
        var_37 = ((-(5 >= 63603807)));
        var_38 = 86;
    }
    for (int i_13 = 1; i_13 < 15;i_13 += 1) /* same iter space */
    {
        arr_48 [15] = 253;
        var_39 = (~0);
        var_40 = (-(((!(1 <= 1)))));
        var_41 = ((~((12 * ((1 >> (17033 - 17016)))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        var_42 = 15;
        arr_51 [i_14] = (1948928562 & 10);
    }
    var_43 = (max(var_43, ((19 | ((((((-2147483647 - 1) / 1)) & (!3))))))));
    #pragma endscop
}
