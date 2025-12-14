/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0 - 1] [i_0] = (~var_4);
            arr_6 [i_0] [i_1] = ((((arr_0 [i_0]) | var_4)));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] = ((var_5 ? var_3 : ((~(((arr_4 [i_2] [i_2] [i_0]) & var_5))))));

            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                arr_13 [i_0] [i_2] [2] = (arr_12 [i_0 - 1] [i_2] [i_3]);
                var_18 ^= 1;
                arr_14 [i_3] [i_0] [i_0] [i_0 - 2] = (min(var_12, (((var_13 ? (arr_12 [i_0] [i_0] [i_0 - 2]) : (arr_12 [13] [i_3 + 1] [i_0 - 4]))))));
                var_19 -= (min(var_16, (min(var_6, (arr_10 [4])))));
                var_20 = (max(var_20, (arr_7 [i_0 - 2])));
            }
            for (int i_4 = 4; i_4 < 14;i_4 += 1)
            {
                var_21 ^= ((((!((max(var_16, 9883598027805679108)))))) ^ (min(var_11, ((max((arr_11 [8]), (arr_7 [i_2])))))));
                var_22 = (min(1, (max((var_0 ^ 64650), (((var_7 ? (arr_15 [i_2] [i_2]) : var_14)))))));
                var_23 = ((-((var_3 * (arr_10 [i_0])))));
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_24 = (((arr_8 [i_0] [i_0 + 1] [i_0]) + -1935086215));
            arr_20 [i_0] [i_0] = 63;

            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                var_25 += (arr_18 [i_0] [13] [i_0]);
                var_26 = ((~((var_11 ? (arr_19 [i_0 - 3] [i_0]) : (arr_19 [12] [i_0 - 1])))));
            }
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                var_27 = var_9;
                var_28 = (~127);
            }
        }
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            arr_28 [6] [i_0] [i_8] = var_11;
            var_29 ^= ((~(arr_26 [i_0 - 4] [i_8 - 2])));
        }
        arr_29 [i_0] = ((127 >= (arr_1 [i_0])));
    }
    var_30 = (max(var_30, var_9));
    #pragma endscop
}
