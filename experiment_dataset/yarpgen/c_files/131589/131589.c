/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (~143);
        var_20 = (min((arr_0 [i_0]), (arr_0 [i_0])));
        arr_3 [i_0] = (((arr_0 [i_0]) / ((-(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 -= (max((arr_5 [i_2] [i_2]), (arr_6 [i_1])));

            for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
            {
                arr_13 [i_1] [i_1] [i_1] [i_3] = var_10;
                var_22 -= ((((max(((min(1, (arr_8 [i_2])))), (arr_12 [i_1] [i_2] [i_2] [i_3 + 4])))) || 29956));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_16 [i_1] [i_4] [i_4] = (((arr_10 [i_4 + 4] [i_4 - 1] [i_4 - 1]) ? (arr_10 [i_4 + 4] [i_4 - 1] [i_4]) : (arr_10 [i_4 + 4] [i_4 - 1] [i_4])));
                arr_17 [i_4] [i_1] [i_1] [i_4] = ((15584 ? -99 : (arr_10 [i_4 + 4] [i_2] [i_4 + 4])));
                arr_18 [i_4] = -100;
            }
            arr_19 [i_1] [i_2] = var_8;
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_26 [i_1] [i_1] [i_5] [i_6] = ((!((((arr_11 [i_6] [i_5] [i_5] [i_6]) & -14719)))));
                var_23 = (min(var_23, var_8));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_24 = (max(var_24, (((~((max((arr_6 [i_5 + 2]), 73))))))));
                var_25 = (min(var_25, (((((((arr_25 [i_5 + 3] [i_5]) <= (arr_20 [i_5 - 2] [i_5 - 1] [i_5 - 2])))) < (((max(35579, -11807)))))))));
            }
            arr_30 [i_1] [i_1] [i_1] = -11807;
            arr_31 [i_1] [i_5] [i_5] = (arr_25 [i_1] [i_1]);
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_43 [i_1] [i_9] [i_9] [i_10] [i_11] = (((min((!var_9), (65526 != -11814)))) <= (arr_39 [i_1] [i_1] [i_11] [i_10] [i_11]));
                            arr_44 [i_1] [i_8] [i_9] [i_8] [i_8] [i_10] = 32;
                        }
                    }
                }
            }
            var_26 = var_19;
        }
        var_27 += ((((max((arr_9 [i_1] [i_1] [i_1] [i_1]), (arr_5 [i_1] [i_1])))) ? ((1928699922051888367 ? (arr_5 [i_1] [i_1]) : (arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((202 / (arr_14 [i_1] [i_1] [i_1]))))));
        arr_45 [i_1] [i_1] |= var_7;
        var_28 = (((arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? ((~((var_17 ? -11808 : 1928699922051888370)))) : 61));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
        {
            var_29 = (max(var_29, var_4));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        arr_52 [i_1] = (arr_9 [i_1] [i_12] [i_13 - 1] [i_12]);
                        var_30 = (var_16 <= 4789);
                        arr_53 [i_12] [i_14] = arr_7 [i_1] [i_12] [i_13];
                    }
                }
            }
            arr_54 [i_1] [i_12] = (((arr_40 [i_1] [i_12] [i_1] [i_12] [i_12] [i_12] [i_1]) << (((arr_40 [i_1] [i_1] [i_1] [i_12] [i_1] [i_1] [i_12]) - 18324))));
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
        {
            var_31 -= (max(11807, 22000));
            var_32 = ((((9359359744020770842 ? var_8 : 13118523401645386735)) - (((37 ? -116 : 22944)))));
            arr_58 [i_15] = ((var_8 - (arr_40 [i_1] [i_15] [i_15] [i_15] [i_15] [i_1] [i_15])));
        }
    }
    /* vectorizable */
    for (int i_16 = 3; i_16 < 20;i_16 += 1)
    {
        arr_62 [i_16 - 2] [i_16] = (9359359744020770842 + 5110745483401439650);
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 19;i_18 += 1)
            {
                {
                    var_33 = (arr_67 [i_16] [i_16 - 1] [i_16]);
                    var_34 ^= (((((56 << (79 - 74)))) ? ((var_9 ? var_18 : (arr_66 [i_16 + 1] [i_17] [i_16 + 1]))) : var_19));
                    var_35 ^= ((!(~65530)));
                }
            }
        }
    }
    var_36 = var_19;
    var_37 = (-318331407 + -112);
    #pragma endscop
}
