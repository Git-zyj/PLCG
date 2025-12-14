/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max((((var_11 * (!var_3)))), (max((max(var_14, var_6)), var_6))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((((var_7 ? (arr_2 [i_0]) : var_13))) / (arr_1 [i_0])));
        var_17 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_18 = ((max((((arr_0 [i_1] [i_1 + 1]) - var_10)), (arr_4 [15]))) > (arr_0 [i_1 + 1] [i_1 - 1]));
        var_19 = max((max(var_8, (arr_0 [i_1 - 1] [i_1 - 1]))), ((((4194993105333274327 ? (arr_1 [i_1]) : (arr_4 [i_1 - 1]))) / var_3)));
        var_20 = 4194993105333274323;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 = ((152 + (arr_1 [i_2])));
            var_22 = ((((arr_0 [i_1] [i_1]) ? ((var_5 * (arr_5 [i_2]))) : (((arr_8 [i_1]) / 14)))) > (((((arr_5 [i_1 + 1]) != 0)))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_23 ^= (min((((arr_2 [i_3]) / (arr_2 [i_3]))), (((arr_2 [i_3]) ? (arr_2 [i_3]) : var_7))));
            var_24 = arr_0 [i_1 + 1] [i_1 + 1];
        }
        var_25 = 10950;
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_26 = (max(var_26, ((((((min((arr_4 [i_4]), 2491)))) ? (max(-1, (~var_8))) : var_10)))));
        var_27 = (((((max(var_14, (arr_6 [i_4] [i_4 + 2]))) < (arr_11 [i_4 + 2] [i_4]))) ? (arr_4 [i_4]) : (arr_5 [i_4 + 1])));

        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_28 = min(((((((arr_11 [i_4] [i_4]) * 54578))) % var_1)), ((((4355405308861157406 ? 7 : var_14)) & (((var_10 | (arr_6 [i_4] [i_5])))))));
            var_29 = (min(var_29, var_10));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_30 = (((arr_21 [i_4] [i_6 - 1] [i_4]) ? 54578 : (arr_21 [i_4] [i_6 + 2] [i_4])));
            var_31 = (((arr_11 [i_4] [i_4]) ? (arr_11 [i_4] [i_4]) : 542904047520999243));
            var_32 = (arr_3 [i_4]);
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            var_33 = (max(((((((arr_18 [i_4 - 1] [i_4 - 1]) ? (arr_4 [13]) : -5445192370278791308))) ? ((var_8 ? (arr_14 [2]) : var_14)) : (min(3825618455, var_13)))), (((!((((arr_12 [i_4] [i_4]) ? var_14 : var_5))))))));
            var_34 = (max(var_6, var_13));
            var_35 = (max(var_35, ((((arr_11 [i_7] [i_7]) ? (min(((min(var_8, 54578))), ((var_5 - (arr_5 [i_7]))))) : ((+((3461155227 >> (((arr_13 [i_4] [9]) - 6497807498818011277)))))))))));
            var_36 = 15;

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_37 = var_13;
                    var_38 = (max(var_38, var_10));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_39 = (((max((arr_25 [i_8] [i_8]), (((~(arr_11 [i_4] [i_4])))))) >> (((var_13 / var_2) + 29))));
                    var_40 = (max(var_2, (arr_27 [i_4] [0] [4] [i_10] [i_4])));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_41 = ((-var_1 + (arr_20 [7] [i_7])));
                    var_42 = (arr_12 [i_8] [i_11]);
                    var_43 = (arr_2 [i_4]);

                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        var_44 = var_1;
                        var_45 = (((arr_28 [i_4 + 3] [i_4] [i_12 - 2] [i_12 + 3] [i_4] [i_12]) + (arr_12 [i_12 - 1] [i_4 + 3])));
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_46 = (min(var_46, var_12));
                        var_47 = (min(var_47, (((((var_2 ? var_1 : (arr_16 [i_13] [i_7] [i_4 + 1]))) / (arr_15 [i_11]))))));
                        var_48 |= ((-(((arr_1 [i_7]) ? var_10 : var_13))));
                    }
                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        var_49 = (min(var_49, (!-833812074)));
                        var_50 = (arr_9 [i_4] [i_4 - 1]);
                        var_51 = (((arr_38 [i_4 + 3] [10] [i_4 + 2] [i_7] [i_14 - 3] [i_14 - 2] [i_14]) + (arr_33 [i_14 + 2] [13] [i_4] [9] [i_4])));
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_52 = var_0;
                        var_53 = (((((!(arr_33 [i_4] [i_4] [i_4] [i_4] [i_4])))) >> var_11));
                    }
                    var_54 += var_10;
                }
                var_55 = (max(var_55, (((((max(0, (arr_36 [i_4] [i_7] [i_7])))) ? ((((max(var_1, var_12))) ? ((((arr_27 [i_7] [i_7] [10] [8] [i_7]) && var_3))) : (arr_12 [i_4 - 1] [i_4 + 3]))) : 0)))));
            }
            for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
            {
                var_56 = var_7;
                var_57 = (max(var_57, (((+((var_14 + (((arr_9 [i_7] [i_16]) ? 2402645368 : (arr_1 [i_16]))))))))));
            }
            for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
            {
                var_58 = (max(var_58, ((max(((min((!var_0), ((2147483647 ? var_13 : var_8))))), ((((max(4294967280, var_5))) ? (!var_0) : ((var_1 ? var_5 : var_8)))))))));
                var_59 = ((var_12 ? var_9 : (((var_0 ? (arr_22 [i_4]) : (arr_24 [i_4 + 2] [i_4] [i_4 + 2] [i_4]))))));
                var_60 = ((max((arr_44 [i_4 - 1] [i_4 + 3] [i_4] [i_17]), 0)));
                var_61 = ((!((min((arr_39 [i_17] [i_17] [i_7] [i_7] [4]), var_3)))));
                var_62 = var_7;
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
        {
            var_63 = arr_34 [i_4] [i_4] [i_4 - 1] [7] [7];

            for (int i_19 = 1; i_19 < 11;i_19 += 1)
            {
                var_64 = (-(((arr_36 [i_4] [i_18] [i_4]) + 1)));

                for (int i_20 = 2; i_20 < 13;i_20 += 1) /* same iter space */
                {

                    for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
                    {
                        var_65 = var_1;
                        var_66 = (((arr_56 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_19 + 3]) ? (~var_5) : var_4));
                        var_67 = (max(var_67, (~var_1)));
                        var_68 = 3816692954643527359;
                        var_69 = ((10952 ? (arr_2 [i_4]) : var_1));
                    }
                    for (int i_22 = 0; i_22 < 14;i_22 += 1) /* same iter space */
                    {
                        var_70 = (((arr_50 [i_4 - 1] [i_4 + 3] [i_4]) * 0));
                        var_71 = (arr_16 [i_22] [i_4] [i_4]);
                    }
                    var_72 = (max(var_72, ((((arr_34 [i_18] [i_19 + 2] [i_20] [i_20 - 2] [4]) ? var_10 : (!var_0))))));
                    var_73 = (((arr_17 [i_4] [i_4]) ? 1389510257 : (arr_17 [i_4] [i_18])));
                    var_74 = (((((var_1 ? var_2 : (arr_28 [i_20] [i_4] [11] [i_18] [i_4] [i_4])))) ? var_4 : var_14));
                }
                for (int i_23 = 2; i_23 < 13;i_23 += 1) /* same iter space */
                {
                    var_75 = 4294967288;
                    var_76 = (arr_47 [i_19 + 1] [i_19 + 2] [i_23 - 2] [i_19 + 1]);
                    var_77 = (-((((arr_63 [i_4] [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 2]) != var_7))));
                    var_78 = var_13;
                }
                var_79 = var_6;
            }
        }
        var_80 = (min(var_80, var_14));
    }
    #pragma endscop
}
