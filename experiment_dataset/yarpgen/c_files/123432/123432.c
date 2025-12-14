/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 1] = (((arr_0 [i_0 - 3] [i_0 - 3]) >= (arr_0 [i_0 - 3] [i_0 - 3])));
        var_11 = (((((var_1 <= (arr_2 [i_0] [i_0 - 2]))))) - ((-5 ? -5 : 63)));
        var_12 = max(((max((arr_0 [i_0 + 2] [i_0 + 2]), var_1))), (min((arr_2 [i_0 - 1] [i_0 + 2]), ((-8263029319612468054 ? var_7 : -4)))));
        arr_5 [i_0] [i_0] = ((((((~847977744) < (106 >= var_9)))) >= (((!(arr_2 [i_0] [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = (max(var_13, 1007120713));
        arr_8 [i_1] = ((arr_7 [8]) ? (arr_7 [i_1]) : 127);
        var_14 = -1143387316;

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_15 = (min(var_15, (-1143387320 & 122)));
                arr_13 [i_2] [10] [i_2] = (((arr_11 [i_2] [i_2] [i_2] [i_2]) < ((9223372036854775807 ? 1143387320 : -742054216))));
            }
            var_16 = (arr_7 [i_2 + 2]);
        }
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            var_17 = -7;
            var_18 |= (arr_15 [i_4 + 2] [8] [i_4 - 3]);
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_19 = (123 * 13);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_20 = 133;
                            var_21 ^= (~-2230717847764475986);
                        }
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_22 = (((arr_0 [i_1] [i_1]) == 20027));
            var_23 = ((!(arr_2 [i_9 - 1] [i_9 - 1])));
            var_24 = ((((!(arr_3 [i_1]))) || ((((-1608635262356910634 + 9223372036854775807) << (((var_6 + 113) - 46)))))));

            for (int i_10 = 4; i_10 < 9;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_25 = ((arr_16 [i_10] [i_10]) ? 42 : 5);
                        var_26 = (max(var_26, ((~(arr_32 [i_10] [i_10 + 1])))));
                    }
                    var_27 = 1703;
                    var_28 = var_4;
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    var_29 = (~(arr_27 [i_9 + 1] [i_10] [i_9 + 1] [i_9]));
                    var_30 = (((arr_15 [i_10] [i_10] [i_10 - 4]) | (arr_15 [i_10 - 4] [i_10] [i_10 - 4])));
                    var_31 |= ((18446708889337462784 ? (arr_20 [8]) : (arr_20 [2])));
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                {
                    var_32 = (51206 && var_6);
                    var_33 += var_4;
                    var_34 |= (((arr_16 [i_10 - 4] [0]) ? var_6 : (arr_16 [i_10 - 4] [10])));

                    for (int i_15 = 1; i_15 < 9;i_15 += 1)
                    {
                        arr_51 [i_10] [i_14] [i_10] [i_10] = (((arr_43 [i_10 - 1] [i_10] [8] [i_15 - 1]) | (~576459652791795712)));
                        var_35 = (arr_24 [i_15 - 1] [i_15] [i_10]);
                        arr_52 [i_1] [i_9] [i_1] [6] [i_15] [i_10] [i_1] = ((~(arr_27 [i_10 - 1] [i_10] [i_14] [i_10 - 4])));
                    }
                }
                var_36 = arr_36 [i_10] [i_9] [i_10];
            }
            for (int i_16 = 1; i_16 < 9;i_16 += 1)
            {
                arr_55 [i_1] [i_1] = ((-550297421540922744 / (arr_46 [i_1] [i_9] [2] [i_9] [i_9 + 1])));
                var_37 = (((arr_22 [i_16 - 1] [4] [i_16 + 1]) << (((arr_22 [i_16] [8] [i_16 + 1]) - 72))));
            }
        }
    }
    var_38 = var_7;
    #pragma endscop
}
