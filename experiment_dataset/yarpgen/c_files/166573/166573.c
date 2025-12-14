/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] [i_0] = ((min(1, ((1 ? 1 : var_5)))));
        arr_5 [i_0] = (~-22023743676258922);
        var_18 = (((arr_2 [i_0]) ? var_3 : var_14));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_3] [i_3] &= (((((min(2876635490, var_1)))) ? (((min(1, var_6)))) : (min((min(var_5, var_2)), ((max((arr_2 [i_3]), 127)))))));
                        arr_16 [i_1] [i_2] [i_2] [i_2 + 1] [5] [i_1] = (((arr_6 [i_4]) ? var_13 : -var_10));
                        var_19 = (-(min(905091150, (arr_6 [i_2 + 1]))));
                        var_20 = max((min((((var_2 ? var_15 : var_3))), ((var_14 ? var_5 : 22023743676258922)))), (min(var_7, (arr_8 [i_1]))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_21 -= (max(((max(var_15, 905091141))), (max((arr_18 [i_1] [i_5] [i_5]), var_16))));
            var_22 = ((-(min((arr_18 [i_5] [i_5] [i_1]), var_1))));
            arr_19 [i_1] [1] [i_5] = var_13;
            var_23 -= (max(((-1407705186 ? (arr_14 [0] [i_5] [i_5] [3] [i_5]) : var_11)), (var_14 ^ var_6)));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {

                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {
                    var_24 = (arr_0 [i_1]);
                    arr_26 [i_5] = (((var_12 | var_5) < 124));
                }
                var_25 &= var_8;
                var_26 = ((86 ? 1389766688 : 905091179));
                var_27 = ((var_5 ? 4294967295 : var_7));
            }
        }
        arr_27 [i_1] = (max((((4294967295 ? (arr_0 [i_1]) : ((1 ? var_6 : -1))))), ((((min(var_10, 7445670273714922289))) ? (905091150 + -22023743676258926) : 262143))));
        arr_28 [i_1] [10] &= var_10;
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            var_28 -= var_5;
            arr_33 [i_9] [i_8] [i_8] = ((271729214 ? var_6 : var_16));
        }
        var_29 -= var_12;
        arr_34 [i_8] = ((-(((arr_31 [i_8]) ? var_4 : (arr_29 [i_8])))));
        var_30 *= arr_25 [i_8] [4] [i_8] [i_8] [1];
        var_31 = ((((arr_17 [i_8]) ? var_17 : 1)));
    }
    var_32 ^= -var_14;
    var_33 = ((((((((var_16 ? var_17 : 9037303861059195343))) ? (min(var_3, var_9)) : ((var_8 ? 3364 : var_13))))) ? var_13 : (((max(var_3, var_4))))));
    #pragma endscop
}
