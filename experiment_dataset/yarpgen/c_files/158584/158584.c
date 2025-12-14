/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((-44137 ? -var_6 : var_7));
    var_15 = (max(((-((var_13 ? var_1 : var_1)))), (max((!var_0), ((var_3 ? 22050 : -1))))));
    var_16 -= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) + (arr_1 [i_0])))) ? -var_2 : var_12));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [20] [9] &= 906306739;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_13 [5] [i_3] [2] [i_3] [5] = ((var_1 ? (arr_11 [i_1 + 1] [i_1 - 2]) : var_7));
                            arr_14 [i_0] [i_3] [i_4] [19] [i_4] = var_8;
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                var_17 += var_6;

                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_18 = var_5;
                        var_19 = (max(var_19, (((((((arr_21 [i_0] [i_1 + 1] [i_0]) ? var_13 : var_9))) ? (arr_3 [i_7 + 1] [i_5 + 1]) : (arr_16 [i_1 - 1] [i_7 - 1]))))));
                        var_20 = (((arr_11 [i_1 - 2] [i_7 - 1]) ? (arr_12 [i_6] [i_1 + 1]) : (arr_11 [i_5 + 1] [i_0])));
                    }

                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        arr_24 [0] [i_1] [i_5 + 1] [i_6] [i_0] [i_6] |= var_0;
                        arr_25 [i_5] [i_6] [i_5] [i_6] [i_0] = (((((-(arr_21 [i_0] [6] [i_5])))) ? (arr_15 [i_5 + 1] [1] [i_8 - 2]) : var_12));
                        var_21 *= arr_17 [i_6] [i_8 - 1] [i_1 + 1];
                        arr_26 [i_1] [i_1] [14] [i_6] [14] [i_6] = -21413;
                        var_22 = (min(var_22, (((var_10 ? var_9 : (~44137))))));
                    }
                    var_23 = (((((2846016862999036626 ? 1750508964 : 21387))) ? -44119 : (((arr_15 [i_0] [i_1] [i_1]) ? -1 : var_4))));

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_24 = 18446744073709551609;
                        var_25 = ((480 ? 127 : 1));
                        var_26 += ((arr_3 [i_5 + 1] [i_1 - 1]) < (arr_3 [i_5 + 1] [i_1 - 1]));
                    }
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    arr_32 [i_10] [i_0] [i_0] [i_1] [i_5 + 1] [i_10] = (((arr_4 [i_0]) ? (arr_4 [i_1 - 1]) : var_5));
                    var_27 = (arr_9 [i_1 - 2] [i_5 + 1]);

                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        var_28 = (max(var_28, (((var_3 < ((var_5 ? (arr_18 [i_0]) : (arr_17 [i_0] [5] [i_11 + 1]))))))));
                        arr_36 [i_10] [i_1] [i_1] [i_10] [i_1] = (((arr_1 [i_1 - 2]) % -var_11));
                    }
                }
                var_29 = -var_3;
                var_30 += (((arr_28 [i_5 + 1] [i_1 - 2] [20] [i_1 - 2] [i_1 - 1] [i_5 + 1]) ? (arr_28 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_0])));
                arr_37 [i_1] [i_1] = ((5899482018485280982 ? -2 : 21409));
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {

                for (int i_13 = 2; i_13 < 19;i_13 += 1) /* same iter space */
                {
                    arr_44 [i_12] [i_13 + 2] [i_12] = -26256;
                    var_31 = var_13;
                }
                for (int i_14 = 2; i_14 < 19;i_14 += 1) /* same iter space */
                {
                    arr_47 [i_14] [10] |= ((var_7 ? (arr_27 [i_14] [3] [i_14 - 1] [i_14 - 1] [3] [i_14 + 2] [i_14 + 1]) : (arr_27 [i_0] [i_14 - 1] [i_1 + 1] [i_14 - 1] [i_0] [i_12] [1])));
                    var_32 = (min(var_32, ((((arr_42 [i_1 - 2] [i_1 - 2] [i_14 - 2] [3]) ? -21416 : -20706)))));
                }
                var_33 = (((arr_1 [i_0]) != var_13));
                arr_48 [i_12] [i_12] [i_12] = -44109;

                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_34 = (max(var_34, ((((152732117 || 65535) ? (arr_9 [i_1] [i_1 - 2]) : (arr_42 [i_0] [i_1] [i_12] [i_15]))))));

                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        var_35 = var_3;
                        var_36 = var_1;
                    }
                    arr_54 [i_12] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = (arr_45 [i_1] [i_12] [i_15]);
                }
            }
            for (int i_17 = 1; i_17 < 20;i_17 += 1)
            {
                arr_58 [i_1] = ((2576 ? 1 : 44141));
                arr_59 [i_0] [i_1] [i_17 + 1] = ((-(arr_39 [i_1 - 1] [i_1])));
            }
            var_37 += 9223372036854775680;
            var_38 *= (arr_16 [i_0] [i_1]);
            var_39 &= (((arr_19 [i_0] [i_0] [i_0] [8] [i_1]) ? (arr_35 [i_0] [i_0] [i_1 + 1] [i_0] [0] [i_0] [0]) : (~1786)));
        }
    }
    #pragma endscop
}
