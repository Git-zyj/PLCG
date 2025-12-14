/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max(var_5, (min((min(var_9, var_10)), var_7)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (~1);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_12 -= ((!(arr_3 [i_0])));
            arr_5 [i_0] [i_0] [9] = (arr_4 [i_0]);
            arr_6 [i_0] = (arr_1 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_13 = (max(((max((arr_7 [i_0] [i_0] [i_2]), (arr_7 [i_0] [i_0] [i_0])))), (min((max((arr_9 [i_0]), (arr_4 [i_0]))), (((~(arr_10 [i_0]))))))));
            var_14 = ((~((max((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_2] [i_0] [i_0]))))));
            var_15 ^= (min(((max((arr_9 [i_0]), (arr_9 [i_0])))), (arr_9 [i_0])));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            arr_13 [7] [i_0] = (min((max((arr_0 [i_0]), (arr_0 [i_0]))), (arr_8 [i_3] [i_3] [i_0])));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    {
                        var_16 = (arr_1 [i_3] [i_3]);
                        arr_19 [i_4] [i_3] [i_4] [i_3] = min((((arr_14 [i_4] [i_5] [i_5 - 1] [i_4]) % (arr_14 [i_4] [i_4 - 1] [i_4 - 1] [i_4]))), (arr_14 [i_4] [i_4 - 1] [i_5 - 1] [i_4]));
                        var_17 *= (max((max((min((arr_16 [i_0]), (arr_8 [i_5 + 1] [i_4 - 1] [i_3]))), ((((arr_18 [i_0] [i_3] [i_4] [i_5]) + (arr_18 [i_0] [i_3] [i_4] [i_3])))))), (arr_1 [i_0] [i_0])));
                        var_18 *= ((((min((arr_12 [i_4 + 1]), (((arr_12 [i_0]) == (arr_12 [i_3])))))) - ((((arr_8 [i_0] [i_3] [i_4 - 1]) && ((min((arr_16 [i_0]), (arr_18 [i_3] [2] [2] [i_5])))))))));
                        var_19 ^= (arr_14 [i_0] [i_0] [i_0] [i_3]);
                    }
                }
            }
            var_20 = (max(var_20, ((((((((max((arr_12 [1]), (arr_18 [i_3] [i_3] [i_3] [i_0])))) << (((arr_18 [i_0] [i_3] [i_3] [i_3]) - 13075))))) - (max(6887901048056557857, -6589999914989956011)))))));
            arr_20 [i_0] [i_0] [i_0] = (max((((!(2993135448475160043 + 1)))), (max(((((arr_8 [i_0] [i_3] [i_3]) % (arr_14 [i_3] [i_3] [i_3] [i_3])))), (min((arr_17 [i_0] [i_0] [i_3] [i_3]), (arr_10 [i_3])))))));
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6 - 1] = (min((min((arr_21 [i_6 - 1]), (arr_22 [i_6 - 1]))), ((max((arr_22 [i_6 - 1]), (arr_22 [i_6 - 1]))))));
        var_21 = (min(var_21, ((max((arr_21 [i_6]), (~26334))))));
        arr_24 [i_6 - 1] [i_6 - 1] = (min((min(((((arr_21 [i_6]) >= (arr_21 [i_6])))), (arr_22 [i_6]))), (arr_22 [i_6])));
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_22 = (min((min((arr_26 [i_7 - 1] [i_7 - 1]), (arr_26 [i_7 - 1] [i_7]))), (arr_26 [i_7 - 1] [i_7])));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        arr_38 [i_8] [i_9] [i_10] = (arr_25 [i_7 - 1] [i_8]);
                        arr_39 [i_7] [i_7] = ((!(arr_29 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                    }
                }
            }
            var_23 = (max(var_23, (arr_31 [i_7 - 1] [i_7 - 1])));
            var_24 ^= ((~(arr_33 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
            arr_40 [i_7] [i_8] = ((-(arr_25 [i_7 - 1] [i_7])));
            arr_41 [i_7] &= (((((arr_28 [i_7 - 1] [i_8]) + 2147483647)) >> (arr_27 [7])));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                var_25 = ((~(arr_33 [i_12] [i_12] [i_7 - 1])));
                var_26 = (arr_34 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]);
                var_27 = (arr_31 [18] [i_12]);
            }
            var_28 |= (((arr_33 [i_7] [i_11] [i_7 - 1]) && (arr_33 [i_7] [i_11] [i_7 - 1])));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 24;i_14 += 1)
                {
                    {
                        arr_52 [i_11] [i_13] = ((!(arr_45 [i_13] [i_13])));
                        arr_53 [i_13] = (((((arr_30 [i_7] [i_7 - 1] [i_7 - 1]) & (arr_27 [i_11]))) << (((!(arr_46 [i_13]))))));
                        arr_54 [i_14] [i_13] [i_13] [i_7] = (((arr_44 [i_7 - 1] [i_13] [i_7 - 1] [13]) >= (arr_28 [i_7 - 1] [17])));

                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            var_29 = (i_13 % 2 == zero) ? ((((arr_49 [i_13] [i_13 + 1] [i_13] [i_13 + 1]) % (((arr_30 [i_7 - 1] [i_7] [i_7 - 1]) << (((arr_50 [i_13]) - 287693946))))))) : ((((arr_49 [i_13] [i_13 + 1] [i_13] [i_13 + 1]) % (((arr_30 [i_7 - 1] [i_7] [i_7 - 1]) << (((((arr_50 [i_13]) - 287693946)) - 1597718638)))))));
                            arr_57 [i_13] = (~(arr_48 [i_7 - 1] [i_13]));
                            var_30 = (arr_35 [i_7] [i_7] [i_7 - 1] [i_7 - 1]);
                            arr_58 [i_7] [i_13] [i_7 - 1] [2] [i_7] = (arr_56 [i_7] [13] [i_7] [i_7]);
                            arr_59 [i_7 - 1] [i_11] [i_13 - 1] [i_11] [i_15] [i_13] = ((-((-(arr_44 [i_15] [i_13] [21] [i_14 - 2])))));
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            var_31 = max((arr_33 [i_7 - 1] [i_7] [i_7]), (max(((max((arr_26 [i_7 - 1] [i_16]), (arr_46 [i_7])))), (max((arr_34 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1]), (arr_35 [i_7 - 1] [i_7] [i_7] [i_7]))))));
            var_32 += (min((max((arr_42 [i_7 - 1]), (arr_42 [i_7 - 1]))), (((~(arr_28 [i_7 - 1] [i_7 - 1]))))));
            arr_62 [i_7] [i_7] = ((~(min(((min((arr_55 [10] [i_7] [i_7] [i_16] [i_16] [19] [i_16]), (arr_34 [i_7] [i_16] [i_7] [i_7 - 1] [i_16] [1])))), (min((arr_55 [i_7] [i_7] [i_7 - 1] [2] [i_16] [i_16] [i_16]), (arr_56 [i_7] [i_7 - 1] [i_7] [i_7 - 1])))))));
            arr_63 [i_7] = (min((arr_25 [i_7 - 1] [i_7 - 1]), (max((arr_36 [i_7 - 1] [i_16] [i_7 - 1]), (arr_48 [i_7] [1])))));
        }
    }
    var_33 = (min((min((min(var_10, var_0)), (var_0 | var_3))), ((min((min(var_3, var_1)), (var_4 && var_4))))));
    #pragma endscop
}
