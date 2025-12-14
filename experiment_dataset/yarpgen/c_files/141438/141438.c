/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1] = (-((29727 ? var_15 : 14317667330684823979)));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_8 [i_1] [10] [i_1] [i_1] = -1;
                arr_9 [i_1] [i_1] [i_2] [i_2] = var_7;

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] [i_2] [3] = (var_4 & 3577605789407725570);
                    var_18 = 4124767356;
                    arr_13 [i_0] [12] [i_1] [i_3] = var_9;
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_20 [i_0 - 1] [i_1 + 1] [i_2] [i_1] [i_1] = (((((var_8 ? 0 : 96))) ? (!var_7) : var_12));
                            var_19 = var_4;
                            arr_21 [i_1] [i_2 + 2] = var_5;
                            var_20 = (min(var_20, var_15));
                        }
                    }
                }
            }
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_30 [i_1] [14] [i_8 - 1] = max((((var_0 % var_3) ? (max(var_7, 102)) : var_15)), (max((((170199940 ? var_5 : var_14))), var_6)));
                            var_21 = var_6;
                            arr_31 [i_1] [9] [9] [13] [i_7] [i_8 - 1] [i_8 - 1] = var_16;
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_22 ^= ((((((var_9 * var_5) | var_16))) ? (((max(var_16, 255)))) : var_1));
                    arr_34 [i_1] [i_9] = ((-89 % ((((max(var_14, var_0))) ? ((var_13 ? 31308 : var_2)) : -19487))));
                    var_23 &= ((!((((~-18424) ? (((202 ? var_8 : -3986000526209570287))) : -var_17)))));
                    var_24 = ((!((((~170199926) ? (min(8397676114908683481, 2009662151098379643)) : (min(var_7, var_11)))))));

                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 12;i_10 += 1)
                    {
                        arr_37 [i_1] = ((var_1 ? var_8 : var_14));
                        arr_38 [i_10 - 1] [3] [i_1] [i_1] [5] [14] = var_1;
                        arr_39 [i_0] [i_0] [13] [i_0] [i_1] [5] = 1;
                        arr_40 [i_1] [i_1] [i_10] = (9223372036854775801 && 1911538886);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_43 [i_0] [3] [i_6] [i_1] = var_11;
                        arr_44 [14] [i_1] [i_6] [6] [i_1] [i_6] = (~(((var_4 ? var_17 : var_0))));
                        var_25 = (((!var_12) ? ((-((var_0 ? var_2 : var_4)))) : (!var_8)));
                    }
                }
                arr_45 [i_1] [i_1] [i_1] = (~((397800702018697578 | (((var_0 ? var_15 : var_9))))));
                arr_46 [4] [i_1] = (((min(((var_8 ? var_13 : var_8)), (77 % var_15))) == ((-((var_1 ? var_10 : var_5))))));
            }
            /* vectorizable */
            for (int i_12 = 3; i_12 < 13;i_12 += 1)
            {
                var_26 |= (var_17 ? ((var_3 ? var_6 : 4294967295)) : (((var_12 ? var_10 : var_8))));
                arr_50 [i_1] [i_1] [i_1] = 1;
                arr_51 [i_1] [i_1] [i_1] = (((var_9 ? var_17 : 2048828614)) / -var_15);
            }
            arr_52 [i_1] = ((-(!-9223372036854775802)));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        var_27 = (min(var_27, -1340797987451941106));
                        var_28 = ((min(621208404, var_1)) >> (((!(((var_3 ? 562949953421311 : var_0)))))));
                        arr_57 [i_0] [i_1 + 1] [i_13 + 3] [i_1] = (min((max(-var_11, var_2)), (min(var_5, 3236598481062244912))));
                        var_29 = (min(var_29, var_7));
                        var_30 = ((~(max((17593617022167526030 | var_4), var_6))));
                    }
                }
            }
        }
        arr_58 [i_0 + 1] [i_0] = (((887672191893517720 ^ 960438116) ? var_4 : var_6));
        var_31 = (min(var_31, ((65517 ? ((~(var_1 | var_4))) : (((var_9 < var_12) ? ((var_7 ? var_14 : var_15)) : var_8))))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_63 [i_15] = var_12;
        arr_64 [i_15] [i_15] = var_4;
    }
    var_32 = ((~((var_15 ? (((9223372036854775801 ? var_16 : 0))) : (min(var_10, var_3))))));
    /* LoopNest 3 */
    for (int i_16 = 1; i_16 < 18;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 17;i_18 += 1)
            {
                {
                    var_33 = (((!(((var_6 ? var_5 : var_4))))) ? (!3236598481062244906) : (~1498522577));
                    var_34 = (min(var_34, (((!(((!536870912) && var_16)))))));

                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        arr_76 [i_16] [i_17] [7] = (((max(var_11, var_4)) == var_1));
                        var_35 ^= (((((!(((var_7 ? var_6 : var_2)))))) < (-2738846249112268655 && 14640138449817546251)));
                        var_36 *= var_0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
