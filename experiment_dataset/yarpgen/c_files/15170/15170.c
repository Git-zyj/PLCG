/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = -var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 -= (arr_6 [i_0] [1] [i_0] [1]);
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((!((((((var_3 ? var_15 : var_2))) ? ((((var_4 && (arr_1 [14]))))) : (min(var_9, 2147483647)))))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_11 [3] [i_3] [i_3] = (arr_3 [1]);

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_21 = (!var_5);

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_22 = (((var_4 ? (arr_12 [17] [17] [1]) : 61440)) > (arr_0 [i_3] [i_3]));
                    arr_17 [i_0] [i_5] [i_0] [i_0] = ((-(((!(arr_14 [20] [i_3] [i_4]))))));
                    arr_18 [i_4] [i_5] = ((!(arr_9 [i_0])));
                    var_23 = ((!(!var_14)));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_24 = 7530;
                        arr_25 [i_0] [i_0] [i_0] [i_6] [i_0] = ((!(arr_0 [i_0] [i_0])));
                    }
                    arr_26 [i_6] = (arr_20 [7] [i_3] [i_3] [i_4] [i_6] [i_3]);
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    var_25 = arr_10 [i_8 - 1];
                    var_26 = ((-var_12 ? (arr_1 [i_8 - 1]) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    arr_32 [i_0] [i_3] [i_4] [i_9] = (arr_24 [i_0] [i_0] [i_3] [i_4] [i_0]);
                    arr_33 [i_0] [i_0] [i_0] |= (var_2 ? var_13 : -1);
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_19 [i_0] [i_3] [i_0] [i_0]) ? (arr_19 [i_0] [i_3] [i_4] [i_9 - 1]) : (arr_19 [4] [i_3] [i_4] [i_9 - 1]));

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_38 [10] [10] [i_3] [i_4] [i_9] [i_10] = (arr_15 [i_3] [i_9 + 1] [i_9 - 1] [i_4] [i_3]);
                        arr_39 [i_0] [i_3] [i_3] [10] [i_10] = (arr_4 [i_10]);
                    }
                    for (int i_11 = 4; i_11 < 22;i_11 += 1)
                    {
                        arr_42 [i_11] = 2312337548;
                        var_27 -= var_6;
                        arr_43 [i_11] [i_4] [i_4] [i_11] = -32753;
                        var_28 = -536870911;
                    }
                    var_29 = (!var_1);
                }
                arr_44 [i_4] [23] [21] [i_3] = var_17;
            }
            var_30 = (((var_2 ? 1 : (arr_35 [i_0] [i_3] [i_3] [i_3] [i_0] [i_3] [i_0]))));
        }

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_31 = (max((arr_2 [9] [i_12] [9]), 43168));
            var_32 = 1;
            arr_48 [i_0] [i_12] = ((var_2 + ((-var_1 ? (arr_46 [i_0] [i_12]) : (arr_15 [20] [i_12] [i_12] [i_12] [i_12])))));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            arr_58 [i_13] [i_12] = ((((max((((arr_9 [i_12]) ? var_16 : var_1)), (~3421658790)))) ? (min((max((arr_7 [i_0] [i_12] [i_0]), (arr_55 [i_0] [i_0]))), ((max(var_11, var_16))))) : (((~(arr_37 [i_13] [i_13 + 4] [i_13 + 1] [i_13] [i_13 + 1] [i_13] [23]))))));
                            var_33 |= (arr_19 [i_0] [i_15] [i_0] [i_0]);
                            var_34 = (!var_10);
                        }
                    }
                }
            }
        }
        var_35 |= var_10;
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {

        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            arr_64 [i_16] [i_17] = ((var_11 >= ((~(arr_52 [i_16] [i_17] [i_16] [19])))));
            arr_65 [i_17] [i_17] [i_16] = ((((max(4109, (arr_3 [i_16])))) ? (((arr_2 [i_16] [i_16] [i_17]) ? (arr_2 [i_16] [i_16] [i_16]) : (~var_10))) : (arr_61 [i_16])));
            arr_66 [i_16] [i_16] [i_17] = (1 ? (((!((min((arr_2 [i_16] [i_16] [i_16]), (arr_30 [13]))))))) : (15 == 1738624248));
        }
        /* LoopNest 3 */
        for (int i_18 = 2; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    {
                        arr_76 [i_16] [i_18] [i_19] [i_20] [2] [i_20] = ((-((((min(-4065524237589191945, 15287056927162312897)) <= 5329446673527698236)))));
                        arr_77 [i_16] [i_18] [i_16] [i_16] = (max((arr_2 [i_18 - 1] [i_18 - 1] [i_18 + 1]), (arr_2 [i_18 + 1] [15] [i_18 - 1])));
                        var_36 = ((-((((arr_67 [i_20] [i_18 - 2]) > var_5)))));
                    }
                }
            }
        }
        var_37 = var_10;
    }
    var_38 = (((((var_13 ? var_11 : var_2))) ? var_5 : -var_10));
    #pragma endscop
}
