/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((max((arr_0 [i_0 + 1]), ((var_6 ? (arr_1 [i_0 + 1]) : (arr_2 [i_0]))))));
        arr_4 [i_0] = (((((var_10 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])))) ? (arr_2 [i_0 + 1]) : (max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1])))));
        arr_5 [i_0] = (min(((1 >> (((min((arr_1 [i_0]), var_1)) + 1555375003)))), 218));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_13 = ((var_5 <= (((arr_0 [i_1]) ? -1188114361 : (min(3119630475, 17179869183))))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_14 &= ((-var_9 - ((var_10 ? var_9 : (arr_9 [i_2])))));
            arr_12 [i_1] [i_1] [i_2] = (((arr_11 [i_2 - 1] [i_2 - 2] [i_2 + 1]) ^ ((1 ? (arr_1 [i_2]) : var_0))));
            var_15 = var_0;
            var_16 = ((arr_11 [i_1] [i_2 - 2] [i_2 - 2]) % -910634920);

            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                var_17 = ((1675495003 ? var_1 : (arr_14 [i_2 - 1] [i_3 - 2] [i_3 + 1])));
                var_18 -= var_0;
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_19 = (((arr_11 [i_1] [i_1] [i_4]) ? var_11 : (arr_14 [i_4] [i_1] [15])));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_20 = (max(var_20, (((((((arr_8 [i_1] [i_4]) ? var_5 : (arr_10 [1])))) ? ((((arr_8 [i_1] [i_1]) ? 30 : var_11))) : var_3)))));
                var_21 *= (arr_13 [i_1] [i_1]);
            }
        }
        var_22 -= (((arr_16 [i_1] [i_1] [i_1]) ? (arr_13 [i_1] [i_1]) : (max((arr_16 [i_1] [i_1] [i_1]), (arr_13 [i_1] [i_1])))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_23 [4] = (arr_15 [i_6] [i_6]);

        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            var_23 = ((((((arr_7 [i_6] [i_7 - 1]) ? var_0 : 4294967281))) ? (((arr_15 [i_7 + 3] [i_7]) ? (arr_15 [i_7 + 3] [i_6]) : (arr_15 [i_7 - 1] [2]))) : (((!-1) / (arr_13 [i_6] [i_6])))));
            var_24 = (min(var_4, (arr_2 [i_7 + 2])));
        }

        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            var_25 = (max((max((arr_8 [i_8 - 1] [i_8 - 1]), (arr_8 [i_8 - 1] [i_8 + 1]))), (((var_4 ? (arr_6 [i_8 - 2]) : var_9)))));
            arr_29 [i_6] = ((arr_25 [15] [i_6] [i_8]) ? (arr_7 [i_8 - 1] [i_8 - 1]) : var_3);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_26 = ((((arr_17 [i_6] [i_9]) ? var_8 : var_12)));
            var_27 = (min(var_27, (arr_30 [i_6])));
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                arr_38 [i_10] [i_10] = ((((max(var_12, (((arr_17 [15] [i_10 + 1]) ? 16337196004217180840 : (arr_0 [i_6])))))) ? ((((max(var_2, 4))) ? (((arr_35 [i_10]) / (arr_36 [i_10]))) : (((-32454 ? var_9 : var_9))))) : var_12));
                var_28 = ((((((var_4 ? (arr_19 [i_6] [i_6] [i_6] [3]) : var_3))) ? (max((arr_11 [i_6] [i_10] [i_11]), 1983334560668973551)) : (((var_6 ^ (arr_27 [i_6])))))));
            }
            arr_39 [i_10] [i_10] = (((arr_34 [i_10 - 1]) | ((6722202573061144465 ? (((var_0 ? (arr_0 [i_6]) : 1))) : ((var_5 ? -1188114384 : var_5))))));

            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                var_29 = (max(var_29, ((-((((arr_21 [i_6] [i_6]) && ((max(var_2, (arr_31 [1])))))))))));
                var_30 = (min(((((((var_2 ? var_10 : 789924107))) >= (min(var_3, (arr_19 [i_6] [7] [i_12] [i_12 - 1])))))), (max((((arr_20 [2] [i_10 + 1]) ? var_8 : (arr_19 [i_6] [i_6] [i_6] [i_12]))), (((arr_31 [i_12]) % var_0))))));
            }
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                arr_44 [i_6] [10] [1] |= (min((arr_34 [i_6]), var_4));
                var_31 |= (((((arr_33 [8] [i_10] [2]) > (arr_42 [i_10 - 1] [i_10 - 1]))) ? 28 : ((-(arr_13 [i_10 - 1] [i_10 - 1])))));
                var_32 = ((((((!(((132 ? var_3 : var_6))))))) != ((((var_0 ? var_10 : (arr_8 [1] [i_10]))) ^ (arr_13 [i_10 - 1] [i_10 - 1])))));

                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    var_33 = (min(567956268, (1820154894 == var_6)));

                    for (int i_15 = 1; i_15 < 15;i_15 += 1)
                    {
                        var_34 = (min(((var_7 ? (max((arr_35 [i_10]), (arr_7 [i_13] [i_13]))) : ((((arr_50 [i_10] [i_10] [i_10] [i_10] [10]) ? var_10 : var_10))))), (((((min(var_6, 1))) ? var_1 : (arr_18 [i_6] [i_10 + 1] [i_10 + 1]))))));
                        var_35 = (arr_36 [i_15 + 1]);
                    }
                }
            }
            var_36 = (min((((arr_35 [i_10]) ? 2553073138 : (arr_37 [i_6] [i_6] [1] [i_6]))), (((((max((arr_13 [i_6] [i_6]), (arr_1 [i_6])))) ? ((var_11 ? var_10 : (arr_40 [i_6] [14] [14]))) : (arr_13 [i_6] [i_6]))))));
            var_37 = (min((max((max(var_2, (arr_20 [14] [i_10]))), ((min(var_8, (arr_34 [i_10])))))), ((min(var_10, (arr_41 [i_6] [15]))))));
        }
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_38 = (arr_40 [i_17] [3] [i_6]);

                /* vectorizable */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    arr_60 [i_6] [i_18] = ((~(arr_59 [i_17] [i_17] [i_16])));
                    var_39 = 13;
                    var_40 ^= ((var_11 ? (arr_1 [i_16]) : var_10));
                }
            }
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                var_41 = (((max((max((arr_43 [i_16] [2] [i_19]), (arr_35 [i_19]))), (arr_1 [i_6])))) ? ((((((arr_2 [1]) == (arr_17 [i_6] [i_6]))) ? (arr_21 [i_16] [i_16]) : ((var_11 ? var_8 : -6))))) : (min((min(384584560, var_4)), (max((arr_20 [i_6] [i_6]), (arr_25 [i_6] [i_6] [3]))))));

                for (int i_20 = 2; i_20 < 15;i_20 += 1)
                {
                    var_42 = min((arr_62 [i_6] [11] [i_6] [14]), (arr_35 [i_16]));
                    var_43 = ((min(var_5, ((4116391708292094004 ? var_5 : (arr_52 [i_6]))))));
                    var_44 = ((+((((((arr_13 [i_6] [i_6]) ? var_6 : var_7))) ? (max(var_9, var_6)) : ((var_8 ? var_2 : var_12))))));
                    var_45 = ((max((arr_48 [i_20 + 1] [i_20] [i_20] [i_20] [i_20 - 2]), (arr_65 [i_20] [i_20 - 1] [i_20] [3] [i_20 + 1]))) >> (((var_9 >= (arr_48 [i_20] [i_20] [i_20] [i_20] [i_20 - 1])))));
                }
                /* vectorizable */
                for (int i_21 = 4; i_21 < 15;i_21 += 1)
                {
                    var_46 -= var_1;
                    var_47 = (arr_55 [i_21] [i_21 - 4] [i_21 - 3] [i_21 - 3]);
                    var_48 = (min(var_48, (arr_61 [5])));

                    for (int i_22 = 1; i_22 < 15;i_22 += 1)
                    {
                        arr_72 [i_6] [i_21] [i_19] [i_21] = (arr_1 [i_21 + 1]);
                        var_49 = ((var_9 > (arr_19 [i_22 - 1] [i_22 - 1] [i_22] [i_22])));
                    }
                }
                arr_73 [i_6] [i_16] [i_16] [i_19] = (max((((((var_6 ? (arr_27 [i_6]) : (arr_26 [i_6] [i_6]))) - (arr_2 [i_6])))), (arr_59 [i_19] [14] [i_6])));
                var_50 = (((!(arr_30 [i_6]))));
                var_51 = (arr_28 [i_6] [i_16]);
            }
            var_52 = (min(var_52, (((((((arr_24 [i_6] [6]) ? (arr_63 [i_6] [i_16] [12]) : (((var_6 || (arr_68 [i_6] [0] [0] [i_16] [1]))))))) ? (arr_40 [i_6] [i_6] [i_16]) : (arr_41 [i_6] [i_6]))))));
            var_53 = ((max(1, ((29 ? 1767260948 : 10307759971555971061)))));
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 16;i_23 += 1) /* same iter space */
    {
        arr_77 [i_23] = (((arr_63 [6] [i_23] [i_23]) ? (arr_58 [i_23] [i_23]) : var_11));
        arr_78 [i_23] [i_23] = (((-(arr_51 [i_23] [i_23] [i_23]))));
    }
    var_54 -= var_9;
    #pragma endscop
}
