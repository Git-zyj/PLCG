/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_15 = (max(var_15, (-1440545770 < 1)));
            arr_4 [i_1] |= var_10;
            arr_5 [i_0] [i_1] [i_1] = ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_1]) : 1173312718)));
            arr_6 [i_0] [i_0] = 16867479079000214817;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_12 [i_0] = (~(arr_10 [i_0] [i_0] [i_2] [i_3]));
                arr_13 [i_0] [i_0] = (((!65195) && (arr_0 [i_3])));
                var_16 *= (arr_2 [i_0] [i_3]);
            }
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                var_17 = (max(var_17, (arr_3 [i_0] [i_4])));
                var_18 = (max(var_18, ((max((((((var_7 ? (arr_1 [i_0] [i_4]) : (arr_14 [i_0] [i_2]))) > ((var_5 ^ (arr_9 [i_0] [i_2])))))), (min(((0 ? 1 : -797513208)), ((~(arr_14 [i_0] [i_0]))))))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_24 [i_6] [i_6] [i_6] [1] [2] [i_6] [i_0] = ((var_2 ? (arr_18 [i_0] [i_0]) : (arr_18 [i_0] [i_2])));
                        var_19 = var_14;
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_20 = (arr_0 [i_2]);
                        var_21 *= arr_3 [i_0] [i_2];
                        arr_29 [i_0] [i_2] [i_5] [i_6] [i_0] [i_8] = (((var_8 * 5612990926890748145) >= 16867479079000214817));
                        var_22 = (((1106307865 - 15) ? ((2097148 ? (arr_23 [i_0] [i_2] [i_0]) : (arr_18 [i_0] [i_2]))) : (arr_22 [i_0] [i_2] [i_5] [i_5] [i_6] [i_2] [i_8])));
                        arr_30 [i_8] [i_0] [i_5] [i_0] [i_0] = ((!((!(arr_17 [9] [9] [i_5] [i_6])))));
                    }
                    arr_31 [i_0] [i_0] = (arr_9 [i_6] [i_5]);
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_34 [i_2] [i_5] [i_0] = (((arr_19 [14] [i_2] [i_5] [i_9] [i_5] [i_9]) ? (arr_19 [i_5] [i_5] [i_5] [5] [i_5] [i_5]) : 1286176452));
                    arr_35 [i_0] [i_0] [i_2] [i_5] [i_9] = var_11;
                }
                var_23 = ((arr_16 [i_0] [i_5]) ? (arr_7 [i_0] [i_2] [i_5]) : (arr_16 [i_5] [1]));
            }
            arr_36 [i_0] = ((~(((arr_10 [i_0] [i_0] [i_0] [i_2]) ? ((3001142919 + (arr_3 [i_0] [i_2]))) : ((((arr_19 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2]) ? (arr_0 [i_0]) : (arr_21 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0]))))))));
            arr_37 [i_0] = (((arr_22 [i_0] [i_2] [i_0] [i_2] [i_2] [i_2] [i_0]) != var_14));
            var_24 = (arr_2 [i_0] [13]);
        }
        arr_38 [i_0] = min((min(797513208, 104)), ((((arr_26 [i_0] [i_0] [i_0]) == 2147483647))));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_41 [i_10] = ((arr_25 [i_10] [i_10] [i_10] [i_10] [i_10]) ? ((max(var_8, (arr_39 [i_10])))) : ((((!(((var_3 ? -21971616 : (arr_40 [i_10])))))))));
        arr_42 [i_10] [11] = (min(1, 1286176452));
        var_25 = ((~(arr_22 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    for (int i_11 = 1; i_11 < 9;i_11 += 1)
    {
        var_26 = (max(var_26, (!2511997718)));
        arr_47 [i_11] = 1;
        arr_48 [i_11] [i_11] = (((max((arr_1 [i_11 - 1] [i_11 - 1]), (((var_1 >= (arr_33 [i_11] [i_11] [i_11] [i_11])))))) > (((!(1 + 2114949348))))));
    }
    var_27 -= (((var_1 - var_8) + var_11));
    var_28 = ((~((var_6 ? 12046 : var_7))));
    #pragma endscop
}
