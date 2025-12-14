/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, var_0));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 += (arr_8 [13] [i_1] [i_2]);
                    var_15 |= (max(((((arr_5 [i_1] [i_1 + 2]) > 124))), (arr_5 [i_0] [i_0])));
                    arr_9 [i_0] = (~var_6);
                }
            }
        }
        arr_10 [0] |= (max((((var_1 ? (arr_4 [i_0] [i_0] [i_0]) : 7599))), (((arr_0 [i_0] [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_16 = (max(var_16, var_5));
        var_17 = ((~(arr_3 [i_3] [i_3] [i_3])));
        arr_13 [i_3] = (((arr_5 [i_3 + 1] [i_3 + 1]) <= (((2118439936 < (arr_5 [i_3 + 1] [i_3 + 1]))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_18 |= (min((((((arr_16 [i_4]) ? var_9 : var_2)))), var_12));
        arr_17 [16] = ((~(((0 <= (arr_15 [i_4] [i_4]))))));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_19 ^= (((((((((arr_2 [i_5 - 2] [i_5]) ? 54014 : var_8))) ? ((255 ? (arr_3 [i_5] [i_5] [i_5 - 1]) : var_7)) : var_12))) ? 8 : ((8 ? (arr_3 [i_5] [i_5 - 1] [i_5]) : var_1))));
        var_20 -= ((((~(arr_7 [i_5] [i_5] [i_5])))) ? 4095 : (arr_15 [i_5] [i_5 + 1]));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            arr_23 [i_5 + 1] [4] [i_6 + 1] = (arr_6 [i_6 + 2] [i_5 + 1]);
            var_21 -= var_7;
        }
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            var_22 &= (arr_1 [i_5]);
            var_23 *= (arr_7 [i_5 - 1] [i_5] [i_5 - 1]);
            var_24 |= (arr_27 [2] [i_5] [i_5]);
        }
        for (int i_8 = 4; i_8 < 12;i_8 += 1)
        {
            var_25 = (min(var_25, 53287));
            var_26 |= (arr_16 [i_5 - 1]);
        }
    }
    var_27 = ((var_8 ? var_8 : (~8)));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            {

                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    var_28 += (((((arr_16 [i_11 - 1]) / (arr_0 [i_9] [i_10]))) ^ (arr_3 [i_9] [i_11 + 2] [i_9])));
                    arr_38 [i_10] [i_10] = arr_34 [i_10] [i_10];
                    var_29 = (arr_7 [i_9] [i_10] [i_11]);
                    arr_39 [i_9] [i_9] [i_11] |= ((((-13 ? 39372 : (arr_34 [i_9] [i_9]))) * (((var_4 ^ ((max((arr_0 [11] [i_9]), (arr_2 [i_10] [i_11])))))))));
                }

                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    arr_44 [i_9] [i_10] [i_12] [i_9] |= ((4015816825 ? (arr_5 [i_9] [8]) : (arr_41 [i_9] [i_9] [i_10 - 2])));
                    var_30 += ((((((((arr_3 [i_9] [i_10] [i_12]) ? var_5 : 45815))) ? var_0 : (arr_2 [11] [11])))) ? ((var_7 ? (arr_43 [i_10 - 1] [i_10 + 2] [i_10 + 1]) : -50)) : (arr_3 [i_9] [i_10 + 1] [18]));
                }
                var_31 |= ((!(arr_5 [i_10 + 2] [i_10 - 1])));
            }
        }
    }
    #pragma endscop
}
