/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (((max(15353, var_6)) % var_6));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((var_2 & var_11), ((max(var_14, var_8)))))) ? (max(((max(var_9, var_7))), (var_11 | var_3))) : var_13));
        arr_4 [i_0] [i_0] = ((((-((var_3 ? (arr_1 [i_0 - 1]) : var_0)))) > (((var_2 | -1132034298) ? -89 : (arr_2 [i_0 - 1])))));
        arr_5 [i_0] [i_0] = 159;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_16 = 3753434054178536953;
            arr_11 [i_2] [i_1] [i_1] = (var_14 ^ 2053614678);
            arr_12 [i_1] = ((arr_8 [6]) + ((64 ? var_9 : var_2)));
        }
        var_17 = ((var_2 > (arr_7 [i_1])));

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_18 = (((arr_10 [i_1] [i_3 + 1]) ? ((var_14 ? (arr_9 [4] [9] [4]) : var_4)) : (~var_13)));

            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                arr_19 [i_4] [i_3 + 2] [i_1] = ((((-(arr_7 [i_1]))) + (arr_15 [5] [i_4 + 2] [i_1])));
                var_19 = var_2;
            }
            var_20 -= var_2;
            var_21 |= (((arr_10 [i_3 + 2] [0]) ? (arr_10 [i_3 + 1] [i_3]) : (arr_10 [i_3 - 1] [i_3 - 1])));
        }
        var_22 *= (((var_6 | 70) - var_14));
        var_23 = (arr_18 [i_1]);
    }
    for (int i_5 = 1; i_5 < 6;i_5 += 1)
    {
        arr_23 [i_5 + 4] [i_5] = var_4;
        arr_24 [i_5] = 21743;
        var_24 = (((max(9650, 96))) ? (163781265353357129 < -1) : (((arr_0 [i_5] [i_5]) & var_12)));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_25 ^= (max(((var_10 ? var_11 : 17407)), (arr_6 [i_6])));
        arr_27 [i_6] [i_6] |= ((((var_1 & -6839) && (var_9 + var_3))));
    }
    #pragma endscop
}
