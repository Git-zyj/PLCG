/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = ((!((max(var_4, (min((arr_0 [i_0]), var_0)))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_1] = (arr_4 [i_0] [i_1]);
            arr_7 [i_1] [8] = 2147483647;
            var_16 = 2147483647;
            var_17 = ((((arr_2 [i_0] [20]) ? 126 : ((-(arr_2 [i_0] [i_0]))))));
            var_18 -= (min(((~(((-2147483647 - 1) ? (arr_5 [i_0 + 1] [i_1]) : (arr_5 [i_1] [i_1]))))), (((arr_5 [i_1] [i_1]) ? (min((-2147483647 - 1), 120)) : (((arr_3 [i_1]) ? 2147483647 : (arr_5 [i_0] [i_0])))))));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_19 = (~var_2);
            arr_10 [i_0 - 1] [i_2 + 1] [i_2 + 1] = (arr_8 [i_0] [i_0 + 1]);
        }
        arr_11 [i_0] [i_0] = (max(127, ((min(0, -1)))));
        arr_12 [i_0] [i_0 - 1] = (arr_5 [1] [i_0 + 1]);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_20 = min((max((arr_14 [i_3] [i_3]), var_0)), -1);

        /* vectorizable */
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] [i_3] [i_3] = ((~(arr_5 [i_3] [i_4 + 2])));

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_21 = (((arr_16 [i_3] [i_4] [i_5]) ? (2147483647 / var_5) : (((arr_19 [i_3] [i_4 - 1] [i_4] [i_3]) - var_10))));
                arr_20 [i_3] [i_4] [i_4 + 1] [i_3] = (var_1 ? (arr_3 [i_4 - 1]) : (arr_5 [i_5] [i_3]));
            }
            var_22 = (((((arr_0 [9]) ? (arr_13 [1] [i_4]) : (arr_16 [i_3] [i_3] [i_3])))) ? (arr_1 [i_4 + 2]) : ((2147483647 ? var_4 : var_9)));
            var_23 = (((arr_4 [i_4 + 2] [i_3]) ? (arr_4 [i_3] [i_4 - 1]) : (arr_4 [i_3] [i_3])));
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_24 = (min((arr_23 [i_3] [i_3]), (2013265920 >= var_7)));
            var_25 ^= ((((arr_8 [i_6 - 1] [i_6 + 2]) ? (arr_8 [i_6 - 1] [i_6 + 2]) : (arr_8 [i_6 - 1] [i_6 + 2]))));
            var_26 = (((arr_9 [i_6 - 1]) != ((((arr_16 [22] [i_6 + 2] [22]) >= (arr_16 [i_3] [i_6 + 2] [i_6]))))));
            var_27 = (min(var_27, (((~((((min(var_2, (arr_3 [i_6])))) ? (arr_16 [i_3] [i_6 + 1] [i_3]) : 116)))))));
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = var_3;

        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_28 = (((min(2147483647, -4)) + (((arr_5 [i_8 + 1] [i_7]) + (arr_5 [i_8 - 1] [i_8])))));
            var_29 = (max(((((arr_25 [i_7]) ? 2147483647 : 1048575))), (arr_4 [i_8] [i_7])));
            var_30 = (arr_1 [i_7]);
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_31 = var_11;
            arr_33 [i_7] = (min(((-((-(arr_2 [i_7] [i_7]))))), (max((((var_5 / (arr_16 [i_7] [9] [10])))), (arr_27 [i_7])))));
            var_32 = (max(var_32, (arr_25 [16])));
            var_33 = ((!((!(arr_13 [i_7] [i_9])))));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_36 [20] [20] |= -13;
            var_34 = (i_7 % 2 == zero) ? ((((((((min((arr_30 [i_7] [i_7]), var_14)) + 2147483647)) << ((((var_10 ? (arr_27 [i_7]) : (arr_19 [11] [i_10] [i_7] [i_7]))) - 4865981491946143088)))) << (((min(((~(-2147483647 - 1))), (min(var_10, (arr_34 [i_7] [i_7] [i_7]))))) - 57081360))))) : ((((((((((min((arr_30 [i_7] [i_7]), var_14)) - 2147483647)) + 2147483647)) << ((((((var_10 ? (arr_27 [i_7]) : (arr_19 [11] [i_10] [i_7] [i_7]))) - 4865981491946143088)) - 6081616099781243537)))) << (((((min(((~(-2147483647 - 1))), (min(var_10, (arr_34 [i_7] [i_7] [i_7]))))) - 57081360)) - 1378511445)))));
        }

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_41 [i_7] = (arr_9 [i_7]);
            var_35 |= max((arr_4 [i_7] [i_11]), (((arr_4 [i_7] [i_11]) ? (0 + -2147483647) : 1)));
            arr_42 [i_7] [i_7] = (min(-4, (arr_38 [11] [i_7])));
        }
        var_36 = (arr_4 [i_7] [i_7]);
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] = (min(((+((var_4 ? (arr_34 [i_12] [20] [i_12]) : (arr_39 [10] [i_12] [i_12]))))), (arr_39 [8] [i_12] [i_12])));
        var_37 = ((((((var_10 ? (arr_14 [i_12] [i_12]) : (arr_13 [i_12] [i_12]))))) || ((((-2147483637 || (arr_23 [16] [16]))) && 2147483647))));
    }
    var_38 = (max(var_38, ((var_5 + (max((((126 ? var_11 : var_12))), ((var_2 ? var_6 : var_3))))))));
    var_39 |= ((((min(var_4, var_13)) ? ((min(-5, var_11))) : var_13)));
    #pragma endscop
}
