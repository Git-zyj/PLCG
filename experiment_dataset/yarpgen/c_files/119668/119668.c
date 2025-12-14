/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_12 *= ((~(max(-6975257752176560289, 2040))));
        arr_3 [i_0] = ((22195 << ((((~(arr_0 [i_0]))) - 1737926086))));
        var_13 = (min(var_13, (((((min((arr_1 [16]), ((min(var_6, var_1)))))) ? (arr_2 [14] [i_0]) : var_0)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = (max(var_14, ((((arr_2 [18] [i_1]) | var_6)))));
            var_15 = (!63481);
        }
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_16 &= (min(((-(arr_8 [i_2 + 1] [i_2]))), ((min(var_7, var_6)))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_17 = 49021;
                    arr_15 [i_0] [i_2 - 1] [i_2] [i_2 + 1] [i_2] [2] = (((min(var_4, var_8))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_18 = (arr_2 [i_0] [i_0]);
                        arr_22 [i_0] [i_2] [i_3] [i_2] [i_0] [i_0] = (!var_3);
                    }
                    var_19 = (max(var_19, (arr_20 [i_5] [i_3] [i_2] [i_0] [22])));
                    var_20 = 1369876966521925779;
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_21 = var_7;
                    arr_26 [i_0] [i_2 - 1] [i_3] [i_7] = (max(var_1, var_1));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_22 = var_10;
                    var_23 = (min(var_8, (((arr_7 [i_2] [i_2] [i_8]) ? var_0 : -120))));
                    var_24 = (max(var_24, (2030531791 & 2040)));
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_25 = ((var_8 / (max(var_8, (arr_16 [i_0] [i_2 + 1] [i_9 - 3] [i_2])))));
                            arr_37 [13] [i_2 + 1] [i_10] [i_9] [i_10] [i_0] [i_9] = 2040;
                            var_26 = (min(var_26, var_8));
                            var_27 = (arr_6 [i_0]);
                            var_28 = (min(var_28, ((max((((!(arr_7 [i_3] [i_9] [i_10])))), (var_0 / 63496))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_29 = (arr_5 [i_2 - 1] [i_0]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_30 = ((var_3 + (arr_27 [i_0] [i_2] [i_13])));
                            arr_46 [i_0] [i_2] = (arr_14 [i_2] [i_2] [i_2 - 1] [i_12] [i_12]);
                        }
                    }
                }
                var_31 -= (((arr_20 [i_0] [i_2] [i_11] [i_0] [i_2 - 1]) ? var_10 : (((var_5 ? var_6 : var_2)))));
                var_32 = (((!203) ? var_8 : (((arr_34 [i_2] [i_2] [i_11]) ? -4223 : 1369876966521925794))));
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_33 = (-6476585219449307142 ^ 17);
            var_34 = ((var_10 ? (arr_19 [i_0]) : var_8));
            var_35 = ((arr_11 [i_14] [i_14] [i_14] [18]) - (32 / 82));
            var_36 = (max(var_36, (arr_21 [i_0] [10])));
        }
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
    {
        var_37 = 7273;

        for (int i_16 = 1; i_16 < 23;i_16 += 1)
        {
            var_38 *= (((((((arr_29 [i_15] [i_15] [i_15] [i_15]) & var_10)) ^ var_10)) & (var_5 ^ 0)));
            var_39 = (!48);
            arr_56 [i_15] [i_16] = (((arr_9 [1] [i_16 + 2]) ? var_2 : ((((((arr_49 [0]) ? (arr_19 [i_16]) : var_0))) ? ((543402027 ? -27109 : -6476585219449307142)) : var_2))));
        }
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            var_40 ^= var_5;
            var_41 = ((-6476585219449307142 >= ((((arr_23 [i_15] [18] [i_17] [i_17]) ? (var_2 >= var_2) : (~var_2))))));
        }
        arr_61 [i_15] = (min(-271713184, ((-12829 ? (783109456 % 17377913950192365713) : (!2852)))));
        var_42 = 1369876966521925791;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
    {
        arr_65 [i_18] [i_18] = ((!(var_2 == var_1)));
        arr_66 [i_18] = -759254828;
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 22;i_21 += 1)
                {
                    {
                        arr_76 [1] [i_18] [i_19] [i_21 - 3] = (arr_67 [i_18]);
                        arr_77 [i_19] [11] = ((var_4 ? (arr_73 [i_19] [i_20 - 1] [i_20 + 2] [i_21] [i_21 - 2] [i_21 + 1]) : (2857 ^ var_1)));
                        var_43 = (((((~(arr_14 [i_18] [i_19] [i_19] [i_20] [i_21])))) ? var_8 : (((arr_34 [i_18] [i_20] [i_21 + 2]) ? (arr_44 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_42 [i_19] [i_19] [i_20] [i_21])))));
                    }
                }
            }
        }
        var_44 *= (((arr_42 [0] [i_18] [i_18] [0]) ? (arr_42 [4] [i_18] [i_18] [4]) : (arr_42 [24] [i_18] [i_18] [i_18])));
        var_45 = var_5;
    }
    for (int i_22 = 0; i_22 < 25;i_22 += 1) /* same iter space */
    {
        var_46 ^= ((+(max((arr_38 [i_22] [14] [i_22] [i_22]), ((63481 ? var_7 : var_4))))));
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 25;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 24;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    {
                        var_47 = (-249182151 <= 1310869045);

                        for (int i_26 = 0; i_26 < 25;i_26 += 1)
                        {
                            var_48 += (((~var_0) & var_3));
                            arr_91 [i_22] [i_25] [18] [i_23] [i_22] = var_0;
                            var_49 = (min(var_49, var_3));
                        }
                        arr_92 [i_22] = ((var_3 ? (((((arr_84 [i_22] [i_24]) + (arr_43 [i_22] [i_23] [i_22] [i_25]))) - ((max(1614741261, -2847))))) : -1));
                        var_50 = (max(var_50, (((!(!24038))))));
                    }
                }
            }
        }
    }
    var_51 *= var_7;
    var_52 = (!var_6);
    #pragma endscop
}
