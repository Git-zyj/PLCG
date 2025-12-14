/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = var_16;
                    var_22 += min((arr_2 [i_0]), (((arr_1 [i_2] [3]) ? var_18 : ((min(var_2, var_12))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_23 |= 9;
            arr_9 [i_3] = (((~1) ? ((max(1, (arr_7 [i_0] [i_0])))) : 65535));
        }
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_24 = ((126 ? var_14 : (arr_13 [i_0] [i_4] [i_0] [i_0])));
                arr_14 [i_0] [i_0] [i_0] [i_5] = (arr_2 [i_5]);
            }
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] [0] = (arr_1 [i_4 - 1] [i_4 - 3]);
                var_25 = var_14;
                var_26 -= ((!(arr_7 [i_0] [i_4 + 1])));
            }

            for (int i_7 = 4; i_7 < 9;i_7 += 1)
            {
                arr_21 [i_0] [i_0] [i_0] [1] = (arr_13 [i_7 + 2] [i_4] [i_4 + 1] [i_4]);
                var_27 = (min((arr_5 [i_4] [i_4] [i_4]), ((var_0 ? (arr_5 [i_4 - 3] [i_4 - 3] [i_7 - 3]) : (arr_5 [i_4 - 3] [i_4 - 2] [i_7 + 2])))));
                var_28 -= (arr_15 [4] [i_0] [i_0] [i_0]);
                var_29 = (((arr_2 [i_7 - 2]) ? ((((min((arr_11 [1] [10]), var_7))) ? 15 : ((max(1, var_13))))) : (((arr_17 [i_4 - 2] [i_7 - 1] [i_7 + 1] [i_7 - 4]) ? var_0 : (arr_17 [i_4 + 1] [i_7 - 2] [i_7] [i_7 - 2])))));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_30 = (arr_16 [i_0]);
                var_31 -= var_4;
                var_32 = (arr_16 [i_0]);
            }
        }

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 8;i_12 += 1)
                    {
                        {
                            var_33 -= ((~((-((var_5 ? (arr_32 [i_0] [i_0] [i_0] [3] [i_0]) : var_4))))));
                            var_34 += var_2;
                            var_35 = 1;
                        }
                    }
                }
            }
            var_36 -= ((((((arr_12 [8] [i_9]) / (arr_17 [2] [2] [4] [i_9])))) ? (~6674018581806144779) : ((9111 ? 16 : 7068977937408854733))));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    var_37 = (max(var_37, (((~(arr_36 [i_14 - 1] [i_13] [15]))))));
                    var_38 = var_5;
                }
            }
        }
        var_39 += -7068977937408854734;
        arr_43 [1] [i_13] = ((255 ? (((arr_37 [2] [1]) ? var_3 : (arr_36 [i_13] [i_13] [7]))) : (((-(arr_35 [i_13]))))));
    }
    for (int i_16 = 2; i_16 < 20;i_16 += 1)
    {

        for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
        {

            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                var_40 = (((arr_51 [i_18] [i_16 + 2] [i_16] [i_16 + 2]) ? 117 : (arr_51 [i_18] [i_18] [i_18] [i_18])));
                arr_54 [7] [i_18] [i_18] [21] = (min((max((arr_44 [i_16 - 2]), (arr_44 [i_16 + 1]))), (max(var_11, (arr_48 [i_16] [i_16 - 2])))));
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 20;i_20 += 1)
                    {
                        {
                            var_41 = var_18;
                            var_42 = ((~(~var_10)));
                            var_43 += (min(((min((min(-69, (arr_48 [i_16] [4]))), var_18))), (min(((34 ? -7068977937408854734 : 1)), (((-(arr_51 [i_20] [i_20] [i_20] [i_20]))))))));
                            var_44 = ((var_18 ? (((max((arr_55 [i_16] [i_20] [i_18] [i_19] [i_20 - 2] [9]), (arr_55 [i_16] [i_17] [i_16] [i_19] [i_20 + 1] [i_19]))))) : ((-((var_11 << (arr_52 [i_19] [i_20])))))));
                        }
                    }
                }
                arr_59 [i_18] [5] [i_18] = (248 * 30);
            }
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                arr_63 [19] [i_16 + 1] [11] [i_21] = (max(50, 246));
                var_45 = (min(var_45, ((max((((!(min(var_4, (arr_52 [i_17] [i_17])))))), (((((var_15 ? (arr_48 [i_17] [i_21]) : (arr_52 [i_17] [17])))) ? (((arr_44 [i_17]) ? var_0 : var_19)) : var_12)))))));
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 19;i_23 += 1)
                    {
                        {
                            arr_70 [i_16] [i_16] [i_16] [i_22] [i_22] [21] [i_16] = var_19;
                            var_46 = (((!-1) ? 262143 : ((((((arr_65 [i_16 - 2] [9] [i_16] [i_22] [i_23]) ? (arr_46 [i_16]) : (arr_56 [i_23])))) ? var_6 : (~var_5)))));
                        }
                    }
                }
            }
            for (int i_24 = 0; i_24 < 22;i_24 += 1)
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 22;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 22;i_26 += 1)
                    {
                        {
                            var_47 = (max(((!(((var_12 ? var_3 : var_13))))), var_13));
                            var_48 = (min(var_48, ((((((~((var_14 ? (arr_66 [i_16] [i_16] [i_16] [i_16] [i_26] [i_16 - 2]) : (arr_46 [1])))))) ? (((arr_48 [i_16 - 1] [i_16 + 1]) ? var_12 : (arr_49 [i_16] [i_16 - 2]))) : (arr_64 [i_17] [i_25]))))));
                            var_49 = (min(var_49, ((1 ? 1 : 252))));
                        }
                    }
                }
                var_50 |= ((!(arr_75 [1] [i_17])));
            }
            arr_80 [i_16] [2] [i_16] = var_16;
            var_51 = (min((((arr_55 [i_17] [i_16 - 2] [i_16] [i_16] [1] [i_16 - 2]) ? (~var_4) : (arr_74 [i_16 - 2] [i_17] [9]))), var_12));
            var_52 = ((-(((arr_45 [i_17]) ? var_2 : (arr_53 [1] [1])))));
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 22;i_27 += 1) /* same iter space */
        {
            var_53 += (arr_75 [i_27] [i_27]);
            var_54 -= (arr_52 [i_16] [i_16]);
        }
        var_55 = (arr_74 [11] [i_16] [i_16]);
        var_56 += var_17;
        var_57 = max((((arr_56 [i_16 + 1]) ? var_10 : var_17)), ((((arr_84 [i_16 + 2]) ? (arr_56 [i_16 - 1]) : (arr_56 [i_16 - 1])))));
    }
    #pragma endscop
}
