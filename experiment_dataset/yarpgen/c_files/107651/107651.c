/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (((!154) ? (~var_6) : -18));
        arr_2 [i_0] = (((((var_9 + 2147483647) << (7 - 7)))) ? ((var_2 ? var_11 : var_7)) : -var_7);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_14 = ((((-7 ? var_7 : var_8)) / -26));
                        var_15 = (max(var_15, ((((-127 - 1) / ((var_7 ? var_10 : var_5)))))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_18 [i_1] = var_9;
            var_16 = -117;
            arr_19 [i_5] = var_8;
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_17 = (((var_7 > var_2) ? (((var_4 ? var_0 : var_12))) : ((var_6 ? var_2 : 3730972000003346833))));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_18 *= (((159 <= 28) ? ((124 ? 0 : (-127 - 1))) : 1));
                            var_19 = var_4;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_20 = (((~var_3) / ((86 ? var_0 : 2125506863))));
                            var_21 = ((-((var_5 ? 65514 : 65525))));
                            arr_35 [i_1] [i_11] [i_7] [i_10] [i_1] [8] [i_10] = (((~var_4) / -17));
                            arr_36 [10] [5] [i_7] [i_10 - 1] [i_11] = 21;
                            var_22 *= var_7;
                        }
                    }
                }
                arr_37 [i_1] [i_1] [i_1] [i_7] = (-2233785415175766016 ? ((110 ? 807977914974543564 : var_1)) : (((2125506859 ? var_9 : (-32767 - 1)))));
                arr_38 [i_6] [i_7] = ((-(var_6 * -7)));
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                arr_42 [i_12] [1] = var_10;
                arr_43 [i_1] [i_12] = ((var_4 ? ((var_12 ? var_12 : var_11)) : (-1353319052 <= var_12)));
            }
            var_23 = 3330602673795631651;
            arr_44 [i_1] [i_1] = var_9;
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 14;i_15 += 1)
                {
                    {
                        var_24 = (((var_6 && var_4) ? ((((-127 - 1) ? -72 : var_6))) : ((var_6 ? var_2 : 1793144879))));
                        var_25 = ((!(var_11 > var_12)));
                        var_26 = var_5;
                        var_27 = var_12;
                    }
                }
            }

            for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
            {
                var_28 = ((var_5 ? ((var_1 ? var_2 : 8333)) : (~824411353)));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_29 = (((((var_3 ? var_11 : -1207426322705541352))) ? (((-1207426322705541351 ? var_6 : var_8))) : var_2));
                            var_30 = 0;
                            var_31 *= ((-(((!(-127 - 1))))));
                            var_32 = ((var_2 && (((0 ? 3330602673795631651 : 20)))));
                        }
                    }
                }
            }
            for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    for (int i_21 = 4; i_21 < 13;i_21 += 1)
                    {
                        {
                            var_33 = ((((var_4 ? -11092 : -28574)) == ((var_12 ? var_0 : var_8))));
                            var_34 = ((var_6 ? ((var_8 ? var_4 : -5745)) : 2501822417));
                            arr_69 [i_1] [i_1] [0] [i_1] [i_1] [i_19] [i_1] = (((((-8333 ? var_5 : -1207426322705541342))) ? 119 : ((var_7 ? 0 : -70))));
                        }
                    }
                }
                arr_70 [i_19] = ((6452614702686637067 ? -var_11 : (((-7 ? 4757 : 127)))));
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 14;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        {
                            arr_78 [i_19] [i_23] = 1;
                            var_35 = (((((var_2 ? -28578 : 4735))) ? (-29904 / var_4) : -var_2));
                        }
                    }
                }
                var_36 = (~var_5);
            }
            var_37 = (~6452614702686637067);
        }
        var_38 = 0;
    }
    for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
    {
        var_39 = (max(var_39, (((3330602673795631650 >> ((((~((-17479 ? 2766299044 : var_9)))) - 1528668236)))))));
        var_40 *= (!var_1);
        arr_81 [i_24] = ((((var_0 ? var_3 : 3330602673795631651)) > ((((~745826995) ? var_12 : (var_0 && var_11))))));
    }
    var_41 = (0 && var_12);
    #pragma endscop
}
