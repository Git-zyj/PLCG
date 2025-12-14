/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 = (((arr_2 [i_1] [i_1]) & (arr_4 [i_1])));

        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_1] = (arr_5 [i_1] [i_1]);
            arr_12 [i_2] [i_1] = (~(arr_0 [6]));
        }
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            arr_15 [i_1] [i_3] [i_3] = ((((~(arr_5 [i_1] [i_1]))) >= (arr_8 [i_1] [i_3 - 3] [i_3 - 1])));

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                arr_19 [i_4] [i_4] = (0 / -2147483639);
                var_18 = -65517;
            }
        }
        var_19 = ((~(arr_8 [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5] = (arr_20 [i_5]);

        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    var_20 = (min(var_20, (((~(((arr_7 [i_5] [i_5]) & (arr_0 [i_7]))))))));
                    var_21 += (((arr_30 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_6 + 1]) ? (arr_29 [i_5] [i_6] [i_7] [i_8 + 1] [i_8 + 1]) : (((arr_25 [i_5] [i_6] [i_8]) + (arr_28 [i_5] [i_5] [19])))));
                    var_22 *= (arr_4 [i_5]);
                }
                var_23 += (((arr_21 [i_6 - 2]) ? (arr_23 [i_5] [i_7]) : (arr_8 [i_6 - 2] [i_6 + 1] [i_6 - 1])));
                arr_31 [i_5] [i_6] [i_5] = (((~(arr_29 [12] [i_6 + 1] [i_6] [i_7] [1]))));
                arr_32 [i_6] = (((arr_30 [i_7] [i_7] [13] [i_5]) >= (((arr_18 [i_6]) ? (arr_6 [i_5]) : (arr_9 [i_7])))));
                arr_33 [i_6] [i_6] = ((((arr_24 [i_5] [i_6] [i_7]) << (((arr_5 [i_5] [i_6]) - 136)))));
            }
            for (int i_9 = 4; i_9 < 18;i_9 += 1)
            {
                var_24 = (((arr_26 [10] [10] [i_9] [10]) / ((~(arr_10 [i_9 + 2])))));
                var_25 = (arr_6 [i_9 - 1]);
                arr_36 [i_6] [i_9] [i_6 - 1] [i_6] = (arr_26 [19] [i_6] [i_6 - 1] [i_6 - 1]);
            }
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_39 [i_5] [i_6] [i_6] = ((((arr_2 [i_10] [i_6 + 1]) ? (arr_6 [i_10]) : (arr_6 [i_5]))));
                var_26 = (arr_6 [i_5]);
                arr_40 [i_6] [i_6] = ((((arr_37 [i_10] [i_6] [i_10] [i_10]) >= (arr_26 [i_10] [i_10] [i_6] [i_5]))));
                arr_41 [i_6] [i_6] [i_6] [i_6] = ((-(arr_35 [i_6] [i_5] [i_6 + 1] [i_6 - 2])));
                var_27 = (min(var_27, ((((arr_37 [i_6 + 1] [i_10] [i_6 - 2] [i_6 - 2]) ? (arr_25 [i_6 - 1] [i_6 - 1] [i_6 - 2]) : (arr_25 [i_6 - 1] [i_6 + 1] [i_6 - 2]))))));
            }
            arr_42 [i_5] [i_6] = (((arr_9 [i_5]) ^ (arr_17 [i_6 - 2] [i_6] [i_6] [i_5])));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_28 = ((~(arr_20 [i_5])));
            arr_45 [i_5] = (((arr_29 [i_11] [i_5] [i_11] [i_5] [9]) & (((arr_14 [i_5] [i_11]) / (arr_23 [i_11] [8])))));
        }
    }
    var_29 = var_3;
    var_30 -= var_13;
    var_31 = var_4;
    #pragma endscop
}
