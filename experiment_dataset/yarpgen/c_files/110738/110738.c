/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 += 402444451;
        var_14 = var_11;
        var_15 = (arr_3 [i_0]);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = 35004;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_17 &= (((((max((arr_17 [i_1] [i_2] [i_3] [i_2] [i_5] [i_3]), (arr_2 [i_5])))) ? 2551826919220058509 : (62 + 15894917154489493106))) + (arr_17 [i_1 - 1] [8] [i_1 - 1] [i_1 - 1] [8] [i_1]));
                            var_18 = (((((var_11 ? ((((arr_7 [i_1 - 2]) && 65535))) : (arr_14 [i_1] [1])))) && ((((min(2551826919220058509, var_7))) && var_6))));
                            var_19 = (((((((~(arr_9 [i_1] [i_2]))) | (~-6332616061478218142)))) ? 2551826919220058509 : (~var_1)));
                            var_20 = var_1;
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_21 = (var_11 == -2410195892153600505);
                            var_22 = ((~(arr_17 [i_1] [i_2] [i_6 + 2] [i_6] [i_6] [i_6])));
                            var_23 &= var_0;
                            var_24 |= (~var_9);
                            var_25 = (min(var_25, (arr_5 [i_1 + 1])));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_26 = (max(var_26, (((((((28750 / -3421038894409411816) | var_2))) ? (arr_11 [10]) : (arr_7 [i_1]))))));
                            var_27 = var_9;
                        }

                        for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, ((!((var_4 >= (arr_17 [0] [i_1 - 1] [i_1] [17] [0] [i_1])))))));
                            var_29 = (min(var_29, (((4294967275 ? ((((var_11 || (arr_26 [4] [i_2] [i_3]))))) : (arr_16 [10] [1] [i_4] [i_4] [i_4]))))));
                        }
                        for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_30 = (arr_20 [i_9] [i_4] [i_3] [i_2] [21]);
                            var_31 = (arr_7 [i_1 + 1]);
                        }
                        for (int i_10 = 2; i_10 < 22;i_10 += 1)
                        {
                            var_32 = ((((arr_5 [i_1 - 2]) | (arr_5 [i_1 + 1]))));
                            var_33 *= ((((min(9223372036854775807, var_3)) <= (arr_8 [i_1] [i_3] [i_10]))));
                            var_34 = var_11;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_35 = 6332616061478218146;
                            var_36 = (min(var_36, ((((((2551826919220058523 ? 165 : var_4))) + -2551826919220058542)))));
                            var_37 = (min(var_37, var_11));
                            var_38 = 6332616061478218135;
                            var_39 *= -14143;
                        }
                        var_40 = (min(var_40, 22395));
                    }
                }
            }
        }
        var_41 = -var_10;
    }
    for (int i_12 = 1; i_12 < 10;i_12 += 1)
    {
        var_42 = (min((arr_16 [i_12 + 1] [i_12] [i_12 + 1] [i_12] [9]), (((arr_33 [i_12] [i_12]) & 5917007584671104251))));
        /* LoopNest 3 */
        for (int i_13 = 4; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    {
                        var_43 = (min(var_43, (((!(1 >= var_0))))));

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_44 = (min(var_44, 26833));
                            var_45 = (6332616061478218142 + (((((arr_51 [i_12] [i_13 - 3] [i_14] [i_12] [i_14] [i_15] [i_16]) ^ (arr_44 [i_12] [i_13] [i_13] [i_14] [i_16]))) + var_0)));
                            var_46 = (arr_41 [i_12] [i_12]);
                            var_47 |= ((((var_10 ? (arr_9 [i_15 - 2] [i_15 - 2]) : 1)) - -9031063712702072411));
                        }
                    }
                }
            }
        }
    }
    var_48 = (((min(-16, ((var_3 ? var_12 : var_7)))) & (min(var_6, -var_10))));
    #pragma endscop
}
