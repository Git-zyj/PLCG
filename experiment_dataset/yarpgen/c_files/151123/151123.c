/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_14 = ((+(((64187 - var_12) ? (((2017024032 ? (arr_4 [i_0]) : 1))) : (min(var_4, (arr_6 [i_1] [i_1])))))));
            var_15 = 1;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [10] = (arr_6 [i_0] [15]);
            var_16 = (max(var_16, var_1));
            var_17 *= ((var_0 ? var_9 : (arr_2 [i_2])));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [15] [i_3] [15] [15] = (((((2277943262 ? 1 : (arr_10 [i_0] [i_0])))) ? (arr_7 [i_2] [i_5]) : 2017024019));
                            var_18 &= (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [19]);
                            arr_19 [i_2] [i_2] [i_2] = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [15] [15]);
                            var_19 = var_5;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_20 = (max(var_20, (arr_13 [i_0])));
                    var_21 = var_0;
                    arr_23 [1] [1] [i_3] [6] = var_7;
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_22 *= (((arr_12 [i_0] [i_0] [i_0]) ? (!1) : var_0));
                    var_23 = (!var_13);
                    arr_26 [i_0] [i_2] [i_0] [i_7] = ((var_3 ? 1 : -var_6));
                }
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    arr_31 [i_0] [i_0] [i_3] [i_0] [i_0] = (((arr_30 [i_2] [i_8] [i_8] [i_8 + 2]) ? ((var_5 ? (arr_11 [i_0] [i_2] [i_8 + 2]) : var_5)) : ((-9223372036854775803 ? var_9 : 4464))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = (max(var_24, (((var_0 / (((arr_4 [9]) ? var_9 : -12357)))))));
                        arr_34 [i_2] [i_2] [i_2] [i_2] [9] = (arr_22 [5] [i_2] [i_8 - 1] [i_8 - 1]);
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_37 [i_0] [i_2] [i_0] [i_2] [i_10] = (((2277943254 ? var_11 : 1)));
                        var_25 += (((arr_15 [i_8 - 1] [i_8 + 2]) ? (arr_15 [i_8 + 1] [i_8 + 2]) : (arr_15 [i_8 + 1] [i_8 - 1])));
                        arr_38 [i_0] [i_0] [i_0] [1] [i_0] [i_0] = (((arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1]) || (arr_20 [i_8 + 1] [i_2] [i_3] [i_3])));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_26 *= (((6917529027641081856 ? 1 : var_1)));
                        arr_41 [i_0] [i_0] &= (((arr_11 [i_8 + 2] [i_2] [i_8 + 2]) >> (1356759828713022967 - 1356759828713022947)));
                    }
                }
            }
        }
        var_27 = (((((((var_1 ? -12361 : 9320092600171081030)) + var_9))) ? ((((arr_15 [i_0] [i_0]) ^ (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (max(((((arr_11 [i_0] [i_0] [i_0]) ? var_8 : (arr_2 [i_0])))), (max(var_8, var_3))))));
        arr_42 [i_0] = (((+(((arr_32 [2] [2] [i_0] [2] [i_0] [1]) / var_10)))));
        var_28 ^= (((arr_3 [1]) | ((min(var_0, ((max(var_10, var_8))))))));
    }
    var_29 -= var_8;
    var_30 = ((var_1 ? var_5 : var_6));
    var_31 = (max(var_31, var_7));
    #pragma endscop
}
