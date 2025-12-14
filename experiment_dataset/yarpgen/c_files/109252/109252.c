/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_10 = (((((~(((arr_2 [i_0]) - var_8))))) ? ((-((1 ? (arr_0 [8] [i_0]) : (arr_0 [i_0] [3]))))) : var_6));
        var_11 = (((((min(var_5, (arr_0 [i_0] [i_0])))) ? (((var_2 < (arr_1 [i_0] [i_0])))) : (767941301608533771 <= 9352))));
        var_12 = ((var_2 ? (((((var_8 ? (-127 - 1) : -2116397200))) ? -127 : (arr_0 [i_0] [i_0]))) : (6325969830929014716 && var_0)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = 9223372036854775807;
        var_14 = (((((((arr_2 [i_1]) && 9223372036854775808))) >> (var_8 - 3243350074348311354))));
        var_15 = (207 == 12120774242780536899);
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_16 = 7936950092359082960;

        /* vectorizable */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_17 = (6559 & -var_6);
            var_18 *= (arr_9 [i_2]);
        }
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_19 = (min((min(var_6, (arr_12 [i_4 + 1]))), ((min((min(1, 28661)), (arr_11 [i_4 + 1]))))));
        var_20 = ((~(min((-9223372036854775807 - 1), (((15756579630066026942 ? (arr_12 [i_4]) : 127)))))));
        var_21 = (arr_12 [i_4 - 1]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                {
                    var_22 = ((min(((9223372036854775807 ? var_8 : 0), ((var_8 + (arr_11 [i_4])))))));
                    var_23 = (min((((arr_11 [i_4 + 1]) && (arr_15 [i_4 + 1] [i_6 - 1] [i_6 - 1]))), (((arr_11 [i_4 + 1]) >= 0))));
                    var_24 = 17835269069853109267;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_25 = (((arr_11 [i_7]) & (~127)));
        var_26 = ((-((((min(var_4, 0))) ? (!var_3) : (!125)))));
        var_27 = (max(63, ((max(var_3, var_5)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_28 = ((((119 ? (arr_13 [i_8] [i_8]) : (arr_21 [i_8])))) ? -var_3 : 39);
        var_29 = (min(var_29, -119));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            {
                var_30 = min((((21804 | 0) ^ -1)), (~var_7));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        {

                            for (int i_13 = 0; i_13 < 14;i_13 += 1)
                            {
                                var_31 = (arr_22 [i_9] [i_9]);
                                var_32 = var_0;
                            }
                            for (int i_14 = 0; i_14 < 14;i_14 += 1)
                            {
                                var_33 = ((1 & (((4538782837998761223 < (((min(1, 1)))))))));
                                var_34 &= -21205;
                                var_35 *= ((((-(arr_10 [i_9 + 1] [i_9]))) <= (((arr_10 [i_9 + 1] [i_9]) ? (arr_10 [i_9 + 1] [i_9]) : var_4))));
                            }
                            for (int i_15 = 0; i_15 < 14;i_15 += 1)
                            {
                                var_36 = min(((((arr_18 [i_9 - 1] [i_9]) / (arr_18 [i_9 + 1] [i_9])))), -1);
                                var_37 = ((!((min((1 || -1), (arr_31 [i_9] [i_9] [i_9] [i_9]))))));
                                var_38 = (arr_10 [i_11] [i_12]);
                                var_39 = (!9007199187632128);
                            }
                            var_40 = (max(var_6, var_2));
                        }
                    }
                }
                var_41 = (min((arr_32 [i_9] [i_9] [i_9]), (max(13907961235710790373, -125))));
                var_42 ^= ((min(144115188075855871, (arr_29 [i_9] [i_9] [i_9] [11]))));
            }
        }
    }
    #pragma endscop
}
