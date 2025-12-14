/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [i_0]), (65526 / 118)));
        var_12 = (max(var_12, 116));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_13 &= ((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [21]));
        arr_5 [i_1] [8] = (max(((98 ? 158 : 3841358417)), (((!(arr_0 [i_1]))))));
    }
    var_14 = (min(var_14, 97));
    var_15 = var_3;

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = ((-(((arr_0 [i_2]) ? (max((arr_8 [i_2]), (arr_0 [i_2]))) : (((59 ? 118 : 139)))))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                arr_17 [i_2] [10] [i_4] = ((824436117 ? var_8 : -16));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_21 [i_5] [11] = arr_1 [14];
                    var_16 |= ((arr_20 [8] [i_4 - 2] [i_2] [i_5]) ? (((arr_20 [i_2] [i_4 - 1] [i_4] [i_4]) ^ 1)) : (arr_20 [10] [i_4 - 2] [i_4] [i_4]));
                    arr_22 [i_2] [i_2] [i_2] [i_5] [i_2] = (min(var_11, (~100)));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_17 = var_0;
                        var_18 = (((arr_14 [i_4 - 2] [i_4] [i_4 - 2] [i_4]) ^ (arr_14 [i_4 - 2] [2] [i_4 - 2] [2])));
                    }
                    var_19 = (min(var_19, (arr_19 [i_2] [i_3] [i_4] [i_6])));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_30 [7] [i_3] [i_3] [i_3] [i_3] = (((((~(arr_15 [i_8] [i_4 + 1] [i_3] [i_2])))) ? (arr_24 [i_8] [i_3]) : ((var_4 ? var_0 : (arr_20 [8] [i_4] [i_8] [1])))));
                        var_20 = ((var_5 ? (arr_27 [i_2]) : var_0));
                        arr_31 [i_8] = (arr_23 [i_4] [i_4] [11] [i_4] [i_4]);
                        arr_32 [i_2] = (165 >= 10522);
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        arr_35 [i_9 + 1] = var_2;
                        arr_36 [i_4] [i_4] = (~114);
                    }
                    arr_37 [i_2] [2] [i_2] [2] = ((((((arr_8 [5]) * var_1))) ? 67 : 120));
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_40 [i_3] = ((((min(19586, ((var_1 ? 39 : 113))))) != (min(var_7, ((min((arr_6 [i_2]), (arr_18 [i_3]))))))));
                    arr_41 [i_10] [i_10] [i_10] [i_10] [7] = (min(var_5, (arr_18 [i_2])));
                    arr_42 [0] [i_3] [i_4 - 2] [i_10] = (((max((arr_18 [i_2]), (min(1, 393583609194154127)))) >= ((max((min(156, 4294967295)), (arr_19 [i_10] [i_2] [i_2] [i_4 + 1]))))));
                }
                arr_43 [i_2] [i_2] = var_10;
            }
            var_21 = (max(1, 81));
            arr_44 [i_2] [10] [10] = ((arr_13 [i_3]) ? 432583056 : (((arr_13 [i_3]) | var_7)));
        }
        arr_45 [7] = ((!((max(7, 1)))));
    }
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        arr_50 [i_11 - 1] [i_11] = ((0 ? -2337 : 1));
        arr_51 [i_11] = ((((!(arr_47 [i_11 - 1]))) ? ((((var_3 && var_11) ? (arr_47 [13]) : (max(1503789353, (arr_49 [i_11])))))) : ((1 ? (arr_4 [i_11]) : (((max(136, 9828))))))));
    }
    var_22 = var_1;
    #pragma endscop
}
