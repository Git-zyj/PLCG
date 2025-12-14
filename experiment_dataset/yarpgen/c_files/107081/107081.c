/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_6 [i_0] [i_0] [i_2] [i_2] = (max((min((var_4 && var_5), (min(4630913256717323381, -103)))), var_9));
                var_10 = var_3;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_12 [i_4] [i_2] [16] [i_2] [i_2] [i_0] = (arr_3 [i_2]);
                            var_11 *= (-((var_5 - (((max(var_4, (arr_7 [i_0] [i_1] [i_0] [i_0]))))))));
                            arr_13 [i_0] [i_2] [i_2] [i_0] = ((var_6 < (((((((var_6 > (arr_10 [i_4] [14] [i_2] [i_0] [i_0]))))) == ((var_6 ? var_7 : (arr_3 [8]))))))));
                            arr_14 [i_4] [i_1] [15] [i_1] [i_2] = (max(((((((max(var_6, (arr_2 [i_0]))))) == (min(var_1, var_9))))), (arr_0 [i_0])));
                            arr_15 [i_0] [i_0] [12] [i_0] [i_2] [16] = (min((((((((arr_5 [i_2] [i_2] [i_3]) == (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))))) % (min(var_3, var_5)))), (min((max(var_1, var_3)), (((arr_7 [i_0] [i_2] [i_3] [i_4]) | var_3))))));
                        }
                    }
                }
                arr_16 [i_2] [i_1] [i_2] [i_2] = (((max(((var_8 | (arr_3 [i_2]))), ((((arr_9 [i_1] [i_1] [i_2] [i_1] [i_0]) ? var_8 : (arr_11 [i_0] [3])))))) | (arr_8 [i_0] [i_2] [16] [i_1] [7])));
            }
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                arr_19 [i_0] [i_1] [2] = (min((~var_5), (max(var_2, (arr_2 [i_0])))));
                var_12 = ((var_6 | (arr_3 [i_0])));
            }
            arr_20 [i_0] [i_1] [i_1] = var_9;

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_13 = (min(var_13, (arr_7 [i_1] [i_6] [i_1] [i_1])));
                var_14 ^= var_3;
                var_15 = (arr_22 [i_0] [i_1] [i_6] [i_6]);

                /* vectorizable */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    arr_25 [18] [i_1] [i_6] [i_7] = ((((((arr_22 [i_0] [i_0] [i_0] [i_0]) | (arr_22 [10] [i_1] [i_1] [i_0])))) || (arr_0 [i_1])));
                    var_16 = ((var_8 ? (~var_6) : var_5));
                    arr_26 [3] [3] [i_6] [i_6] = ((((((arr_3 [i_0]) > var_2))) <= var_0));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    var_17 = (max(var_17, (((var_1 | (arr_24 [i_6] [i_8] [i_8 - 1] [i_8] [i_8 + 2]))))));
                    var_18 = (min(var_18, ((((((var_3 ? var_8 : var_5))) ? var_7 : (((arr_18 [i_6] [i_1] [i_0]) ? (arr_0 [i_6]) : (arr_10 [21] [i_1] [i_1] [i_6] [21]))))))));
                    var_19 = (max(var_19, (arr_3 [i_0])));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_31 [i_0] [i_0] = (max(1866, 1309155474));
                    var_20 = (((((var_4 + (var_4 == var_8)))) % var_2));
                }
                arr_32 [i_0] [i_0] [i_0] [i_0] = (arr_30 [i_0] [i_1] [i_6] [i_6]);
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                arr_37 [i_0] [i_10] = (arr_27 [i_0] [i_0] [i_1] [i_10]);
                var_21 = (max(var_21, var_3));

                /* vectorizable */
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, var_1));
                    var_23 = (((var_2 || var_0) || var_7));
                    arr_42 [i_0] [i_1] [2] [i_11] [i_0] = (((var_1 > var_8) * var_0));
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    arr_45 [i_10] [i_10] [i_10] [i_0] [i_0] [i_0] = var_1;
                    arr_46 [i_0] = (((~var_5) ? ((((((~(arr_44 [i_0] [i_0] [i_10] [i_12] [i_12])))) < (min(var_9, var_3))))) : ((var_7 ? var_1 : var_8))));
                    arr_47 [i_0] [9] [i_10] [i_12] = ((var_8 + (max((max(var_3, 1)), (arr_35 [i_0] [i_0])))));
                    arr_48 [i_0] [10] [i_0] [i_0] = (max(1839, 1309155474));
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                {
                    var_24 += (max(((((max(var_5, var_1)) <= (((max(var_4, (arr_17 [8] [i_10])))))))), (max((max((arr_4 [i_13] [i_0]), (arr_34 [i_0] [i_1] [i_0]))), ((max((arr_7 [i_0] [i_0] [i_10] [i_13]), var_5)))))));
                    var_25 = (max(var_25, ((min(((2985811831 ? 4630913256717323376 : 170)), (arr_38 [i_13] [i_10] [i_0] [i_0] [i_0]))))));
                }
            }
            arr_51 [i_0] = ((arr_21 [i_0] [i_0] [i_0]) + var_2);
            arr_52 [i_1] [i_0] [i_0] = (1 == 67);
        }
        var_26 = (max(var_26, ((((((((arr_23 [i_0] [i_0] [i_0] [i_0]) && var_7)))) > var_3)))));
        var_27 = var_0;

        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    {
                        arr_59 [i_0] [i_16] = (arr_11 [i_0] [i_0]);
                        var_28 *= (((-var_9 ? ((((var_4 == (arr_0 [i_14]))))) : ((-(arr_57 [i_14] [i_14] [i_0] [i_16]))))));
                        arr_60 [i_0] [i_14] [i_16] [i_16] = var_9;
                    }
                }
            }
            arr_61 [i_0] [i_0] = (((((max(var_7, (arr_10 [i_14] [i_14] [i_14] [i_14] [i_0]))))) == var_3));
        }
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            arr_65 [i_17] [i_17] = (((((arr_4 [i_17] [i_17]) * ((var_3 * (arr_56 [i_0] [i_0] [i_0]))))) == (((((var_5 && (arr_38 [i_0] [i_0] [i_0] [3] [i_17]))) ? var_6 : ((((arr_28 [i_17] [i_0] [i_0] [i_0]) && var_3))))))));
            var_29 += (((arr_28 [14] [i_17] [i_17] [i_17]) ? var_5 : (max((arr_22 [i_0] [i_0] [i_0] [i_0]), (4630913256717323376 == -1867)))));
            arr_66 [i_0] [i_0] [i_17] = ((-(arr_22 [15] [i_17] [i_17] [i_17])));
            var_30 ^= (max(4064, -7836));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            var_31 += ((13815830816992228246 ? 27498 : var_4));
            var_32 ^= (((var_4 == (arr_23 [i_0] [i_18] [i_18] [i_18]))));
            var_33 = (max(var_33, ((((arr_17 [i_0] [i_18]) > ((~(arr_8 [i_0] [i_0] [i_18] [i_0] [i_18]))))))));
            var_34 = ((((var_6 - (arr_10 [i_0] [i_18] [i_0] [i_18] [i_18]))) > (arr_43 [i_0] [i_0] [i_0] [i_0])));
            var_35 *= (var_1 / var_0);
        }
        arr_69 [i_0] = ((arr_68 [i_0] [i_0]) + (~2451228692946713794));
    }
    var_36 = (((var_1 && (var_5 && var_8))));
    #pragma endscop
}
