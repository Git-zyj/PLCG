/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, var_0));
                    var_19 = (min(var_19, ((max((arr_5 [i_1] [i_1] [i_0]), (arr_0 [9]))))));
                    var_20 = (max(var_20, var_8));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_21 = (max(var_21, (arr_9 [i_0])));
                        var_22 = (max(var_22, (((~(min(var_11, -var_1)))))));
                        var_23 = (min(var_23, (max(var_16, (max((max(var_6, var_14)), (!var_16)))))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_24 = (min(var_24, (arr_4 [i_0] [i_0] [i_2 - 1])));
                        var_25 = (min(var_25, (((!(arr_2 [i_0] [i_1] [i_2 + 1]))))));
                        var_26 = (min(var_26, (arr_8 [i_2] [i_2] [i_2 + 1] [i_2])));
                        var_27 = (max(var_27, var_6));
                        var_28 = (min(var_28, ((max((arr_2 [i_1] [i_1] [i_1]), ((min((min((arr_6 [i_0] [i_0] [i_2 - 1] [i_4]), var_3)), ((max(var_5, var_16)))))))))));
                    }
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        var_29 = (max(var_29, var_0));
                        var_30 = (max(var_30, var_0));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_31 = (max(var_31, (~var_0)));
                        var_32 = (min(var_32, (!var_7)));
                        var_33 = (max(var_33, var_17));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_34 = (max(var_34, (arr_4 [i_0] [i_0] [i_2])));
                            var_35 = (min(var_35, var_2));
                        }
                        var_36 = (min(var_36, (((!(((~((~(arr_16 [10] [10] [10] [i_0] [i_0] [i_0])))))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                {
                    var_37 = (max(var_37, ((max(var_8, (min((min(var_13, var_17)), (max(89, 29835)))))))));

                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 21;i_12 += 1)
                        {
                            var_38 = (min(var_38, (!var_6)));
                            var_39 = (max(var_39, (arr_24 [i_10])));
                            var_40 = (min(var_40, var_6));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_41 = (min(var_41, (!var_1)));
                            var_42 = (min(var_42, ((max((!var_11), var_11)))));
                        }
                        var_43 = (min(var_43, (arr_33 [i_8] [i_9] [i_9] [i_11])));
                        var_44 = (min(var_44, ((max(((~((~(arr_25 [1] [i_9] [i_9]))))), ((max((max((arr_20 [i_8]), (arr_24 [i_8]))), (arr_22 [i_9] [i_9])))))))));
                    }
                    for (int i_14 = 1; i_14 < 19;i_14 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            var_45 = (min(var_45, (!var_8)));
                            var_46 = (min(var_46, (~var_8)));
                            var_47 = (max(var_47, (!var_9)));
                        }
                        var_48 = (min(var_48, (((!((min(var_6, (arr_41 [i_9])))))))));
                        var_49 = (min(var_49, var_12));
                        var_50 = (max(var_50, (arr_22 [i_9] [i_10])));
                    }
                    for (int i_16 = 1; i_16 < 19;i_16 += 1) /* same iter space */
                    {
                        var_51 = (min(var_51, (((+(max(-var_9, ((min((arr_24 [i_8]), var_9))))))))));
                        var_52 = (max(var_52, (((!((!((max(var_4, var_9))))))))));
                        var_53 = (min(var_53, (((~(min(var_13, ((~(arr_27 [i_8]))))))))));
                    }
                    var_54 = (min(var_54, ((max((max((max(var_13, var_1)), (arr_41 [i_8]))), ((max((((!(arr_35 [i_9] [i_9] [18] [i_9] [i_10 - 1])))), (arr_24 [i_8])))))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_55 = (min(var_55, var_7));
                                var_56 = (min(var_56, var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
