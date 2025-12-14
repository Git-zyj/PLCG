/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((1 ? 1 : 1)), var_9));
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= (((arr_8 [i_0 + 1] [i_2]) | ((((min(1, 1))) & 1))));
                    var_20 ^= (arr_9 [i_0] [i_1] [i_0 + 1] [1]);
                }
            }
        }
        var_21 = (arr_2 [i_0 + 1]);

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_22 ^= ((max(1, 1)));
                    var_23 = (((arr_13 [i_0] [i_3] [i_4]) ? 1 : (arr_9 [1] [i_0] [i_0 + 1] [i_3])));
                    arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_3] [i_0] = arr_1 [i_0] [1];
                    var_24 = 1;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_22 [i_0] [i_3] [i_3] [i_3] = max(1, (arr_16 [i_3] [1] [i_0 + 1] [i_0] [i_0] [i_0 + 1]));
                    arr_23 [i_0] [1] [1] [1] [i_3] [1] = 1;
                    var_25 = arr_12 [i_0] [i_3];
                    var_26 *= (max((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]), ((1 - (arr_5 [i_0] [i_0 + 1] [i_0 + 1])))));

                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        arr_26 [i_0 + 1] [i_3] [i_4] [i_6] [i_7] [i_6] [i_0 + 1] = (((min((((!(arr_19 [i_3] [i_4] [i_3] [i_3])))), ((1 << (arr_16 [i_3] [0] [1] [i_6] [i_4] [i_6]))))) | 1));
                        var_27 = min(((!(((var_10 ? (arr_10 [1] [i_4]) : 0))))), 1);
                        var_28 = arr_15 [i_4];
                        var_29 = ((((((~(((arr_7 [i_7 + 1]) << 0)))) + 2147483647)) >> 1));
                    }
                }
                arr_27 [1] [i_3] [i_3] = ((!(max((arr_13 [i_0] [1] [1]), (arr_1 [i_0 + 1] [i_3])))));
                var_30 = (arr_15 [1]);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_31 = arr_8 [i_0] [i_0];
                    var_32 &= (((1 - (arr_7 [i_9]))));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_35 [i_0 + 1] [i_3] [i_8] [i_9] [i_10] = ((~((-(arr_34 [i_0] [1] [i_8] [1] [i_10] [1])))));
                        arr_36 [i_3] [i_9] [i_8] [i_3] [i_3] = (((arr_33 [i_0 + 1] [1] [i_0 + 1]) ? 1 : (arr_33 [i_0 + 1] [i_0] [i_0 + 1])));
                    }
                    for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_3] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = (((arr_8 [i_3] [i_11 - 1]) >> var_12));
                        var_33 = 1;
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [1] [i_12] [0] [0] &= 1;
                        var_34 = (((arr_37 [i_12] [i_12 - 1] [1] [i_3] [1]) ? (arr_37 [i_8] [i_12 - 1] [i_12] [i_3] [i_12]) : (arr_40 [i_9] [i_12 - 1] [i_12 - 1] [i_3] [i_9] [i_12] [i_12 - 1])));
                    }
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        arr_49 [i_3] [i_3] [i_3] = ((~(((0 == (arr_25 [i_13 - 1] [i_13 - 1] [i_13 - 1]))))));
                        arr_50 [i_0] [i_3] [i_8] [i_9] [1] = 1;
                        arr_51 [i_3] [i_9] [i_8] [i_3] = arr_42 [i_0] [i_3] [i_0] [1] [i_13 - 1] [i_0];
                        var_35 ^= (((arr_4 [i_13 - 1] [i_13 - 1] [i_13 - 1]) ? (arr_4 [i_13 - 1] [i_13 - 1] [i_13 - 1]) : 1));
                        var_36 *= (((arr_18 [i_0 + 1] [0] [i_0 + 1] [1]) / 1));
                    }
                }
                var_37 = (!(!1));
            }
            var_38 = (min(var_38, 1));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_39 |= (~1);
                var_40 ^= (!((((arr_54 [1] [i_14]) & (arr_13 [i_0] [i_0] [i_15])))));
                var_41 &= (((arr_15 [i_0 + 1]) ? (arr_6 [i_14] [i_0 + 1] [i_0]) : 1));
                var_42 -= 1;
                arr_57 [i_0] [i_14] [i_15] = arr_56 [i_0] [1] [1] [i_15];
            }
            arr_58 [i_0] = ((((((~(arr_18 [i_0 + 1] [i_0 + 1] [i_14] [1]))) + 2147483647)) >> ((((~(arr_12 [i_14] [i_14]))) + 18))));
            arr_59 [i_0] [i_14] [i_0] = ((-(arr_52 [i_0 + 1])));
        }
        for (int i_16 = 0; i_16 < 0;i_16 += 1) /* same iter space */
        {
            var_43 = (max(var_43, ((((~1) ? ((min((arr_25 [i_0 + 1] [i_0] [0]), (arr_25 [i_0 + 1] [1] [i_16 + 1])))) : 1)))));
            var_44 = (min(var_44, ((max(((((((1 < (arr_13 [i_0] [i_0] [i_16])))) < ((-(arr_24 [i_0] [i_0] [i_0 + 1] [i_0] [1])))))), ((-(arr_20 [0] [0] [1] [i_16]))))))));
        }
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_45 = 1;
        arr_66 [i_17] = (max(((-(arr_14 [i_17] [i_17] [i_17]))), ((((arr_25 [1] [1] [i_17]) <= (arr_19 [i_17] [i_17] [1] [i_17]))))));
        var_46 = ((~((max(1, 0)))));
        var_47 = ((-(arr_0 [i_17] [i_17])));
        var_48 &= (~1);
    }
    #pragma endscop
}
