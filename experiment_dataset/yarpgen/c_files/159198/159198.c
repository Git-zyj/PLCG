/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [2] |= (((((min(1, 15))))) ? var_1 : 1);
        var_11 = (((((min((arr_1 [i_0]), (arr_1 [i_0]))))) >> (var_9 + 95)));
        var_12 = (min((min(var_9, (arr_0 [i_0]))), (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_13 = var_5;
            var_14 = ((+((min((arr_4 [i_0] [i_0] [i_0 + 1]), (arr_4 [i_0] [i_0] [i_0 - 2]))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
            arr_8 [i_0] [i_0] = (((((-(arr_1 [i_0 + 1])))) ? ((((max(var_4, -1))) ? (min(-1933051354, 183105836)) : (arr_4 [i_0] [i_0] [i_0]))) : (((-(arr_6 [i_0] [i_2] [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_15 = 1;
            var_16 *= (min(((var_5 ? (arr_5 [4]) : var_10)), (((arr_5 [0]) ? (((62992 >= (arr_0 [12])))) : (arr_4 [i_3] [i_0] [i_0])))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_17 = (((arr_0 [i_0]) >= (arr_0 [i_0])));
                var_18 *= -var_8;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_19 = ((!(-1 | 0)));
                var_20 = (arr_5 [i_0]);
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_21 = (((arr_19 [i_0] [i_6] [i_3] [i_0]) ^ (((((((arr_14 [i_0]) > (arr_13 [i_3] [i_3])))) == -var_10)))));
                    arr_22 [i_0] [i_0] [i_3] [i_6] [i_0] = ((-((min((arr_21 [i_7] [i_0 + 1] [i_3] [i_0 + 1]), 1)))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                    var_22 = (0 | 157);
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    arr_26 [i_0] [i_0] [i_6] [i_3] [i_0] = (max((min((var_6 - 0), (arr_20 [i_0]))), (((((arr_20 [i_0]) ? var_10 : 1))))));
                    var_23 = ((~(max((arr_5 [i_0]), 7815299418943363377))));
                }
                arr_27 [i_3] [i_0] [i_3] = 1;
                var_24 = (arr_4 [i_0] [i_3] [i_3]);
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_25 ^= max(((((-(arr_14 [4]))) | -5)), ((min((((!(arr_31 [1])))), (arr_24 [i_0 + 1] [i_0 - 1])))));
            var_26 -= var_5;
            var_27 = var_1;
            arr_32 [i_0] [i_0] = ((var_2 * ((1 ? -1 : var_6))));
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_28 = 1;
            arr_36 [i_0] = 1;
            var_29 = (max(var_29, (arr_21 [i_0] [i_10] [i_10] [i_0])));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_30 = (min(((1 ? ((max((arr_10 [i_11] [i_0] [i_0 - 1]), var_9))) : (((!(arr_35 [i_0 + 1] [i_0 + 1] [i_0])))))), ((1 ? ((min(121, 48200))) : 13))));
            var_31 = arr_21 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0];
            var_32 = (arr_39 [i_0 - 2] [i_0 - 2] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 23;i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] [i_12] = (arr_1 [i_12]);
        var_33 &= (!65);
        var_34 = (arr_29 [i_12 - 2]);
    }
    for (int i_13 = 2; i_13 < 23;i_13 += 1) /* same iter space */
    {
        arr_46 [i_13] [i_13] = min(((((((1 ? (arr_21 [i_13] [i_13] [i_13] [i_13 + 1]) : var_2))) ? (arr_3 [i_13 - 1]) : 2584260540))), (((((~(arr_42 [i_13])))) ? (arr_29 [i_13 + 1]) : (var_1 ^ var_0))));
        var_35 = ((max((!var_2), (~1))) * (((((var_2 ? (arr_29 [i_13]) : (arr_1 [i_13]))) == (((~(arr_42 [i_13 + 1]))))))));
    }
    var_36 = (((((~((var_7 ? 67 : var_7))))) < var_5));
    #pragma endscop
}
