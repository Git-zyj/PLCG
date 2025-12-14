/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_1 [i_0]) + (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] = (max((((arr_1 [i_0]) ? (~var_16) : (min(-1086488586, -1086488571)))), (arr_3 [i_0] [i_1])));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 = (arr_9 [i_2] [i_1] [i_2]);
                var_18 = (!(arr_6 [i_1] [i_2]));
                var_19 = (1 || -369082948);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_20 = (min(var_20, 1));
                            arr_16 [i_0] [i_5] [i_0] [i_0] [i_0] |= ((arr_7 [i_0] [i_1] [i_4] [i_5 - 2]) && var_12);
                            var_21 = (((arr_6 [i_0] [i_0]) & ((min(var_3, 1)))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_21 [i_0] [9] [i_3] [9] [i_3] [i_3] = (((var_11 * var_3) ? (arr_10 [1] [i_3] [1]) : (((arr_15 [i_6] [i_3] [i_1] [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_1] [i_0] [i_0]) : var_16))));
                    arr_22 [i_6] [i_0] [i_1] [i_0] [i_0] = var_14;
                    arr_23 [i_0] [i_1] [i_1] [i_3] = 1;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_22 += ((arr_12 [i_7] [12] [i_1] [12] [i_0]) ? ((~(arr_10 [i_0] [i_1] [i_3]))) : 1);

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_28 [i_0] [i_7] [i_0] [i_1] [i_0] = var_12;
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((arr_0 [i_0]) | var_6);
                        var_23 = (max(var_23, (((arr_7 [i_7] [i_3] [i_1] [i_0]) * (arr_0 [i_3])))));
                        var_24 = (arr_25 [i_8] [9] [9] [i_1]);
                    }
                    var_25 = arr_24 [i_1] [i_3];
                    arr_30 [i_7] [i_0] [i_0] [i_0] = (((1 ? 1086488571 : (arr_7 [1] [i_1] [i_3] [i_0]))));
                }
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_26 = (max(var_26, ((((((var_12 ? (arr_13 [i_0] [i_9] [i_1] [i_0]) : (arr_8 [i_0] [1] [i_9] [i_9])))) ? ((min(((var_13 > (arr_6 [i_0] [i_0]))), 1))) : ((((((1 ? 1 : 1))) || 1))))))));
                var_27 = (arr_17 [i_9] [i_9] [i_0] [i_0] [i_0]);
            }

            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_28 = (max(var_28, (min(((~(min(var_9, var_6)))), ((((((arr_12 [i_0] [i_0] [i_0] [1] [i_0]) ^ var_6))) ? ((min((arr_14 [1]), var_4))) : (arr_25 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_29 += ((((-(min(-554735405, (arr_15 [i_12] [i_11] [i_10 - 1] [i_1] [i_0])))))) ? 1 : (min((1476410819 + 1), (var_7 < var_0))));
                            var_30 *= ((arr_15 [i_10] [i_1] [1] [i_10] [i_10 - 1]) ? (((arr_31 [i_0] [i_0] [i_0] [i_11]) << (arr_31 [i_0] [i_1] [i_10 - 1] [i_11]))) : ((~(arr_15 [i_11] [i_12] [i_0] [i_12] [i_10 - 1]))));
                            var_31 *= min((((-1476410812 >= (arr_32 [i_1] [i_11] [i_12])))), (min((arr_10 [i_1] [i_1] [i_10]), ((var_7 ? (arr_25 [i_0] [i_11] [i_10] [i_0]) : 268435455)))));
                            arr_41 [i_0] [i_0] = ((-708573208 ^ ((-((min(0, 1)))))));
                            var_32 = (arr_1 [i_0]);
                        }
                    }
                }
            }

            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    arr_48 [i_0] [i_13 - 1] [1] [i_1] [i_0] = (((min(1, 134217726)) - ((-1476410812 ? 1 : -984941071))));
                    var_33 = (min(var_33, -var_3));
                    var_34 = var_16;
                }
                var_35 = ((((min((((arr_12 [i_13 - 1] [i_0] [i_0] [i_0] [i_0]) ? var_5 : 1)), (((arr_32 [i_13] [7] [i_0]) ^ (arr_42 [i_0])))))) ? (((arr_35 [i_13 - 1] [10]) ? (~1) : (~1367519812))) : ((-(((var_3 == (arr_24 [i_13] [i_13]))))))));
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                arr_51 [i_0] [i_1] [i_15] [i_0] = (max(((((var_3 ? (arr_20 [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_15] [i_15]))))), ((var_10 ? (arr_49 [i_15] [i_0] [i_15]) : (arr_49 [i_0] [i_0] [i_15])))));
                var_36 += (-(max((arr_36 [i_0] [i_0] [i_0] [i_1] [i_1] [i_15]), (arr_13 [i_0] [i_1] [i_15] [i_15]))));
                var_37 = ((arr_44 [i_15] [i_15] [i_1] [i_0]) << (arr_4 [i_0] [i_15]));
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_38 += ((arr_49 [i_0] [1] [i_16]) && (((((((arr_4 [i_0] [i_0]) ? (arr_19 [i_0] [i_0] [10] [i_0]) : 0))) ? (!var_14) : 1))));
                var_39 = var_16;
            }
            var_40 += (((max((arr_47 [i_1]), (~var_13))) < var_5));
        }
        var_41 = (1 ? 33554431 : 1476410813);
    }
    var_42 = ((min(var_1, var_1)));
    var_43 = (((((var_12 ? ((max(var_8, var_4))) : var_8))) ? 1 : (((var_7 || 1) ? ((var_2 >> (var_13 - 1092935080))) : (var_14 < 1)))));
    #pragma endscop
}
