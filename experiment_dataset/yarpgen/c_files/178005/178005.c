/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = var_9;
    var_19 = var_6;
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = var_2;
        var_22 *= (arr_1 [i_0]);
        var_23 += (arr_1 [1]);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_24 += (arr_3 [i_1 + 1]);
        var_25 = ((39124 ? -16 : (((arr_2 [i_1 - 1]) ? var_12 : (arr_2 [16])))));
        arr_4 [i_1] |= (65530 ^ -4);

        /* vectorizable */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_7 [i_2] [i_2] = (arr_5 [i_2]);
            var_26 ^= (arr_2 [i_2]);
            var_27 = (6271880392893072045 + var_3);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_28 += (((((var_6 ? (arr_5 [i_1]) : (arr_2 [i_3])))) ? (arr_8 [i_1 + 1]) : (arr_8 [i_1])));
            var_29 = (((arr_2 [12]) ? (arr_5 [i_1]) : -1805469039));
            arr_10 [i_1] [i_1] [i_1] = (((arr_2 [i_1 + 1]) > (arr_2 [i_1 + 1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_14 [4] = (arr_11 [12] [1] [i_1 - 2]);
            arr_15 [i_1] [i_1] &= (arr_2 [i_1]);
            arr_16 [1] [6] [i_4] = var_9;
            var_30 = (arr_9 [9] [i_4]);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_31 = (arr_11 [i_5] [i_5] [i_5]);
        arr_20 [17] [i_5] = arr_19 [18] [i_5];

        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            var_32 = (min(var_32, (arr_13 [i_5] [i_6 - 1])));
            var_33 = (((arr_19 [14] [i_6 + 1]) ? (arr_19 [i_5] [i_6 - 1]) : (arr_19 [9] [i_6 + 2])));
        }
    }
    #pragma endscop
}
