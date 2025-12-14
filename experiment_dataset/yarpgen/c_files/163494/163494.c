/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_1 [i_0] [i_0])));
        var_13 = var_2;

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] [i_1] |= (arr_1 [i_0 + 3] [i_1 + 1]);
            var_14 = (min(var_14, var_7));
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_15 = (max(var_15, (arr_6 [i_0 + 2])));
            var_16 = (-(arr_2 [i_2] [i_2 - 1]));
        }
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_17 = (max((max((arr_9 [i_3 - 1]), (arr_9 [i_3 - 1]))), (arr_9 [i_3 - 1])));
        var_18 = (arr_8 [i_3] [i_3]);
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (arr_13 [i_4]);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 = (max(var_19, (arr_15 [i_4] [12] [i_5])));
            var_20 += (~-var_1);
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_22 [i_6] [i_4] |= (((~(arr_9 [i_4 - 1]))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_29 [i_4] [i_6] [i_7] [i_8] [i_9] = (arr_27 [i_4] [i_7] [i_8] [i_9]);
                            var_21 = (min(var_21, (min(((~((-(arr_17 [i_4] [i_8] [i_9]))))), (max((arr_13 [i_4]), ((~(arr_8 [i_4] [i_6])))))))));
                            var_22 = (max(var_22, ((min((((-(min((arr_19 [i_4]), var_5))))), var_9)))));
                            var_23 = (min(var_23, ((min(2077146397271712211, (((~(arr_7 [i_4 - 1])))))))));
                            arr_30 [i_9] [i_8] [i_7] [i_6] [i_4] = ((max(((max((arr_27 [i_4] [i_6] [i_8] [i_9]), (arr_13 [i_4])))), (arr_13 [i_4]))));
                        }
                    }
                }
            }
            arr_31 [i_6] [i_4] [i_4] &= (min((((-(arr_21 [i_4])))), (arr_25 [i_4 + 2] [i_4] [i_4 + 3] [i_4 - 1])));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_24 = (min((arr_16 [i_4 - 1]), (min((((!(-127 - 1)))), (arr_21 [i_10])))));
            var_25 = (max(var_25, ((min((arr_18 [12]), ((~(arr_18 [2]))))))));
            var_26 = (max((~var_7), (arr_32 [i_4 - 1])));
            var_27 = (arr_12 [i_4] [i_10]);
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 14;i_12 += 1)
                {
                    {
                        var_28 = (+((+(max((arr_7 [i_4]), var_6)))));
                        var_29 += (arr_15 [i_4] [1] [i_11]);
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_43 [16] &= (arr_25 [i_13] [i_4 - 1] [i_4] [i_4 - 1]);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            var_30 &= (min((arr_7 [i_16]), ((min((arr_12 [i_4 + 1] [i_4]), (arr_12 [i_4 + 1] [i_4]))))));
                            arr_52 [i_4] [i_13] [i_15] [i_16] = min(var_4, (min(16369597676437839402, 16369597676437839404)));
                        }
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            var_31 += ((!((!((max(var_3, (arr_45 [i_4] [i_14] [i_15] [i_17]))))))));
                            arr_56 [i_13] [i_17] = var_6;
                        }
                        var_32 = (arr_9 [i_4]);

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            var_33 = var_7;
                            var_34 = (arr_47 [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 3]);
                            var_35 = (max(var_35, (((~(arr_39 [i_18]))))));
                        }
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            var_36 = var_5;
                            var_37 = (max(var_37, (arr_47 [i_4] [i_13] [i_15] [i_19])));
                        }
                        var_38 = (max(var_38, var_5));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 15;i_21 += 1)
                {
                    {
                        var_39 = var_3;
                        arr_67 [i_13] [i_20] [i_13] [i_13] = (min(((min(var_3, ((min((arr_50 [i_4] [i_13] [i_21] [i_21] [i_13]), (arr_63 [i_21]))))))), ((~(min((arr_48 [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_19 [i_13])))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 13;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 16;i_24 += 1)
                    {
                        {
                            var_40 = (max((arr_44 [i_4] [i_4]), (min((arr_72 [i_4 - 1] [i_23 + 2] [i_23] [i_24 - 2]), var_8))));
                            var_41 = (min(var_41, (arr_63 [i_4])));
                        }
                    }
                }
            }
            arr_77 [i_13] [i_13] = (arr_38 [i_13] [i_13] [i_13] [i_4] [i_4]);
        }
        var_42 = (max(var_42, -170965595));
    }
    var_43 |= var_2;
    #pragma endscop
}
