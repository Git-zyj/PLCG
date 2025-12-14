/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((~((var_1 ? var_8 : var_3)))) <= ((~(max(var_6, var_1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((44336 ? (((arr_0 [i_0]) ? (arr_2 [i_0]) : var_5)) : (arr_2 [i_0])));
        var_12 &= (!(arr_1 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_13 = ((((arr_5 [i_1]) || (arr_1 [i_1] [i_1]))));
        var_14 = (arr_3 [i_1]);
        var_15 = ((max(((var_8 ? var_0 : (arr_2 [i_1]))), ((((arr_6 [i_1] [i_1]) ? (arr_5 [i_1]) : var_10))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_16 = (max(var_16, var_4));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_19 [i_3] [i_5] = (((arr_7 [i_2]) ? (arr_0 [i_4]) : (arr_0 [i_2])));
                    arr_20 [i_2] &= (arr_9 [i_4]);
                    var_17 *= arr_16 [i_4];
                    var_18 = (arr_12 [i_2]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_19 += (arr_8 [i_2]);
                    var_20 -= (arr_2 [14]);
                }
                var_21 = (min((((+(max((arr_3 [i_4]), var_3))))), var_0));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_27 [i_3] = 1389310211;

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    arr_30 [i_2] [i_2] [i_3] [i_8] = (((1 / var_8) ? 16376 : (arr_28 [i_2] [i_3] [i_7] [i_8])));
                    var_22 = ((0 ? 1 : 44338));
                    arr_31 [i_2] [i_3] [i_3] [i_3] = (((arr_5 [i_2]) == (~var_10)));
                }
                var_23 = (min(var_23, ((((arr_15 [i_2] [i_3] [i_2]) ? (arr_15 [i_2] [i_3] [i_7]) : (arr_15 [i_2] [i_2] [i_2]))))));
                arr_32 [i_3] [i_3] [i_3] = (((arr_10 [i_3]) || var_4));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                arr_35 [i_2] [i_3] [i_3] = (arr_3 [i_2]);
                arr_36 [i_3] [i_3] = arr_5 [i_2];
                var_24 -= (((arr_34 [i_3] [i_2]) ^ (arr_34 [i_2] [i_2])));
            }
            arr_37 [i_2] [i_3] [i_3] = var_1;
            arr_38 [i_2] [i_3] [i_3] = var_4;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_25 = (arr_8 [i_2]);
            arr_42 [i_2] [i_10] [i_10] &= (((!65530) == (((arr_34 [i_2] [i_10]) | var_10))));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_45 [i_2] = (((~var_7) ^ ((max(6121524570972018060, 3920616869)))));
            var_26 ^= ((((((~(arr_34 [i_11] [i_11]))) + 2147483647)) << (((arr_18 [i_2] [i_2] [i_11] [i_11]) - 1))));
        }
        arr_46 [i_2] [i_2] = (-21198 ? (min(var_6, (var_9 / var_8))) : (((~((8708 ? 136 : (arr_13 [i_2] [16])))))));
        var_27 = (max(var_27, (arr_21 [i_2] [7] [i_2] [i_2])));
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_28 = (arr_14 [14] [14] [14] [i_12]);
        arr_49 [i_12] = ((((((arr_26 [16] [i_12] [16]) ? (arr_26 [16] [i_12] [i_12]) : (arr_26 [14] [6] [i_12])))) * ((((((arr_23 [i_12] [1]) ? (arr_18 [i_12] [i_12] [i_12] [i_12]) : (arr_12 [i_12])))) * ((var_7 * (arr_7 [18])))))));
    }
    #pragma endscop
}
