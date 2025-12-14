/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_19 = (max((max((min(var_5, var_12)), ((max(14, (arr_6 [i_0])))))), ((max((max((arr_0 [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0]))), (min(var_9, var_11)))))));
                        var_20 = (max((min((min((arr_7 [i_0] [i_2] [i_3]), 14)), (min(var_4, var_7)))), ((max((max(104, var_6)), (max(var_5, (arr_0 [i_2]))))))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_21 = min((min((max(var_8, 7860202357727394405)), ((min((arr_4 [i_0] [i_2] [i_5]), 36101))))), ((max(((max(125, 47))), (min((arr_5 [i_5]), (arr_9 [11] [i_0] [i_2] [6] [i_0])))))));
                            var_22 = (max(var_22, ((max((min((min(14, var_6)), ((max(var_18, var_13))))), ((max((min(102, 63)), ((min(96, -96)))))))))));
                        }
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_23 = (min(-8683632750538540362, 6009016967742688139));
                            arr_18 [i_0] [i_4] [i_2] [4] [i_4] = (max(((max((max(var_2, var_15)), ((max((arr_13 [i_6] [i_6 + 1] [i_6 + 1] [i_6]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (min(((max(var_8, var_4))), (min((arr_5 [i_2]), (arr_17 [i_4] [i_1] [i_2] [i_1] [i_6])))))));
                            arr_19 [16] [i_1] [i_2] [i_1] [i_4] [i_6 - 1] = (max(((max((max(126, var_6)), (max(var_5, (arr_3 [i_0])))))), (max(((min(-1826498586, var_8))), (max(var_10, var_12))))));
                            var_24 -= (max(((min((max((arr_10 [i_0] [i_2] [22] [i_6 - 1]), var_15)), ((max(var_18, (arr_13 [i_6 + 1] [i_6 + 1] [i_2] [14]))))))), (min((max(18446744073709551615, 8933994142945092196)), ((max(var_3, var_5)))))));
                            var_25 ^= (max((max((max(8374475503171636091, 3)), ((max((arr_6 [5]), -129638257718293584))))), ((max(((min(8711, 14))), (min((arr_2 [7]), (arr_14 [10]))))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_26 = 1;
                            arr_24 [i_7] [i_7] [i_2] [i_1] [i_7] [i_0] = 1;
                            var_27 = (max(var_27, 3));
                            arr_25 [i_7] [i_7] [i_2] [i_7] [i_0] = 6;
                        }
                        var_28 = (max((max((max(var_6, -6925081742176273361)), ((max(9079, (arr_20 [i_4] [10] [i_1] [i_1] [i_0] [i_0])))))), (min((max(-6395703758925842148, (arr_21 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4]))), ((max((arr_17 [i_4] [13] [i_2] [i_1] [i_0]), (arr_20 [i_0] [i_1] [i_1] [14] [i_4] [i_1]))))))));
                    }
                    arr_26 [i_2] [i_1] &= (max((max((max(17, (arr_13 [i_2] [i_1] [i_0] [i_0]))), ((max(var_9, -30))))), ((min(((min(0, 65535))), (max((arr_2 [i_2]), var_4)))))));
                    var_29 = (max((max((max((arr_5 [i_0]), (arr_22 [i_0] [i_0] [i_2]))), ((max(15728640, (arr_6 [i_0])))))), ((min(-679212833, 251)))));
                    arr_27 [i_1] [21] [i_1] = (min(((min((max(var_9, 108)), ((min(var_11, 113)))))), (min(((min(var_6, (arr_6 [i_2])))), (min(var_12, -679212833))))));

                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            var_30 = (min(((max((min(-10, 250)), ((max((arr_16 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9]), -120)))))), (max(18446744073709551612, ((min(1, 104)))))));
                            var_31 = (max((min((min((arr_11 [i_0] [i_1] [i_2] [i_8 + 3] [i_1]), 18446744073709551604)), ((min((arr_33 [i_8 + 1] [i_2] [i_0]), (arr_15 [i_0] [i_1] [1] [i_0] [i_2] [i_0] [i_1])))))), ((max((max(24064, 9954)), ((max(var_5, (arr_15 [i_9] [i_9] [i_8] [7] [8] [i_1] [i_0])))))))));
                            var_32 -= (max(((max(((min(var_13, var_18))), (min(10, var_9))))), (max(((max(-679212833, -32764))), (max((arr_7 [i_8 + 2] [5] [i_8 + 1]), (-9223372036854775807 - 1)))))));
                            var_33 = (max(((max((min(var_8, 202)), ((max(12040, var_6)))))), (max(((max(var_3, 252))), (min(7, (arr_7 [i_8 + 1] [i_9 + 1] [i_8 + 1])))))));
                        }
                        arr_34 [2] [i_1] [2] [i_1] &= (min((min((max(var_1, 31977)), (min(var_3, 40540)))), ((max((min(103, 32)), (max(152, (arr_14 [i_8]))))))));
                        var_34 = (max((min((max((arr_1 [i_0] [i_1]), 679212832)), (min(var_8, -113)))), ((max((max(-1, 16263)), ((max(var_6, var_18))))))));
                        var_35 = (max((max(((max(24995, 24064))), (min(19200, var_7)))), (max(18446744073709551614, -679212824))));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_38 [i_0] [i_2] [i_2] = (max(((max((min(12960, (arr_10 [i_2] [i_2] [i_2] [i_2]))), (max(var_2, 1))))), (max(((min(11, (arr_36 [i_0] [18] [i_2] [14])))), (min(8796093022206, 240))))));
                        var_36 = (max(((max((max((arr_31 [i_2] [i_2]), (arr_17 [i_1] [i_2] [i_2] [i_1] [i_0]))), ((min(var_13, 1)))))), (max((max((arr_13 [i_10] [i_2] [i_1] [23]), -4467127060318232546)), ((min(var_6, var_4)))))));
                        var_37 = min((max(((max(var_11, (arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_10])))), (min(104, (arr_36 [i_0] [i_0] [i_2] [i_10]))))), ((max((max(var_15, 1625800607)), ((max(160, var_3)))))));
                        arr_39 [i_0] = (min(((max(65535, 41472))), (min((max(var_4, (arr_22 [i_10] [i_1] [i_0]))), ((max(var_9, (arr_30 [i_0] [i_2]))))))));
                    }
                }
            }
        }
    }
    var_38 -= (max((max((max(5369579196034394181, var_9)), (max(-1064105471, var_7)))), ((min((max(102, -3245206251487819141)), -11)))));
    var_39 += (min((min(33736, 1)), ((max(1, 1)))));
    var_40 = (min((max((max(var_18, 2)), ((max(252, var_13))))), (max(((max(var_18, 121))), (max(6869577066047349414, var_10))))));
    #pragma endscop
}
