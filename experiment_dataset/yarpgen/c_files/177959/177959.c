/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = (min(var_10, (((((~(var_8 ^ 180))) < (((((max(var_9, 248))) <= (((arr_0 [i_0] [1]) ? 151 : (arr_0 [i_0] [9])))))))))));
        arr_2 [i_0] [i_0] = (min(180, ((-(arr_1 [15])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((((min(var_8, 75)) ? 105 : ((((arr_4 [i_0] [i_1] [i_0]) && (arr_3 [i_0])))))))))));
                    var_12 = (arr_4 [i_0] [i_1] [i_2]);
                }
            }
        }
        arr_8 [i_0] = ((~(((!(arr_4 [i_0] [i_0] [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_13 += 65521;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_14 ^= ((~((16383 >> (((arr_1 [i_5 + 1]) - 26))))));
                    arr_16 [7] = ((((!(arr_7 [i_3] [1] [18]))) ? (arr_11 [i_3] [i_4] [i_5]) : ((((arr_13 [i_5 + 1] [0] [i_5]) > (arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1]))))));

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_15 = (max(var_15, ((((((arr_10 [i_3] [i_4]) ^ 76)) < ((~(((arr_3 [i_3]) ? (arr_11 [12] [9] [i_5]) : var_3)))))))));
                        arr_19 [i_3] [i_3] [i_3] = (((((arr_6 [i_3] [i_3] [i_5]) | ((((arr_0 [i_3] [i_6]) || (arr_11 [i_3] [8] [i_3])))))) * (((((!(arr_18 [i_3] [i_3] [i_5] [2] [i_5])))) << (60 - 57)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_3] [i_3] = -var_5;
                        arr_24 [3] [5] [8] [i_7] [i_3] [i_7] = ((65521 + ((82 ? (arr_21 [i_3] [i_3] [i_5] [i_7]) : var_4))));
                        var_16 = (((((arr_12 [i_4] [i_7]) ? var_8 : var_1))) ? (arr_4 [15] [i_5] [i_7]) : (arr_1 [i_7]));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_17 = (max(((((max((arr_0 [i_5] [i_3]), 2))) ? ((var_0 ? -1291385866 : 172)) : (((var_2 == (arr_1 [i_3])))))), ((4 ? var_3 : 164))));
                        arr_27 [i_3] [i_3] [2] [i_3] = var_2;

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_18 = (((arr_5 [i_3] [i_4] [8]) == var_2));
                            var_19 = (min(var_19, ((((arr_13 [i_5 - 1] [0] [i_5]) ? -1291385866 : (var_2 | var_5))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, ((((((arr_11 [i_3] [1] [i_10]) ? (arr_31 [i_4] [i_4] [1]) : (arr_13 [i_4] [1] [i_5]))) * (arr_32 [5] [i_5 - 1]))))));
                        var_21 = (max(var_21, (((-(arr_21 [i_5 + 1] [5] [i_5 + 1] [7]))))));
                    }
                }
            }
        }
        var_22 -= (min((((arr_32 [i_3] [i_3]) ? (arr_32 [i_3] [i_3]) : (arr_32 [i_3] [i_3]))), (((((arr_32 [i_3] [i_3]) + 2147483647)) >> (((arr_32 [i_3] [i_3]) + 31792))))));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_23 *= ((((((arr_35 [i_11]) ? (arr_35 [i_11]) : (arr_35 [i_11])))) ? (((~13) ? (arr_34 [i_11] [i_11]) : (var_6 | var_9))) : -var_3));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {
                    {
                        var_24 *= ((((73 >= (((arr_37 [i_12]) & -1291385866)))) ? (((arr_40 [i_13 + 1] [i_13] [i_13]) | (((!(arr_41 [i_12])))))) : (((((3103854286 ? (arr_42 [i_11] [23] [13] [i_11]) : (arr_35 [i_11])))) ? (arr_33 [6]) : (arr_42 [i_11] [i_13 - 1] [i_14 + 1] [i_14 + 4])))));
                        arr_45 [i_14] [i_13] [i_12] [i_11] = (((min(((min((arr_35 [i_11]), var_7))), ((var_5 / (arr_35 [i_12]))))) >> ((((max((max(245, (arr_33 [i_14]))), (1 <= var_9)))) - 237))));
                    }
                }
            }
        }
        var_25 = (((min(var_0, ((min((arr_40 [i_11] [i_11] [7]), (arr_40 [i_11] [i_11] [i_11])))))) ^ ((((arr_41 [i_11]) ? (arr_41 [i_11]) : (arr_41 [i_11]))))));
    }
    var_26 = (min(var_26, (var_5 & var_0)));
    #pragma endscop
}
