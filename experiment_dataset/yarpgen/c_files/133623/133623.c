/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_0, var_12));
    var_20 = (+-11006);

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = ((var_0 % ((min((((~(arr_7 [i_0] [1] [i_2])))), 227)))));
                    arr_8 [i_0] = ((!((var_5 != (arr_1 [i_0])))));
                    var_22 = (((min((28 | 1), ((min(var_9, (arr_7 [i_0] [i_0] [i_2 - 1])))))) ^ (((arr_7 [i_2 + 2] [i_2 + 1] [i_0 - 2]) & (((arr_2 [i_0 - 2] [i_1]) ^ var_9))))));
                }
            }
        }
        arr_9 [i_0] = (((((arr_0 [i_0]) * var_9)) & var_9));
        arr_10 [i_0] = 0;
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_23 |= (((arr_15 [18]) && (arr_15 [8])));
            arr_19 [i_3] [i_4] = ((var_14 ? var_7 : ((((arr_17 [i_3]) < 60)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_24 [i_3] = (((arr_6 [2] [i_3 + 1] [20] [i_5]) ^ (arr_6 [i_3 + 1] [i_5] [i_3 + 1] [i_5])));
            var_24 = (max(var_24, (((-(arr_11 [7] [i_5]))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_31 [i_3] [i_5] [i_6] [12] = ((var_17 % (60 | var_4)));

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_34 [i_3] [i_3] = (((arr_5 [i_3 + 1] [i_5] [i_3 + 1] [i_7]) < ((var_12 ? (arr_3 [i_3]) : var_15))));
                            arr_35 [i_3 + 1] [i_5] [i_3] [6] [i_5] [i_5] [15] = (var_1 ? (arr_32 [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3]) : (arr_32 [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3]));
                            var_25 = (((-127 - 1) ? var_17 : var_18));
                        }
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            arr_38 [i_3] [i_5] [i_6] [i_7] [i_5] = ((227 % ((0 ? (arr_20 [i_5]) : 40))));
                            var_26 ^= 0;
                            arr_39 [i_3] [i_5] [i_6] [11] [i_3] = arr_18 [i_3];
                        }
                        var_27 = (!var_18);
                        var_28 = var_16;
                        arr_40 [1] [i_3] [i_7] [i_7] [i_6] [1] = ((-(arr_30 [i_6] [5] [5] [8])));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_44 [i_10] [i_3] = (((max(((65472 ? var_7 : var_12)), (((arr_25 [i_3] [i_10] [11] [17]) * var_12)))) != (arr_29 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])));

            /* vectorizable */
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                arr_48 [i_3] = (arr_21 [i_3]);
                arr_49 [i_3] [i_3] = ((-(!var_8)));
                arr_50 [11] [11] [i_3] = ((~((((arr_32 [i_3] [i_3] [i_10] [i_10] [i_10] [i_11] [i_3]) != (arr_18 [i_3]))))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                var_29 ^= (var_14 & var_4);
                arr_53 [i_3 + 1] [i_3] = (arr_36 [1] [i_10] [i_10] [1] [i_12] [i_12]);
                var_30 = (arr_12 [i_3]);

                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    var_31 |= ((-(((var_4 && (arr_2 [17] [17]))))));
                    arr_57 [i_12] [i_3] [i_3] [i_13] [i_10] [20] = ((~((((arr_0 [i_3]) && (arr_15 [i_3]))))));
                    var_32 -= 196;
                }
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    arr_61 [i_3] = ((~(arr_52 [i_3 + 1] [i_3] [i_12] [i_14])));
                    var_33 = ((~(arr_17 [i_3])));
                    var_34 = 15;
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    arr_65 [i_3] [i_3] [i_15] [i_15] [i_12] [14] = (((var_2 > var_6) ? (arr_7 [i_3] [i_10] [i_3 + 1]) : (var_12 != var_15)));
                    arr_66 [i_3] = ((var_12 | (arr_18 [i_3])));
                }
            }
            for (int i_16 = 3; i_16 < 21;i_16 += 1)
            {
                var_35 = (min(var_35, ((((arr_7 [i_3] [i_10] [i_16 + 1]) > (arr_68 [i_3] [2] [i_16]))))));
                var_36 ^= ((((-(arr_14 [i_10]))) | (arr_14 [i_3 + 1])));
            }
            var_37 = (var_16 + var_12);
            arr_69 [12] [i_10] [i_3] = (((((var_5 ? 60 : (arr_29 [i_3] [i_10] [i_3 + 1] [i_10]))))) == (((((((arr_14 [i_3 + 1]) <= (arr_6 [i_3] [10] [i_10] [10])))) <= var_4))));
        }
        arr_70 [i_3] = ((+((((arr_18 [i_3 + 1]) <= (((var_9 ? (arr_46 [i_3] [i_3 + 1] [i_3] [i_3 + 1]) : (arr_51 [8] [i_3] [i_3])))))))));
        var_38 = (arr_67 [i_3 + 1] [i_3 + 1]);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                {
                    var_39 = ((+(((arr_30 [13] [i_3 + 1] [i_18] [i_3]) & (arr_30 [i_3 + 1] [i_3 + 1] [i_18] [i_17])))));
                    arr_76 [i_3 + 1] [i_17] [i_3] [i_18] = (min((((arr_46 [i_3] [12] [i_3 + 1] [i_3]) / (arr_46 [i_3] [1] [i_3 + 1] [i_17]))), (var_14 && var_1)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 25;i_19 += 1)
    {
        var_40 = (min(var_40, (arr_77 [i_19])));
        var_41 -= ((!(arr_77 [i_19])));
    }
    for (int i_20 = 1; i_20 < 9;i_20 += 1)
    {
        var_42 = (min(var_42, ((max((arr_42 [i_20 + 2]), ((min(((2073749796 % (arr_68 [i_20] [0] [i_20]))), (3 != var_10)))))))));
        var_43 ^= (((((~(arr_67 [i_20] [i_20])))) ? ((+(((var_3 + 2147483647) << (((var_14 + 1405555885) - 4)))))) : ((((((arr_2 [i_20 + 1] [i_20]) ? var_9 : (arr_20 [i_20 - 1]))) != (max(var_18, (arr_46 [1] [i_20] [i_20 + 1] [i_20 + 2]))))))));
    }
    #pragma endscop
}
