/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = (-1 == 849726638096387541);
            var_16 = min(-var_0, (min((0 ^ var_9), (arr_3 [i_1]))));
            var_17 = (0 >> (((arr_2 [i_0]) - 5992803282200720427)));
            var_18 += (((!1) ? (min(var_9, -var_6)) : (((min((arr_1 [i_0]), var_0))))));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_2] [i_3] = (arr_2 [i_3]);
                arr_13 [i_0] [i_0] [i_3] = (((8546154464704028105 ? 1683770552 : 8768195340988540083)));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_19 = -var_5;
                    var_20 = var_0;
                    var_21 = ((!(((-575370547 ? -2147483630 : (arr_9 [i_0] [i_4]))))));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_23 [i_2] [i_2] [i_4] = 1683770551;
                    var_22 = (arr_14 [i_0] [i_2] [i_4] [i_6]);
                    var_23 = var_5;
                }
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    var_24 = 2170002554;
                    var_25 ^= 2124964742;
                    var_26 = (max(var_26, var_0));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_27 = (~2611196743);
                    var_28 = (((arr_8 [i_4] [i_0]) ? (arr_8 [i_4] [i_8]) : (arr_8 [i_0] [i_2])));
                }

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_29 = (arr_0 [i_9]);
                        var_30 = (min(var_30, (~0)));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_31 ^= (arr_28 [i_0] [i_0] [i_0] [3] [i_0]);
                        var_32 = var_11;
                    }
                    var_33 = var_14;
                    var_34 = (max(var_34, (arr_32 [i_0] [i_2] [i_4] [i_9] [i_4])));
                    var_35 = (min(var_35, (((var_7 ? var_5 : var_9)))));
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_36 *= var_14;
                    var_37 = (min(var_37, (arr_9 [i_0] [i_2])));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_46 [i_0] = (arr_39 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]);
                            var_38 = 0;
                            arr_47 [i_0] [i_0] [i_0] [i_0] = var_13;
                            var_39 = (max(var_39, -18024858194180213386));
                            var_40 = ((var_9 * (((((arr_5 [i_0] [i_0]) > var_12))))));
                        }
                    }
                }
                arr_48 [i_0] [i_2] [i_4] = -127;
            }
            var_41 -= 1;
            var_42 = (0 / var_4);
            var_43 = (((1719387068 < -575370570) ? 1 : -2611196757));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            arr_51 [1] &= ((((+(((arr_14 [i_0] [i_0] [i_15] [i_15]) ? var_11 : var_2)))) <= ((((arr_44 [i_0] [i_0] [i_0] [i_0]) * var_11)))));
            arr_52 [i_15] = (((((min(27, (arr_7 [i_0]))) ? (arr_19 [i_0] [i_15]) : (min(2611196774, (arr_4 [i_15] [i_15] [i_15])))))));
            var_44 = ((min(1, (((arr_6 [i_0]) - 2091193905)))));
            arr_53 [i_0] [i_0] [i_15] = min((~var_9), ((var_8 ? 3917317958 : -1)));
        }
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            arr_56 [i_0] = ((~(-3424968326334373136 ^ -6948530436963062546)));
            var_45 = var_14;
        }
        var_46 = (min(var_46, (min(((min(-1, (~var_4)))), ((((!(arr_40 [i_0] [i_0] [i_0] [i_0]))) ? ((((arr_49 [12] [12]) ? (arr_1 [i_0]) : var_0))) : (arr_44 [i_0] [i_0] [8] [10])))))));
        arr_57 [i_0] = (min(((((arr_29 [12] [i_0] [i_0] [i_0] [i_0] [12]) ? (arr_10 [i_0] [i_0] [i_0]) : 1))), -3424968326334373136));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_47 = min((~1), ((~(arr_40 [i_17] [i_17] [i_17] [i_17]))));
        var_48 *= 1;
    }
    var_49 = var_12;
    var_50 = min(((-var_0 ? 74 : (var_1 & var_10))), (((var_0 ? -var_13 : var_3))));
    var_51 = (((((!var_3) ? var_5 : 22244)) > var_1));
    #pragma endscop
}
