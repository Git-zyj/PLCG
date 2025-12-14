/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 = (((((arr_0 [i_0 + 1]) << (((arr_2 [6] [i_0 - 1]) - 20427)))) == (((((((arr_3 [i_0] [i_0]) ? var_10 : (arr_3 [i_0] [i_0])))) ? (min((arr_3 [i_0] [i_0]), var_10)) : (arr_1 [i_0]))))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_12 = 613447679606558672;
            arr_6 [i_0] = (max(((var_7 ? ((17833296394102992953 ? 1 : 18446744073709551614)) : ((var_5 ? var_1 : var_8)))), (max(((max(var_4, (arr_3 [i_1 - 2] [i_0])))), (min((-127 - 1), 17833296394102992935))))));
            var_13 = (i_0 % 2 == zero) ? (((((var_4 ? (arr_5 [i_0] [i_1 - 1]) : (arr_5 [i_0] [i_1 - 1]))) - (((arr_0 [i_0 + 1]) << (((arr_5 [i_0] [i_1 - 2]) - 13083923212951125152))))))) : (((((var_4 ? (arr_5 [i_0] [i_1 - 1]) : (arr_5 [i_0] [i_1 - 1]))) - (((arr_0 [i_0 + 1]) << (((((arr_5 [i_0] [i_1 - 2]) - 13083923212951125152)) - 503522574798526984)))))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_2] = arr_3 [i_0 - 1] [i_2];
            arr_11 [i_0] = (min(309016679, 120));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_14 *= (min((((!(arr_12 [4])))), (((arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_14 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_4] [i_5] [i_6] = (((((arr_1 [i_0 + 1]) ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_9 [i_0 - 1] [i_0 + 1] [i_0]))) < ((((arr_8 [i_4 - 2] [i_5 + 2]) ? (arr_4 [i_0] [i_0] [i_0 - 1]) : (arr_18 [i_4 - 3] [i_4 - 3] [i_5 - 1] [10]))))));
                            arr_23 [i_0] [i_3] [i_3] [i_5 + 1] [i_0] [i_5] = var_1;
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = var_6;
        var_15 *= (arr_20 [i_7]);
        var_16 ^= 613447679606558681;
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        arr_33 [i_8] = ((((var_7 - (arr_31 [i_8])))) ? (min((arr_31 [i_8]), (arr_31 [i_8]))) : (max(var_0, (arr_29 [i_8]))));
        var_17 = (min((((((arr_30 [i_8]) ^ (arr_31 [i_8]))) | (((min((arr_29 [i_8]), 1)))))), (((~(arr_32 [i_8]))))));
        arr_34 [i_8] [i_8] = (((arr_32 [i_8 - 1]) - (((-(arr_29 [i_8]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_37 [i_9] = ((((var_9 ? -309016680 : (arr_2 [i_9] [i_9]))) | (arr_15 [i_9] [i_9] [i_9])));
        var_18 -= (arr_17 [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_40 [i_10] = (arr_39 [i_10] [i_10]);
        arr_41 [i_10] = ((((((arr_39 [i_10] [i_10]) - var_9))) ? (arr_39 [i_10] [i_10]) : var_2));
        var_19 = (max(var_19, (((!(((((min(var_1, (arr_39 [i_10] [i_10])))) ? (((arr_38 [i_10]) ? (arr_38 [i_10]) : (arr_38 [i_10]))) : (((arr_38 [i_10]) & var_1))))))))));
    }
    var_20 |= (min(var_2, (((((var_2 ? var_9 : var_3))) ? (((var_9 ? 26 : var_2))) : (max(2929777646, 18446744073709551615))))));
    #pragma endscop
}
