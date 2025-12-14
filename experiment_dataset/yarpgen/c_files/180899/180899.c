/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
            {
                var_15 = (arr_4 [i_0] [i_0] [13] [i_2]);
                arr_8 [i_1] [i_2] [i_2] [i_0] = (((18446744073709551602 ? 192 : 65535)));
                arr_9 [i_0] [i_1] [i_2] [i_1] = arr_5 [i_0] [i_0] [i_0] [i_0];
                arr_10 [i_1] = (-1089 >= 7);
                arr_11 [i_1] [i_1] = (-(arr_0 [i_1] [i_1 + 2]));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {
                var_16 = (arr_5 [i_0] [i_1 - 4] [11] [10]);
                var_17 = -11;
                arr_14 [i_1] [i_1] = var_13;
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                arr_17 [i_1] = (((8258911250767757979 ? (arr_5 [i_1] [11] [i_0] [i_1]) : var_3)));
                arr_18 [i_0] [i_0] [i_1 + 2] [i_1] = ((74 ? (arr_7 [i_1 + 3] [i_1] [i_1]) : (arr_3 [i_1] [i_1 - 4])));
            }
            arr_19 [i_1] = var_8;
        }
        arr_20 [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = (--7);
        arr_24 [i_5] [i_5] = var_6;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_28 [i_6] = (((-(arr_2 [0] [6] [i_6]))));
        arr_29 [i_6] [i_6] = (!var_2);
    }
    var_18 = var_11;
    #pragma endscop
}
