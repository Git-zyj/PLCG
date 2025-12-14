/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = (((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (arr_2 [i_0 - 1] [i_0 + 1])));
        var_19 |= ((-1345325080 / (arr_2 [i_0 + 2] [i_0 + 1])));
        arr_3 [i_0] = ((var_12 << (var_7 - 58847)));
        var_20 = (((arr_1 [i_0 - 1]) && var_7));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 = (min(var_21, (~163985028686448478)));
            var_22 = ((65535 ^ (arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 2])));
            var_23 = (arr_5 [i_2] [i_2]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = ((-((~(arr_11 [i_1 - 1] [i_1] [i_3])))));
            arr_12 [16] [i_3] |= (((arr_2 [i_3] [i_3]) ? -18446744073709551615 : (((arr_9 [i_1 + 3] [i_1] [i_1 + 2]) ? 63 : 18446744073709551615))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_4] [i_4] [i_1 + 2] = ((~(arr_8 [i_1 - 1])));
            var_25 |= -6762464934684839754;
        }
        var_26 |= (arr_5 [i_1 + 3] [i_1 + 3]);
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_27 = (((((arr_16 [i_1 + 3] [i_5 - 1]) >> (((arr_21 [i_1] [i_1]) - 3521696561577129027)))) != 9174));

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_28 |= -9223372036854775807;
                            arr_28 [i_7] [16] [16] [i_1 - 1] |= (((arr_6 [i_1 - 2]) && (arr_1 [i_1 + 3])));
                            var_29 &= ((~(arr_9 [i_5 + 2] [i_1 - 2] [i_1 - 2])));
                            var_30 = var_9;
                        }
                        for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_31 = ((!(arr_14 [i_1 - 2] [i_1 + 2])));
                            var_32 = (((arr_23 [i_9 + 1] [i_1 - 1] [i_1 + 2]) <= ((((arr_14 [i_9 + 2] [i_6]) && var_7)))));
                        }
                        for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_33 = ((((((arr_30 [i_10 - 1] [i_7] [i_6] [i_5 - 1] [i_1 + 3]) ? 5346295895607299143 : (arr_24 [i_1] [i_5 - 1] [i_6] [i_10])))) ? (-9223372036854775782 / -7530501488220163118) : ((((arr_2 [i_1 + 3] [i_1]) ? 29 : 13)))));
                            arr_35 [i_1 - 2] [i_1 - 1] [0] [i_1] &= ((-(arr_7 [i_6] [i_5 + 2])));
                            var_34 = (((arr_29 [i_1 - 1] [i_5 - 1] [i_5 - 1] [i_6] [i_7] [i_10 - 1]) % (((arr_8 [i_1 + 1]) | var_4))));
                            var_35 = arr_20 [i_5] [i_5];
                            var_36 |= ((((arr_8 [i_1 + 2]) > var_6)) ? (((arr_24 [i_1 + 1] [i_5] [i_6] [i_7]) ? (arr_32 [i_10] [i_10] [i_7] [i_6] [i_5 - 1] [i_1]) : -6762464934684839754)) : 65524);
                        }
                        var_37 += (((arr_4 [i_5]) ? 10 : ((1354012373 ? 25 : 11))));
                        var_38 = (max(var_38, ((((arr_8 [i_5 + 1]) ? (((50192 ? 20 : (arr_14 [i_5 + 2] [i_7])))) : (arr_4 [i_1 - 1]))))));
                    }
                }
            }
        }
        var_39 = ((0 ? (arr_26 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [6]) : (((!(arr_33 [i_1] [12] [i_1]))))));
    }
    var_40 = (max(var_40, ((min(4294967295, 1)))));
    var_41 = ((var_2 ? (max((!var_6), ((var_8 ? var_0 : var_7)))) : (((var_2 ? 24 : var_5)))));
    #pragma endscop
}
