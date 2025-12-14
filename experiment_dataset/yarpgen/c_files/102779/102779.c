/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_7);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = ((!(((var_14 ? (~var_10) : ((var_14 ? var_2 : -562578592)))))));
        var_19 = (min(var_19, (arr_0 [6])));
        var_20 -= (((((((arr_0 [i_0]) ? var_3 : 1754406768))) ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) : ((var_12 ? 52432 : var_9)))) * (((+(((arr_2 [i_0]) ? var_16 : var_6))))));
        var_21 = ((var_13 ? (((!(!var_16)))) : -var_5));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 = var_4;
                            arr_16 [i_1 - 2] [i_2 + 1] [i_1] [i_4] [i_5] = ((~((max(90, var_11)))));
                        }
                    }
                }
            }
            var_23 ^= (((((var_0 * var_1) ? (!var_10) : 0))) ? (0 / 3354966817) : ((((var_14 > var_13) || (var_16 + var_3)))));
            var_24 *= ((!((((arr_4 [8]) / (arr_4 [8]))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_25 = ((0 ? 0 : 0));
                        arr_23 [10] [10] [i_6] [10] &= var_1;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_26 = var_11;
                    arr_29 [i_1] [i_8] [i_1] [i_1] = (-32767 - 1);

                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        var_27 = ((((((arr_5 [i_1 - 2] [i_1 - 2]) ? (arr_5 [i_1 + 1] [i_1 + 1]) : var_7))) ? (max((arr_5 [i_1 + 1] [i_1 - 1]), var_1)) : (arr_5 [i_1 - 1] [i_1 + 1])));
                        var_28 = ((-(max(((-1988810522 ? (arr_1 [4]) : var_16)), (arr_31 [i_1])))));
                        arr_32 [i_1 - 3] [i_1 - 3] [i_1] = var_15;
                        arr_33 [i_1] [i_1] [1] [i_1] [3] [i_1] = 1;
                        var_29 = (min(var_29, ((((((8414987935101262080 / var_2) * -6436579066226908281)) / ((((((var_16 ? var_10 : var_10))) ? ((-28182 ? (arr_18 [i_1] [i_1] [i_9] [4]) : var_0)) : ((253 ? 124 : 1))))))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_37 [i_8] [9] [i_1] [i_11] [6] = (((arr_13 [i_1] [i_1 - 3] [i_1] [i_1] [4] [6] [i_1]) ? (((arr_4 [i_1]) ? 1541810874 : var_13)) : (((arr_5 [4] [8]) ? var_14 : 0))));
                        var_30 ^= (((arr_17 [i_1 + 1]) ? -6184 : (32767 + var_15)));
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_31 = (max((min(18446744073709551615, -29759)), var_4));
                        arr_41 [i_9] [i_1] [i_1] = (-var_12 > var_16);
                        var_32 -= (((-((32756 ? 120 : (arr_28 [i_8] [8] [1] [i_12]))))));
                        var_33 = ((18446744073709551615 ? 37 : -44));
                        var_34 = ((((!(((var_2 ? 18446744073709551591 : 18446744073709551591))))) ? (arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_12] [i_1]) : (((((6010035565197073731 ? var_2 : var_12)))))));
                    }
                }
            }
        }
        var_35 = (((((var_2 ? 2228149595 : 4294967295)) * (((max((arr_19 [10]), var_6)))))) & (((18 ? 10921 : -49))));
        var_36 = (max(var_36, ((min((((var_10 < (((arr_18 [i_1] [i_1] [i_1] [3]) ? var_14 : var_13))))), ((var_4 ? (!var_13) : ((var_11 ? (arr_25 [8] [i_1 - 3]) : (arr_20 [6] [10] [10]))))))))));
    }
    for (int i_13 = 2; i_13 < 16;i_13 += 1)
    {
        var_37 = var_10;
        var_38 = (min(var_38, ((-((((min(-21, (arr_42 [i_13 - 1])))) ? (((max(32767, (-32767 - 1))))) : ((30 ? var_8 : (arr_43 [i_13 - 1])))))))));
    }
    var_39 = (max(var_39, var_13));
    var_40 |= var_7;
    var_41 = (max(var_41, (-2147483647 - 1)));
    #pragma endscop
}
