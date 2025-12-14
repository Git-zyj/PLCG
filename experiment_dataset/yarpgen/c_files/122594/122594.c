/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = 4294967291;
        var_12 = ((+(((arr_0 [i_0]) ? (((!(arr_1 [i_0] [i_0])))) : 3))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (((10 != 2715059369) && (((arr_1 [i_1] [i_1]) > 63))));
        arr_7 [i_1] [i_1] = 4413000648336619989;
        var_13 = ((110 ? ((247 ? 238 : 8388592)) : (!14)));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] = ((((511 < 4286578705) % ((1 - (arr_10 [i_2]))))));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_14 = 9223372036854775789;
                        var_15 += ((!(arr_8 [i_2 - 1])));
                        var_16 = (max(var_16, ((min((max(116, var_9)), (-1579302102198533615 < 9223372036854775797))))));
                        var_17 = (max(var_17, ((((-var_9 & 10445643711541565404) == (((min((max(138, (arr_3 [i_2 + 1] [i_4]))), (!40))))))))));
                        var_18 = ((!((((!249) & ((102 ? -123 : 1904108439)))))));
                    }
                }
            }
            var_19 = (arr_0 [i_2 + 2]);
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_20 = (var_3 + 14362931024741405958);
                    var_21 = (arr_5 [i_2]);

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_22 ^= (arr_25 [4] [i_7 + 1]);
                        var_23 = ((max(((var_2 + (arr_0 [i_7 + 2]))), (((20 ? (arr_14 [i_2] [i_6 - 1] [i_8]) : (arr_12 [i_2])))))) == (45 && 10));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_24 = 1;

                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            var_25 = (1 ^ 35647);
                            arr_31 [i_2] [i_6 - 2] [i_7 - 1] [i_9] [i_2] = (((min(((127 ? var_3 : var_1)), (15 / -21844)))) == (((arr_14 [i_7 + 1] [1] [i_7 - 1]) ? (arr_14 [i_7 + 2] [i_2 - 1] [i_7]) : (arr_14 [i_7 + 1] [i_6] [i_7]))));
                            var_26 = 24;
                            var_27 = (max(var_27, ((((arr_3 [i_9] [1]) & (arr_13 [i_2 + 2] [i_7 - 1]))))));
                        }
                        arr_32 [i_2] [i_6] [i_2] [i_9] = (max((((arr_27 [i_2] [i_2 + 1] [i_6 - 1] [i_7 + 2]) ? (1 & 3) : (((arr_10 [i_2]) ? 12 : 64)))), ((-(arr_20 [i_7 - 1])))));
                        arr_33 [i_2] [i_6] [i_2] [i_9] = ((-40 != ((1 ? 11133122784521623368 : 148))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_28 = ((4542218749011782157 ? 7057458588713882484 : 32743));

                        for (int i_12 = 3; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_29 = (((arr_39 [i_2 + 2] [i_2]) ? (arr_39 [i_2 - 2] [i_2]) : var_10));
                            var_30 |= (arr_0 [i_7]);
                            arr_42 [i_2] [12] [i_7] [12] [i_2] = (+-9223372036854775790);
                            var_31 |= (~var_2);
                        }
                        for (int i_13 = 3; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            arr_47 [i_11] [i_6] [i_7] [i_11] [i_13] [i_2] [i_2] = (arr_40 [i_2] [i_6 - 1] [i_7 + 2] [i_13 + 1] [i_13 - 2]);
                            arr_48 [6] [i_7] [i_11] |= ((!(var_8 <= var_5)));
                        }

                        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                        {
                            var_32 = (~-7);
                            arr_51 [i_2 - 2] [i_6] [i_7 - 1] [i_11] [i_2] = ((247 + (arr_41 [i_2] [i_6] [i_7] [i_11] [i_14])));
                            var_33 = (min(var_33, (arr_26 [6] [i_14] [12] [i_11] [i_14] [i_11])));
                            arr_52 [i_2] [i_6] [i_7] [i_11] [i_14] |= (~26);
                            arr_53 [i_2 - 1] [i_2] [i_14] [i_6] [i_14] [i_14] = 46;
                        }
                        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                        {
                            arr_57 [i_2] [i_6] [i_7 + 2] [i_11] [i_11] [i_2] = 2146959360;
                            var_34 = (20 != -17);
                        }
                        for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                        {
                            var_35 = (((var_8 ? 1 : var_7)));
                            var_36 = (((-18 + 2147483647) >> (3574367761 - 3574367741)));
                            var_37 = (((1651793839 * 4294967295) ^ var_4));
                        }
                        for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                        {
                            var_38 = var_4;
                            arr_63 [i_2] [i_2] [i_7] [i_11] [i_17] = 1;
                            var_39 = (arr_27 [i_2 - 2] [i_6] [i_7 + 1] [i_17]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
