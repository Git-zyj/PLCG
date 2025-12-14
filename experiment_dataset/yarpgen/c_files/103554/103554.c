/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_20 = (max((arr_0 [i_0 + 1]), var_16));
        var_21 = (!-9427);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = ((((((arr_1 [i_0 - 3]) - ((var_12 ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : var_17))))) % ((var_7 ? ((min(35477, 1253911322784358138))) : ((251 ? var_3 : var_2))))));
                    var_23 = var_9;
                    var_24 = (!33485);
                }
            }
        }
        var_25 = 251;
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_26 ^= 33506;
            arr_13 [i_3] [i_4 - 2] [i_4 - 2] = 101;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_17 [i_3] [i_3] [i_5] = (155 || -4205178403156563730);
            arr_18 [i_3] = (((-9223372036854775807 - 1) << (26592 - 26577)));

            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                var_27 = (((((arr_9 [i_3]) ? 108 : 139)) == (!33475)));
                arr_21 [i_3] [i_6] [i_3] = -699246093946500101;
            }
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                var_28 = -125;
                arr_24 [i_7] = (max((((var_18 + -9223372036854775801) ? (-8241075450594534342 % var_15) : -70)), (((min(16, -1270927734886732))))));
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    arr_32 [i_3] [i_8] [i_9] [i_3] = var_4;

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_29 += (min(var_12, ((~(((((arr_27 [i_9]) + 2147483647)) << (31 - 31)))))));

                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            var_30 = (max(var_30, (!var_11)));
                            var_31 = (min(var_31, var_7));
                            var_32 &= 58;
                            var_33 = (-32767 - 1);
                        }
                    }
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {

                        for (int i_13 = 4; i_13 < 17;i_13 += 1)
                        {
                            arr_43 [i_3] [1] [i_3] [i_3] [i_9] = ((!((min((!var_16), (arr_40 [i_9] [i_13 - 4] [i_13] [12] [i_13]))))));
                            var_34 = ((((~(175 ^ -4981951329876602441))) << ((((var_8 << (var_11 - 241888603854971649))) - 16094598430826954752))));
                            arr_44 [i_3] [i_8] [i_9] [i_12] [i_13] = var_14;
                            var_35 = (max(699246093946500100, (min(var_7, 168))));
                            var_36 = (min(var_36, ((((((~(15872 ^ var_6)))) ? ((~(33471 & -4))) : ((~((min(15, var_5))))))))));
                        }
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            arr_48 [4] [i_8] [i_9] = ((!(((((var_6 ? -8811 : var_15))) || (((var_9 ? var_11 : 4)))))));
                            var_37 = arr_31 [i_14];
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            arr_51 [i_3] [i_9] [i_9] [i_12] [i_12 + 1] [i_3] [i_12] = (arr_16 [4] [i_9] [i_15]);
                            var_38 = (max(var_38, (!var_6)));
                            var_39 = -var_11;
                            arr_52 [i_3] [11] [i_9] [i_9] [1] = 7;
                        }
                        var_40 = -18916;
                        var_41 = ((((1 ? 4981951329876602440 : 8654)) / ((max(-8811, ((-6999181151747731715 ? var_6 : 100)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
