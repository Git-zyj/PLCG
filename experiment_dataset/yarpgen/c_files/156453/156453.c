/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, ((min((arr_7 [i_3] [i_4] [i_3 + 2] [i_3 + 2]), (((max((arr_4 [i_0] [i_2] [i_0]), var_9)))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_2] [i_2] [i_2]);
                            var_18 = (min(var_18, (arr_2 [i_1] [i_3] [i_4])));
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = (arr_1 [i_0] [i_2 - 2]);
                            arr_17 [i_2] [i_0] [i_2 + 1] [i_2] [i_2] = ((-3646 ? -0 : 2975444773));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_19 = ((((arr_9 [i_0] [12] [i_3 - 4] [12]) ? (((!(arr_12 [i_0] [i_1] [i_2] [2] [i_2] [2] [7])))) : ((var_7 ? (arr_11 [i_0] [i_0] [i_2] [i_2] [i_0] [i_5]) : var_15)))));
                            arr_20 [i_0] [i_0] [1] [i_3] [i_5] = (arr_0 [i_0]);
                            var_20 = -var_8;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_21 = arr_14 [i_3] [i_3] [i_3 + 2] [i_3];
                            var_22 = (((((arr_18 [i_2] [i_2] [i_2] [i_0] [i_2 - 1]) ? var_10 : (arr_14 [i_0] [i_2] [i_3] [i_6]))) << (var_11 - 157)));
                            var_23 = (((((arr_4 [i_0] [i_1] [i_2]) ? ((var_11 ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) : 18446744073709551615)) : 8930420120645904840))));
                            arr_23 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = ((~(max((arr_8 [i_0] [i_1] [i_1]), (arr_19 [i_0] [i_1] [i_3 - 2] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_26 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_22 [i_7] [i_3] [i_2] [i_1] [10]);
                            var_24 = (((arr_12 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 2]) || ((max((-3646 && 142), (((arr_19 [i_0] [i_1] [i_2] [i_3]) ? var_8 : var_13)))))));
                            var_25 = -3646;
                            arr_27 [i_7] [i_7] [i_7] [i_7] [i_0] [i_7] [i_7] = (((0 ? 3646 : -423604501)));
                            arr_28 [i_3] [i_3] [i_0] [i_3] [i_3 - 1] = ((((((var_4 ? (((~(arr_18 [i_3] [9] [i_2] [i_0] [i_7])))) : (arr_22 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 2]))) + 9223372036854775807)) >> (var_14 + 28792)));
                        }
                        var_26 = (min(var_26, -var_15));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_27 ^= (((arr_3 [i_0] [i_2]) ? ((((arr_8 [i_8] [i_2 + 1] [i_2 - 1]) ? (((var_0 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [11])))) : (max((arr_6 [i_0] [i_1] [i_1]), var_2))))) : (max((~var_10), -3646))));
                        var_28 &= (max(var_13, 1122));
                    }

                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_29 = var_3;
                            arr_37 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((((arr_24 [i_2 - 2]) ? (arr_24 [i_2 + 1]) : (arr_24 [i_2 - 1])))) ? (((arr_24 [i_2 - 1]) ? (arr_24 [i_2 - 2]) : (arr_24 [i_2 - 2]))) : ((~(arr_24 [i_2 - 2])))));
                        }
                        arr_38 [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_30 = var_0;
                        arr_42 [i_0] [i_0] [i_0] [i_0] = (~-18807);
                        var_31 &= ((((arr_9 [i_0] [i_1] [i_2 + 1] [i_0]) ? (arr_10 [i_2 + 1] [i_2 - 1]) : (arr_10 [i_2 - 2] [i_2 - 1]))) > ((((arr_34 [i_2] [i_2] [i_2 + 1] [i_2 - 2]) != (arr_10 [i_2 - 1] [i_2 + 1])))));
                        arr_43 [i_0] = 162;
                        arr_44 [i_2] [i_1] [i_2 - 2] [i_1] [i_2] |= var_4;
                    }
                }
            }
        }
    }
    var_32 = var_15;
    #pragma endscop
}
