/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~(arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 |= var_11;
                        var_17 = (!var_13);
                    }
                }
            }
            arr_10 [i_0] [i_0] [i_0] &= (~var_4);
            arr_11 [i_0] [i_0] [9] |= -var_6;
            arr_12 [14] [i_0] [15] = ((~(arr_0 [i_1])));
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_18 = (5537827344564349521 || -8876030913888087330);
            var_19 = -3281;
            var_20 = -var_5;
            arr_15 [i_4] = (((var_0 == var_0) + 31));
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_21 *= (-var_10 * 18428559595485404344);

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_22 = 20656;
                var_23 = (max(var_23, var_9));
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_24 = var_1;

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_27 [i_7] [i_8] = -var_6;
                    var_25 *= (-8876030913888087347 >= 3258);
                    var_26 = ((~((var_3 ? 18428559595485404357 : 78))));
                    var_27 = (arr_16 [i_0] [2] [i_8]);
                }
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    var_28 |= ((var_7 % (arr_6 [i_5 + 1])));
                    arr_30 [i_0] [i_5] [i_0] [i_7] [i_7] = ((arr_8 [9] [i_5] [i_5] [i_5 - 1] [i_5]) % -4984161852462272070);

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_29 = (max(var_29, (((6 ? (((arr_1 [i_0]) ? var_10 : 6376871681121193919)) : var_10)))));
                        var_30 = (((~18184478224147271) & (arr_21 [i_0] [i_0] [i_0])));
                        var_31 *= ((var_3 ? (25347 + var_8) : (((arr_21 [10] [3] [17]) - (arr_22 [i_0] [2] [i_0])))));
                        arr_33 [i_10] [i_10] [i_10] [i_7] [i_0] = ((12 ? 167 : -8876030913888087330));
                    }
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        var_32 *= var_0;
                        var_33 = (max(var_33, (((2020764740 ? (((-(arr_8 [i_11 + 1] [i_9] [i_0] [i_5 + 3] [i_0])))) : ((8876030913888087322 ? var_9 : 13793110177292023939)))))));
                        var_34 = (~13933);
                        var_35 = (max(var_35, var_13));
                    }
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        var_36 = (arr_9 [i_7] [i_7] [i_7] [i_9]);
                        var_37 = (((((arr_31 [i_0] [i_5] [i_9] [i_9] [i_12] [i_9 - 1] [i_9]) ? 9223372036854775807 : (arr_14 [i_0] [16]))) % (~var_9)));
                        var_38 = (arr_37 [i_7]);
                        var_39 *= (!var_11);
                    }
                }
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                arr_41 [i_0] [i_0] [i_13] |= var_6;
                arr_42 [7] [i_0] [i_0] [i_0] = (((arr_7 [3] [i_5 + 4] [i_5 + 2] [i_5]) ? (arr_29 [8] [i_5 + 4] [i_5 + 4] [14]) : (arr_29 [i_0] [i_5 + 2] [i_5 + 3] [i_5 + 3])));
                arr_43 [i_0] [i_0] [i_5] [i_13] |= (4580779309970344483 * 4653633896417527676);
                var_40 = var_4;

                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_41 = (max(var_41, (((var_1 * (!2))))));
                    arr_47 [i_0] [11] [i_13] [i_14] = (((var_11 < (arr_16 [i_5] [i_13] [i_14]))));
                }
            }
            for (int i_15 = 4; i_15 < 15;i_15 += 1)
            {
                var_42 += ((var_4 ? var_2 : ((((var_1 != (arr_9 [i_15] [i_0] [i_0] [i_15])))))));
                var_43 = arr_36 [3] [i_5 + 4] [i_15] [6];
                var_44 = 1022395387;
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 17;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 16;i_17 += 1)
                    {
                        {
                            var_45 = (max(var_45, var_13));
                            var_46 = (max(var_46, (arr_54 [i_0] [13] [i_0] [i_16 - 1] [i_17])));
                            var_47 = (((arr_49 [i_0] [i_0] [i_17 - 1]) ? (arr_1 [i_16 + 1]) : (arr_44 [i_0] [2] [i_0] [i_0] [i_0])));
                            var_48 = (max(var_48, (((~(arr_14 [i_0] [i_5 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
    {
        var_49 = (max(11660244837664547511, ((min((max(-3664506029380105145, (arr_21 [i_18] [i_18] [i_18]))), 11033445051984556156)))));
        var_50 = (!250);
        var_51 |= (min((arr_56 [i_18] [i_18] [i_18] [i_18] [i_18]), 18428559595485404357));
    }
    var_52 = (((((var_6 ? ((min(3, 0))) : 255))) ? 133 : (((var_0 ? 0 : -1)))));
    #pragma endscop
}
