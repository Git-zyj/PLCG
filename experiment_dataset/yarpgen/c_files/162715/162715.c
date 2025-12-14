/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_3 [2] |= (min(((((min(var_14, var_15))))), ((((min(var_15, var_3))) ? var_7 : (arr_1 [i_0])))));
        var_16 = var_2;
        arr_4 [i_0] [i_0] = (((((max(var_10, (min(var_6, var_10)))))) & (min(var_3, (arr_0 [i_0])))));
        arr_5 [i_0] [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_17 &= (var_8 - var_12);

            for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
            {
                var_18 += (((var_10 ? var_6 : var_0)));
                arr_12 [i_1] [i_2] [i_3] [i_2] = (((var_4 ? (arr_8 [i_1] [7]) : (arr_10 [i_1] [i_2] [i_3] [i_2]))));

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_19 = ((var_1 ? ((var_8 ? var_9 : (arr_15 [i_2] [i_4]))) : (((var_12 ? var_5 : var_3)))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, ((((var_9 ? var_12 : (arr_9 [16] [16] [16])))))));
                        var_21 *= (arr_6 [i_1] [i_1]);
                        var_22 = var_6;
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_20 [9] [i_3] [19] [i_4] [i_4] [19] [i_6] = var_3;
                        var_23 = var_10;
                        var_24 = var_10;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_25 = ((var_15 || (((var_0 ? var_11 : var_2)))));
                        var_26 = (max(var_26, ((((var_3 ^ var_12) ? (((!(arr_16 [i_2])))) : (var_15 && var_12))))));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_26 [i_3] = (((arr_11 [i_2]) - ((((!(arr_18 [i_8] [i_4] [i_1] [i_2] [i_1])))))));
                        arr_27 [i_1] [i_1] [i_2] [i_1] [i_3] [i_1] = ((var_13 ? (arr_17 [7] [i_2] [i_2] [i_3] [i_8] [i_2] [12]) : (arr_7 [i_3 + 2])));
                        var_27 += var_3;
                    }
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_28 = (min(var_28, var_7));
                    var_29 = (min(var_29, ((((((var_1 << (var_3 - 32673)))) ? var_4 : var_2)))));

                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        var_30 -= ((((((arr_16 [9]) ? var_10 : var_8))) ? (arr_15 [i_2] [i_9]) : var_9));
                        var_31 = ((((((arr_28 [16] [i_3] [i_3] [4]) & var_12))) ? ((var_14 ? (arr_21 [i_10 + 3] [i_10 - 3] [i_1] [13] [i_2] [i_1] [i_1]) : var_7)) : ((((!(arr_15 [18] [i_2])))))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_36 [i_1] [i_2] [i_3] [i_9] [15] = ((var_15 ? (((var_9 || (arr_24 [i_1] [6] [i_1] [i_1] [i_1])))) : (var_6 <= var_11)));
                        arr_37 [17] [i_3] [17] [4] [i_11] [i_2] = var_2;
                        arr_38 [i_3] [i_3] = ((arr_24 [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1] [i_3 + 1]) ? (!var_5) : var_15);
                        var_32 = var_9;
                        var_33 += (((arr_14 [i_1] [i_2] [i_1] [i_2]) ? var_5 : var_9));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_42 [8] [i_3] [i_3] [i_3] [i_1] = (((arr_41 [i_1]) ? (((arr_7 [i_9]) ? (arr_30 [i_12] [i_1] [i_1] [i_3]) : (arr_39 [i_1] [i_2] [i_3 + 3] [17]))) : (((var_9 ? (arr_18 [i_2] [i_9] [15] [i_2] [i_1]) : (arr_17 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] [i_1]))))));
                        arr_43 [i_3] [8] [i_12] [16] = ((var_1 ? var_3 : (arr_6 [i_3 + 3] [i_3])));
                        var_34 ^= (((var_13 ? var_6 : (arr_25 [i_1] [i_9] [i_9] [14] [i_12]))));
                    }
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        arr_48 [4] [i_2] [i_2] [i_2] [i_3] = (arr_28 [4] [i_3] [i_3] [i_1]);
                        arr_49 [i_3] = var_4;
                        var_35 ^= ((((!(arr_28 [i_13] [i_1] [i_1] [i_1]))) ? (!var_8) : ((var_5 ? var_8 : var_14))));
                    }
                    var_36 = (arr_21 [i_9] [10] [i_3 - 3] [i_1] [i_1] [i_1] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_37 *= ((((((arr_54 [i_3 - 2] [i_15]) ? var_1 : var_15))) ? var_12 : (((arr_55 [i_2]) ? var_13 : (arr_24 [4] [i_2] [i_1] [i_2] [i_1])))));
                            arr_57 [i_1] [i_2] [6] [i_3] [i_1] [i_3] [i_3] = (var_1 ? ((var_14 * (arr_16 [i_15]))) : (var_8 ^ var_9));
                            arr_58 [i_15] [i_15] [i_3] [i_3 - 1] [i_3] [1] [i_1] = var_8;
                            var_38 = (min(var_38, var_10));
                            arr_59 [i_1] [6] [i_3] [14] [i_2] [i_1] &= (((arr_18 [i_1] [i_2] [i_3 + 2] [i_14 + 2] [i_1]) ? var_15 : (((arr_22 [i_15] [i_14] [17] [i_2] [3]) ? var_0 : var_7))));
                        }
                    }
                }
                var_39 = var_12;
            }
            for (int i_16 = 3; i_16 < 17;i_16 += 1) /* same iter space */
            {
                arr_62 [i_16] = var_3;
                arr_63 [3] [3] [i_16] = (arr_52 [i_16] [i_2] [i_16]);
                var_40 = ((var_13 ? var_7 : var_15));
                var_41 = (min(var_41, (arr_54 [i_1] [i_2])));
                arr_64 [i_16] = var_11;
            }
            for (int i_17 = 3; i_17 < 17;i_17 += 1) /* same iter space */
            {
                var_42 = (var_3 - var_12);
                var_43 = ((((((arr_15 [i_1] [i_2]) ? (arr_46 [i_17] [8]) : var_1))) ? (var_9 - var_13) : (((var_3 ? (arr_65 [9] [i_2] [14] [i_1]) : var_12)))));
                var_44 = ((((((arr_67 [1] [i_2] [i_1]) && (arr_65 [17] [i_2] [i_17 - 1] [17])))) & (((!(arr_32 [i_1] [i_1] [i_1] [i_1]))))));
                var_45 = ((!(((var_12 ? var_15 : (arr_17 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] [2]))))));
                arr_69 [i_1] [8] = var_8;
            }
            arr_70 [i_2] [i_1] = var_4;
            var_46 = (arr_45 [i_1] [i_1] [i_1] [4] [i_1] [0] [i_1]);
        }
        var_47 = (min(var_47, ((((var_15 ? var_8 : var_1))))));
        arr_71 [i_1] = var_13;
        var_48 -= (arr_47 [i_1] [i_1] [0]);
    }
    var_49 = ((var_10 ? ((var_11 ? var_10 : var_14)) : (min((((var_5 ? var_11 : var_5))), var_1))));
    var_50 = ((((min((((var_3 ? var_2 : var_11))), ((var_4 ? var_7 : var_6))))) ? (((var_9 ? var_7 : var_1))) : ((max(((var_14 << (var_11 - 3560))), ((var_2 ? var_9 : var_11)))))));
    #pragma endscop
}
