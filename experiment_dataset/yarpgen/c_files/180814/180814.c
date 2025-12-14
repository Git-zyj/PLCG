/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (237 == 6);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (((((-(arr_0 [i_0])))) ? (arr_0 [i_0]) : ((var_1 ? var_5 : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_10 [i_1] [7] [2] = var_1;
            var_11 = (min(var_11, (((var_1 ? var_9 : var_2)))));
        }
        arr_11 [i_1] = ((~(arr_9 [i_1])));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_14 [i_1] [i_1] [i_3] = var_4;
            arr_15 [2] [i_1] [i_1] &= (arr_0 [i_1]);
            var_12 = ((var_7 ? (arr_2 [i_1 - 3]) : (arr_2 [i_1 - 4])));
            arr_16 [i_1] [0] [i_3] = (((var_4 ? var_5 : var_3)));
        }
        arr_17 [i_1] [i_1] = var_2;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_13 = (((arr_19 [i_4 - 1] [i_4 - 1]) ? var_8 : var_6));
        arr_20 [i_4] |= var_6;
        arr_21 [i_4] = -32767;
        var_14 = (arr_19 [i_4 - 2] [i_4 - 2]);
        arr_22 [i_4 - 2] = ((var_1 ? var_7 : (arr_19 [i_4 - 1] [i_4])));
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        var_15 = (min(var_15, -var_8));
        arr_25 [i_5] = var_6;

        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            var_16 = (max(var_16, (((max(var_0, (max((arr_28 [0] [i_6 - 1] [6]), var_7))))))));
            arr_30 [12] [i_5] [12] &= (arr_26 [i_5] [1]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_34 [i_5 - 2] [i_5] [i_5] = ((((var_1 ? 3605811525 : 1)) * (var_3 * 0)));
            arr_35 [i_5] [i_5] = (1537220563 ^ 18446744073709551596);
            var_17 = (min(var_17, ((((arr_33 [i_5 + 2] [6] [i_5]) << ((((min(var_6, (arr_33 [i_5 - 3] [6] [i_5 + 2])))) - 32534)))))));
            arr_36 [i_5] [i_7] [i_7] = var_5;
            arr_37 [i_5] = var_3;
        }
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_18 |= (68719476728 < 65535);
            var_19 = (min(var_19, (((-(((arr_29 [i_5 + 1] [i_8 - 2] [i_8 - 2]) ? (arr_28 [i_8 - 1] [i_8] [i_8]) : (arr_29 [i_5 - 2] [i_8 - 1] [i_8 + 1]))))))));
            var_20 = (var_8 + var_6);
        }
    }
    var_21 = var_3;
    #pragma endscop
}
