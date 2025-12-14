/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (var_2 ? var_16 : var_13);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 = (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2 + 4]);
                        var_21 = var_13;
                    }
                }
            }
        }
        var_22 = ((-((var_1 ? 7534206863655712528 : 6001536542215562688))));
        var_23 = (~var_12);
        var_24 = ((23972 ? -26506 : 26509));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_25 = ((~(min(((var_7 ? var_10 : var_10)), (var_7 | var_18)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_26 = ((((((arr_22 [i_4] [i_5] [i_4] [i_5] [i_5]) ? var_0 : (arr_22 [7] [7] [i_6] [i_7] [i_5])))) ? 0 : (((~(arr_22 [i_4] [i_5] [i_5] [i_8] [i_5]))))));
                                var_27 = (5959993495509640210 & var_13);
                                var_28 = ((!(((var_6 ? (arr_20 [i_8 + 2] [i_8] [i_8 + 1]) : (arr_20 [i_8 + 1] [1] [i_8 + 2]))))));
                            }
                        }
                    }
                    var_29 = (!53);
                    var_30 ^= ((23984 ? ((((~1) ? (((~(arr_12 [i_5])))) : var_8))) : (max((arr_11 [i_4] [i_6]), ((min(var_2, 30611)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            {

                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_31 = 4171627823;
                                var_32 &= (min(((23985 ? (-32767 - 1) : 26513)), 23984));
                                var_33 = ((-(arr_20 [i_11 + 1] [i_11 + 1] [i_11])));
                                var_34 = ((~((-1 ? 1 : (var_15 || 98)))));
                            }
                        }
                    }
                    var_35 = (((-6605805595225063717 >= var_11) ? (162 == 1) : (40 >= -5291086609037858053)));

                    for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_36 = max((1 == 0), (((arr_33 [i_9 + 2] [i_11 - 1] [i_11 + 1] [i_14 + 1]) ? (arr_33 [i_9 - 2] [i_11 - 1] [i_11 + 3] [i_14 - 1]) : (arr_33 [i_9 - 2] [i_11 + 3] [i_11 + 3] [i_14 - 1]))));
                        var_37 = ((!(((arr_36 [i_9 + 1] [i_9 - 2] [i_10] [i_10] [i_14 - 1] [i_14 - 1]) >= (arr_36 [i_9 + 1] [i_9 + 1] [0] [i_10] [i_9] [i_9 + 1])))));
                        var_38 = (max(var_38, 5554546797043517878));

                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            var_39 = (max(var_4, var_2));
                            var_40 = (arr_41 [i_9] [i_10] [i_11] [i_14] [i_14]);
                            var_41 = ((((min(var_2, 36490))) ? (((arr_18 [i_10]) ? var_6 : (arr_33 [i_9 + 2] [i_11 + 1] [i_14 - 1] [i_14 - 1]))) : var_5));
                            var_42 = ((~((max((arr_25 [i_10]), (arr_25 [i_10]))))));
                        }
                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            var_43 = (min(((-(arr_22 [i_9 + 1] [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_10]))), (arr_22 [i_9 + 1] [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_10])));
                            var_44 = ((-(((var_5 || (arr_37 [i_10] [i_14 + 1] [i_11 - 1] [i_10] [i_10]))))));
                            var_45 = ((((+((max((arr_21 [i_9]), (arr_25 [i_10])))))) == 0));
                        }
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            var_46 = ((var_5 >= ((min(-26506, var_15)))));
                            var_47 += (((~146) ? ((-var_4 ? var_9 : (arr_29 [i_10] [11] [i_10]))) : var_9));
                            var_48 = (max(0, ((max((arr_33 [i_14 + 1] [i_11 + 3] [i_9 - 2] [i_9 + 1]), (arr_33 [i_14 + 1] [i_11 + 2] [i_9 - 2] [i_9 + 2]))))));
                        }
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            var_49 = (((~26505) & (((arr_36 [i_14 - 1] [i_14 + 1] [i_14] [i_10] [i_14 + 1] [i_14 - 1]) ? var_13 : var_13))));
                            var_50 = 38613;
                            var_51 = (max(var_51, var_0));
                        }
                    }
                    for (int i_19 = 1; i_19 < 11;i_19 += 1) /* same iter space */
                    {
                        var_52 = var_8;
                        var_53 = ((~(arr_15 [1] [i_10])));
                        var_54 = (!((max((arr_35 [i_9] [i_9 + 1] [i_10] [i_9]), (arr_35 [i_9] [i_9 + 2] [i_10] [i_10])))));
                        var_55 = (min(var_55, ((var_10 ? (arr_23 [i_9 + 2] [i_11 - 1]) : (var_12 % var_15)))));
                    }
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {

                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        var_56 = (max(var_56, ((((arr_31 [i_21]) % (arr_49 [i_9] [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9]))))));

                        for (int i_22 = 0; i_22 < 12;i_22 += 1)
                        {
                            var_57 = -var_2;
                            var_58 = (arr_42 [i_9] [i_10] [i_20] [i_21] [i_21] [i_22]);
                            var_59 ^= (max((((arr_50 [i_9 + 1] [i_9 + 2] [i_9 + 1]) ? (arr_42 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 2]) : (arr_42 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_9 + 2]))), ((var_14 ? (arr_50 [i_9 + 1] [i_9 - 1] [i_9 - 2]) : (arr_50 [i_9 - 2] [i_9 + 1] [i_9 - 2])))));
                        }
                    }
                    var_60 = var_6;
                }
                var_61 = ((+(((var_0 % 65525) & -123))));
            }
        }
    }
    #pragma endscop
}
