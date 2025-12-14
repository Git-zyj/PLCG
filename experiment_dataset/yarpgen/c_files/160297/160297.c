/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (max(var_6, ((((min(10419024912245705239, 10419024912245705239))) ? (~var_2) : var_13))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_13 [i_2 + 1] [i_4] [i_2] [i_1] [i_4] &= (var_8 == 197);
                            arr_14 [i_2] [i_2] [i_2] = var_1;
                        }
                        var_21 = ((arr_3 [i_2] [i_1]) ? var_0 : ((1619078487 ? var_6 : (arr_9 [i_0] [i_0] [i_2] [i_0] [i_2]))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_21 [9] [i_1] [i_5 + 2] [i_6] &= ((~(arr_15 [i_5 - 1] [i_5 + 1])));
                        arr_22 [i_6] [i_5] [12] [i_0] = 947103345;
                        arr_23 [i_6] [i_5] [i_1] [2] [i_0] [i_0] = (((arr_6 [8] [i_1] [i_6]) ? var_5 : var_5));
                    }
                }
            }
            var_22 = (arr_6 [i_1] [3] [i_0]);
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_23 = ((var_6 ? (arr_17 [i_7] [i_7 + 2] [i_7 + 4]) : (((var_19 ? var_10 : var_16)))));
                        arr_29 [i_0] [1] [i_7 + 4] [10] [i_0] [i_0] |= ((10419024912245705239 ? 2177046194 : 11));
                        var_24 = var_2;
                        arr_30 [i_8] [i_1] [i_7 + 1] [i_1] = ((((arr_5 [i_0] [i_1] [i_7 - 1] [i_8]) == var_12)));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    {
                        var_25 = 0;
                        var_26 = (max(var_26, ((((arr_16 [i_9] [i_11 - 1] [i_11] [i_11 - 1]) ? 108 : (arr_26 [i_0] [i_11 - 1] [i_11 + 1] [i_11 - 1]))))));
                        var_27 = (((((var_19 ? (arr_25 [i_0] [i_0] [i_10] [6]) : (arr_19 [i_0] [i_9] [i_10] [i_10] [i_10] [i_11])))) ? (!var_13) : -628104016));
                    }
                }
            }

            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_28 = (min(var_28, ((((arr_27 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12]) ? var_9 : (arr_10 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_13] [i_12]))))));
                    var_29 = ((17404170112933216553 ? 33 : 3));
                }
                for (int i_14 = 2; i_14 < 12;i_14 += 1)
                {
                    arr_45 [i_12] [i_0] [i_0] [11] = 10555365810830351605;
                    var_30 = ((582464370 & (arr_16 [i_12 + 1] [i_12] [i_12] [i_12 - 1])));
                }
                var_31 ^= ((((((arr_38 [i_0] [i_0] [i_0]) ? -3 : var_10))) ? (((arr_4 [i_9]) ? var_1 : var_6)) : -13));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            arr_50 [6] [i_9] [i_9] [i_15] [i_16] [i_12] = -122;
                            arr_51 [i_12] [i_12] = ((12817984416143172915 ? var_15 : (arr_8 [i_0] [i_12 - 1] [i_12] [i_16])));
                            arr_52 [i_0] [i_0] [i_0] [i_12 - 1] [i_12] [i_15] [i_12] = (arr_0 [i_12 + 1]);
                            var_32 = (arr_11 [i_0] [i_12] [i_12] [i_12 - 1] [i_12] [i_15] [i_12]);
                        }
                    }
                }
            }
        }
        arr_53 [7] = var_17;

        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    {
                        arr_61 [i_18] [i_18] [i_18] [i_19] |= (((arr_35 [i_17]) ? var_7 : (arr_55 [i_0] [i_18])));
                        var_33 = (max(var_33, -var_15));
                        arr_62 [i_0] [i_0] [i_0] [i_19] = -14089;
                    }
                }
            }
            arr_63 [i_0] [i_0] [1] = (arr_57 [i_0] [i_17] [i_0] [i_17]);
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 10;i_22 += 1)
                    {
                        {
                            var_34 = (arr_27 [i_0] [i_17] [i_20] [i_21] [i_22] [i_22]);
                            var_35 += var_17;
                            var_36 = var_0;
                            var_37 += (arr_38 [i_22 + 1] [i_22 - 1] [i_22 + 3]);
                            arr_70 [i_17] [i_0] = var_2;
                        }
                    }
                }
            }
            arr_71 [i_0] [1] [i_0] = (!var_9);
            var_38 &= (arr_56 [i_0] [i_0] [i_0]);
        }
        for (int i_23 = 0; i_23 < 13;i_23 += 1)
        {
            arr_76 [i_0] [i_23] &= ((!(var_17 || var_8)));
            arr_77 [i_0] [i_0] = ((11 ? 140 : (arr_20 [i_0] [i_0] [i_0] [i_0])));
        }
        var_39 = -13931532134678491232;
        var_40 = (((1559653228 | -74) ? (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_68 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_41 = (max(var_41, (~var_19)));
    #pragma endscop
}
