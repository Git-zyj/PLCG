/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] &= (arr_3 [11] [11]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_10 ^= (min((!18010000462970880), 18010000462970880));
                    var_11 = (min(((min(((((arr_2 [i_0 - 3] [i_0 - 1]) || (arr_3 [1] [1])))), (arr_6 [i_0 - 4])))), (max((min((arr_7 [i_0] [i_1] [i_1]), 18010000462970880)), var_4))));
                }
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_12 = (((-(arr_1 [i_0 - 2] [i_3 + 1]))));
                                var_13 = var_7;
                            }
                        }
                    }
                    var_14 &= (arr_5 [i_0 - 1] [i_3 + 1] [i_3 - 1]);
                    var_15 &= var_7;

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_16 -= ((-(((arr_1 [i_0 - 2] [i_0 - 1]) / (arr_1 [i_0 - 2] [i_0 - 1])))));
                        arr_18 [i_0] [i_0] = (max(var_6, (min((arr_17 [i_3] [i_0] [i_3 + 1] [i_3] [i_3] [10]), (arr_7 [i_0] [i_3 - 1] [i_3 + 1])))));
                        var_17 -= ((-18010000462970880 - (min(2147479552, (-9223372036854775807 - 1)))));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_18 |= (min(((~(arr_24 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1]))), 18010000462970880));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_8] |= (max(((((arr_19 [i_7] [0] [i_0 - 1] [i_3 - 1] [i_8 - 2]) && (arr_12 [i_8 - 2] [i_3 + 1] [i_3 + 1] [i_8])))), ((~(arr_12 [i_8 - 1] [i_3 + 1] [i_3 + 1] [i_1])))));
                            var_19 = (-9223372036854775807 - 1);
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 22;i_9 += 1)
                        {
                            var_20 = (-18010000462970864 | 65534);
                            arr_29 [i_3] [i_0] = (arr_2 [i_7] [i_0 - 3]);
                            var_21 = var_2;
                            arr_30 [14] [i_0] [22] [i_7] [i_0] = (!18010000462970863);
                        }
                        for (int i_10 = 4; i_10 < 22;i_10 += 1)
                        {
                            var_22 = var_4;
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((min((arr_6 [i_0]), 221))), 0));
                            var_23 |= (min(((min(((min(1, var_8))), var_2))), (min(-18010000462970864, -18010000462970864))));
                            var_24 -= var_7;
                            var_25 = (min((min((arr_9 [i_0 - 4]), (arr_10 [i_3 - 1]))), (min((arr_0 [i_0]), -2431))));
                        }
                        arr_36 [i_0] [i_0] = (max(var_0, (!var_1)));
                        var_26 ^= (~(!var_0));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_27 = (arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_0]);
                        var_28 = (arr_0 [i_0 - 4]);
                        var_29 = ((-(arr_13 [i_11] [i_3 - 1] [i_3] [i_11] [i_1])));
                    }
                    arr_39 [i_0] [i_1] [i_0] = var_9;
                }
                arr_40 [i_0] [i_0] = -39;
            }
        }
    }
    var_30 = var_5;

    /* vectorizable */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        var_31 = (min(var_31, (((!(arr_16 [i_12] [i_12] [i_12 - 1] [15]))))));
        arr_44 [i_12] [i_12 - 1] |= (arr_33 [10] [10]);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 20;i_14 += 1)
            {
                {
                    var_32 = (min(var_32, (((!(arr_11 [i_14] [i_12]))))));
                    var_33 += ((18446744073709551615 - (arr_31 [i_14 + 1] [i_12] [i_14 - 1] [i_14 - 2] [i_12 - 1])));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            {
                                arr_56 [i_12] [i_13] [i_13] [i_15] [i_16] [i_15] [i_12] = (arr_27 [i_15]);
                                var_34 = (arr_1 [i_12] [i_12 - 1]);
                                var_35 -= (~18329559537481599704);
                            }
                        }
                    }
                    var_36 = 225;
                    var_37 = -6810687138026693032;
                }
            }
        }
        var_38 |= (((arr_19 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1]) | (arr_19 [i_12 - 1] [i_12] [i_12 + 1] [i_12 - 1] [i_12])));
        var_39 = (var_5 - 112);
    }
    for (int i_17 = 1; i_17 < 12;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_40 = (((min(28, 12)) & var_5));
            arr_62 [i_17] [14] |= (min((arr_61 [i_17 - 1]), (arr_54 [i_18] [9] [i_17 - 1] [i_17 + 3] [i_17])));
            var_41 = arr_28 [20];
        }
        arr_63 [i_17] [i_17] = (min((arr_19 [i_17 + 1] [i_17] [i_17 + 1] [i_17 - 1] [i_17]), (min((arr_45 [i_17 - 1] [i_17 + 2] [i_17]), (min(var_0, -18010000462970847))))));
    }
    var_42 = min(((var_5 | (max(1893322826265312696, var_0)))), ((min(-2431, 8674))));
    var_43 = var_7;
    #pragma endscop
}
